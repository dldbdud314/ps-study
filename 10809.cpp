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
		if(alphaCnt[(int)(s[i]-'a')]!=-1) //ó�� �����ϴ� ��ġ�� ��� ���� 
			continue;
		alphaCnt[(int)(s[i]-'a')] = i;
	}
	
	for(int i = 0 ; i < 26; i++){
		cout << alphaCnt[i] << " ";
	}

	return 0;
}

