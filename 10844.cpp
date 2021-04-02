#include <iostream>
using namespace std;

int dp[100][10];

int stepOpr(int n){
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < 10; j++){
            if(j == 0)  
                dp[i][j] = dp[i-1][1];
            else if(j == 9)
                dp[i][j] = dp[i-1][8];
            else
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j+1])%1000000000; //조건 빼먹지 마셈
        }
    }

    int sum = 0;
    for(int j = 0; j < 10; j++){
        sum = (sum+dp[n][j])%1000000000;
    }

    return sum;
}

int main(){
    int N;
    cin >> N;

    for(int j = 1; j <= 9; j++){
        dp[1][j] = 1;
    }

    cout << stepOpr(N);
}