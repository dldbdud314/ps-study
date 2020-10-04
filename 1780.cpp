#include <iostream>
using namespace std;

int zeroCnt = 0, minusOneCnt = 0, oneCnt = 0;
int paper[3000][3000];

bool is0Full(int x, int y, int n){
    bool flag = false;
    int cnt = 0;
    for(int i = y; i < y+n; i++){
        for(int j = x; j < x+n; j++){
            if(paper[i][j]==0)
                cnt++;
        }
    }
    if(cnt==n*n)
        flag = true;

    return flag;
}

bool isMinus1Full(int x, int y, int n){
    bool flag = false;
    int cnt = 0;
    for(int i = y; i < y+n; i++){
        for(int j = x; j < x+n; j++){
            if(paper[i][j]==-1)
                cnt++;
        }
    }
    if(cnt==n*n)
        flag = true;

    return flag;
}

bool is1Full(int x, int y, int n){
    bool flag = false;
    int cnt = 0;
    for(int i = y; i < y+n; i++){
        for(int j = x; j < x+n; j++){
            if(paper[i][j]==1)
                cnt++;
        }
    }
    if(cnt==n*n)
        flag = true;

    return flag;
}

void countPaper(int x, int y, int n){
    if(isMinus1Full(x, y, n)){
        minusOneCnt++;
    }else if(is0Full(x, y, n)){
        zeroCnt++;
    }else if(is1Full(x, y, n)){
        oneCnt++;
    }else{
        countPaper(x, y, n/3);
        countPaper(x, y+n/3, n/3);
        countPaper(x, y+2*n/3, n/3);
        countPaper(x+n/3, y, n/3);
        countPaper(x+n/3, y+n/3, n/3);
        countPaper(x+n/3, y+2*n/3, n/3);
        countPaper(x+2*n/3, y, n/3);
        countPaper(x+2*n/3, y+n/3, n/3);
        countPaper(x+2*n/3, y+2*n/3, n/3);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> paper[i][j];
        }
    }

    countPaper(0, 0, n);
    cout << minusOneCnt << '\n' << zeroCnt << '\n' << oneCnt;

    return 0;
}