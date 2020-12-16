#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	cin >> A >> B >> C;
	
	if(B>=C){ //해당 조건이면 식이 항등식이 되므로 제외 
		cout << -1;
		return 0;
	}
	
	cout << A/(C-B) + 1;
	
	return 0;
}
