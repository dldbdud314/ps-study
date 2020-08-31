#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int r;
	cin >> r;
	
	int itNum[r];
	string s[r];
	for(int i = 0; i < r; i++){
		cin >> itNum[i] >> s[i];
	}
	
	string new_s[r];
	for(int i = 0; i < r; i++){
		string this_s = s[i];
		for(int j = 0; j < this_s.length(); j++){
			new_s[i].append(itNum[i], this_s[j]); 
		}	
	}
	
	for(int i = 0 ; i < r; i++){
		cout << new_s[i] << '\n';
	}

	return 0;
}

