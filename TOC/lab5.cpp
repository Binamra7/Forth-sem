#include<iostream>
#include<cstring>
#define NO_OF_CHARS 512

using namespace std;
// builds the TF table which represents Finite Automata for a given pattern
void transitiontable(char *p, int P, int TT[][NO_OF_CHARS]) {
   int i, longestprefixsuffix = 0, y;
   // put entries in first row
   for (y =0; y < NO_OF_CHARS; y++)
   TT[0][y] = 0;
   TT[0][p[0]] = 1;
   // put entries in other rows
   for (i = 1; i<= P; i++) { // Copy values from row at index longestprefixsuffix
      for (y = 0; y < NO_OF_CHARS; y++)
      TT[i][y] = TT[longestprefixsuffix][y];
      // Update the entry
      TT[i][p[i]] = i + 1;
      // Update lps for next row to be filled
      if (i < P)
         longestprefixsuffix = TT[longestprefixsuffix][p[i]]; // TT is the 2D array which is being constructed.
   }
}
//Prints all occurrences of pattern in text
void patternsearch(char *p, char *t) {
   int P = strlen(p);
   int T = strlen(t);
   int TT[P+1][NO_OF_CHARS];
   transitiontable(p, P, TT);
   // process text over FA.
   int i, j=0;
   for (i = 0; i < T; i++) {
      j = TT[j][t[i]];
      if (j == P) {
         cout<<"\n pattern is found at index: "<< i-P+1;
      }
   }
}

int main() {
   char *text = "AABAA ABBAACCDD CCDDAABAA"; //take the text as input
   char *pattern = "AABAA"; //take the pattern as input
   patternsearch(pattern, text);
   getchar();
   return 0;
}
