#include <iostream>
#include <string>
using namespace std;

string qt[64];

bool isZero(int x, int y, int n){
    bool flag = false;
    int cnt = 0;

    for(int i = y; i < y+n; i++){
        string tmp = qt[i];
        for(int j = x; j < x+n; j++){
            if(tmp[j]=='0') cnt++;
        }
    }
    if(cnt==n*n)
        flag = true;

    return flag;
}

bool isOne(int x, int y, int n){
    bool flag = false;
    int cnt = 0;

    for(int i = y; i < y+n; i++){
        string tmp = qt[i];
        for(int j = x; j < x+n; j++){
            if(tmp[j]=='1') cnt++;
        }
    }
    if(cnt==n*n)
        flag = true;

    return flag;
}

void quadTree(int x, int y, int n){
    if(isZero(x, y, n)){
        cout << '0';
    }else if(isOne(x, y, n)){
        cout << '1';
    }else{
        cout << '(';
        quadTree(x, y, n/2);
        quadTree(x+n/2, y, n/2);
        quadTree(x, y+n/2, n/2);
        quadTree(x+n/2, y+n/2, n/2);
        cout << ')';
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> qt[i];
    }

    quadTree(0, 0, n);

    return 0;
}