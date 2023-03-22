#include<iostream>
#include<string>
#include<regex>

using namespace std;

int main()
{
  string sentence,search_string;
  cout<<"Enter the sentence:"<<endl;
  getline(cin,sentence);
  cout<<"Enter the string to search:"<<endl;
  getline(cin,search_string);
  regex reg(search_string);

  if(regex_search(sentence,reg))
    cout<<"String found";
  else
    cout<<"String not found";

  return 0;
}
