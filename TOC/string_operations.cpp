#include<bits/stdc++.h>

using namespace std;

void prefix(string s){
    string temp;
    for(int i = 0; i < s.length(); i++){
        temp += s[i];
        cout << temp << endl;
    }
}

void suffix(string s){
    string temp;
    for(int i = s.length() - 1; i >= 0; i--){
        temp = s[i] + temp;
        cout << temp << endl;
    }
}

void substring(string s){
    for (int i = 0; i < s.length(); i++) {
        string temp;
        for (int j = i; j < s.length(); j++) {
            temp += s[j];
            cout << temp << endl;
        }
    }
}

int main()
{
	string s;
	cout<<"Enter the string: "<<endl;
	cin>>s;
	int operation;
	while(true)
	{
		cout<<"Enter operation to perform"<<endl
			<<" 1. Prefix \n 2. Suffix \n 3. Substring \n 4. Exit"<<endl;
		cin>>operation;
		switch(operation)
		{
			case 1:
				prefix(s);
				break;
			case 2:
				suffix(s);
				break;
			case 3:
				substring(s);
				break;
			case 4:
				exit(0);
			default:
				exit(0);
		}
	}
	return 0;
}
