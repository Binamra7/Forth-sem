#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int current = 0;

void q0(char c)
{
    if (c == 'a')
        current = 1;
    else
    	current = -1;
}

void q1(char c)
{
    if (c == 'a')
        current = 1;
    else if (c == 'b')
    	current = 2;
    else current = -1;
}

int main()
{
    string str;
    char c;
    int i = 0;
    cout << "Enter the string: " << endl;
    cin >> str;
    c = str[i];

    while (c != '\0')
    {
        switch (current)
        {
        	case 0:
            	q0(c);
            	break;
        	case 1:
            	q1(c);
            	break;
            default:
            	break;
        }
        c = str[++i];
    }

    if (current == 2)
        printf("accepted");
    else
        printf("rejected");

    return 0;
}

