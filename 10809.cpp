#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int alphaCnt[26];
	for(int i = 0; i < 26; i++)
		alphaCnt[i] = -1;
	
	for(int i = 0; i < s.length(); i++){
		if(alphaCnt[(int)(s[i]-'a')]!=-1) //처음 등장하는 위치를 잡기 위해 
			continue;
		alphaCnt[(int)(s[i]-'a')] = i;
	}
	
	for(int i = 0 ; i < 26; i++){
		cout << alphaCnt[i] << " ";
	}

	return 0;
}

