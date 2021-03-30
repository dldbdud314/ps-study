#include <iostream>
using namespace std;

int tiles[1001];

int tiling(int n){
    if(tiles[n]) return tiles[n];
    
    for(int i = 3; i <= n; i++){
        tiles[i] = (tiles[i-1] + tiles[i-2]*2)%10007;
    }
    return tiles[n];
}

int main(){
    int n;
    cin >> n;
    
    tiles[1] = 1;
    tiles[2] = 3;
    
    cout << tiling(n);
}
