#include <iostream>
using namespace std;

long dp[91];

int main(){
    int N;
    cin >> N;

    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i <= N; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }
    
    cout << dp[N] << '\n';
}