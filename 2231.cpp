#include <iostream>
using namespace std;

int main(){
    int orgNum, copyNum;
    cin >> orgNum;
    copyNum = orgNum;

    //1부터 해보기
    for(int i = 1; i < orgNum; i++){
        int num = i;
        int tmp = num;
        int sum = tmp;
        while(tmp){
            sum += (tmp % 10);
            tmp /= 10;
        }

        if(sum == orgNum){
            cout << num;
            return 0;
        }
    }
    
    cout << "0";

    return 0;
}