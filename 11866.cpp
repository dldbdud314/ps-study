#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    queue<int> y;

    //큐 초기
    for(int i = 1; i <= n; i++){
        y.push(i);
    }

    cout << "<";
    for(int i = 0; i < n; i++){
        if(i>0) cout << ", ";

        //순서 재조정 - k번째 수가 맨앞에 오게끔
        for(int j = 1; j < k; j++){
            int tmp = y.front();
            y.pop();
            y.push(tmp);
        }

        int this_k = y.front(); //k번째 수 반환하고
        cout << this_k;
        y.pop(); //삭제
    }
    cout << ">";

    return 0;
}