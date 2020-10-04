#include <iostream>
using namespace std;
int c;

long long calc(int m, int n){
    if(n==0){
        return 1;
    }else if(n==1){
        return m;
    }else{
        long long tmp = calc(m, n/2);
        if(n%2==0)
            return (tmp*tmp)%c;
        else
            return ((tmp*tmp)%c*m)%c;
    }
}

int main(){
    int a, b;
    cin >> a >> b >> c;

    cout << calc(a%c, b);

    return 0;
}