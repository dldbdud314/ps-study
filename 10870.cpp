#include <iostream>
using namespace std;

int fibonacci(int a){
    if(a==0) return 0;
    else if(a==1) return 1;
    else return fibonacci(a-2)+fibonacci(a-1);
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}