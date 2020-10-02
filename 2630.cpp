#include <iostream>
using namespace std;

int paper[128][128];
int blueCnt = 0, whiteCnt = 0;

bool isBFull(int x, int y, int n){
    bool flag = false;
    int cnt = 0;

    for(int i = y; i < y+n; i++){
        for(int j = x; j < x+n; j++){
            if(paper[i][j]==1) cnt++;
        }
    }
    if(cnt==n*n)
        flag = true;

    return flag;
}

bool isWFull(int x, int y, int n){
    bool flag = false;
    int cnt = 0;

    for(int i = y; i < y+n; i++){
        for(int j = x; j < x+n; j++){
            if(paper[i][j]==0) cnt++;
        }
    }
    if(cnt==n*n)
        flag = true;

    return flag;
}

void divPaper(int x, int y, int n){
    if(isBFull(x, y, n)){
        blueCnt++;
    }else if(isWFull(x, y, n)){
        whiteCnt++;
    }else{  //divide
        divPaper(x, y, n/2);
        divPaper(x+n/2, y, n/2);
        divPaper(x, y+n/2, n/2);
        divPaper(x+n/2, y+n/2, n/2);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> paper[i][j];
    }

    divPaper(0, 0, n);  //(x, y, n)
    cout << whiteCnt << '\n' << blueCnt;

    return 0;
}