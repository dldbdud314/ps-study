#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;	
	char num[n];
	for(int i = 0; i < n; i++)
		cin >> num[i];
		
	int sum = 0;	
	for(int i = 0; i < n ; i ++){
		sum += (int)(num[i]-'0'); //char '0'의 아스키코드 = 48 
	}
	
	cout << sum;

	return 0;
}

