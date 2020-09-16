#include <iostream>
#include <algorithm>
using namespace std;
char chess[50][50];
char WB[8][8] = {
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
};
char BW[8][8] = {
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
};

int min_WB(int x, int y){
    int min = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(chess[x+i][y+j] != WB[i][j]) min++;
        }
    }
    return min;
}

int min_BW(int x, int y){
    int min = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(chess[x+i][y+j] != BW[i][j]) min++;
        }
    }
    return min;
}

int main(){
    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
            cin >> chess[i][j];
    }
    
    int real_min = 9999;
    int x, y;
    for(int i = 0; i <= r-8; i++){
        for(int j = 0; j <= c-8; j++){
            int tmp_min = min(min_WB(i, j), min_BW(i, j));
            if(tmp_min<real_min)
                real_min = tmp_min;
        }
    }
    cout << real_min;
    
    return 0;
}