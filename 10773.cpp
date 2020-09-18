#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> s;

    int sum = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if(num == 0){
            sum -= s.top();
            s.pop();
        }
        else{
            sum += num;
            s.push(num);
        }
    }

    cout << sum;

    return 0;
}