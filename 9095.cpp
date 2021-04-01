//1, 2, 3 더하기
#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(12);

int addition(int n){
    for(int i = 4; i <= n; i++){
        arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
    }

    return arr[n];
}

int main(){
    int n;
    cin >> n;
    int test[n], testResult[n];
    for(int i = 0; i < n; i++){
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 4;

        cin >> test[i]; 
        testResult[i] = addition(test[i]);

        arr.clear();
    }
    
    for(int i = 0; i < n; i++){
        cout << testResult[i] <<'\n';
    }
}