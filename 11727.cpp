#include <iostream>
using namespace std;

int tiles[1001];

int tiling(int n){
    if(tiles[n]) return tiles[n];
    tiles[n] = tiling(n-1) + 2 * tiling(n-2);
    
    return tiles[n]%10007;
}

int main(){
    int n;
    cin >> n;
    
    tiles[1] = 1;
    tiles[2] = 3;
    
    cout << tiling(n);
}
