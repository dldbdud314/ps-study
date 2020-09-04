#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> card(3);
    for(int i = 0; i < N; i++){
        cin >> card[i];
    }

    int max = 0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            for(int k = j+1; k < N; k++){
                int sum = card[i]+card[j]+card[k]; 
                if(sum<=M){
                    if(sum>max) max = sum;
                }
            }
        }
    }

    cout << max;

    return 0;
}