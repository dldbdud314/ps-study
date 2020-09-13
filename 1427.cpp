#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int fullNum, changedNum;
    cin >> fullNum;
    vector<int> sepNum;

    //분해해서 벡터에 추가하는 과정
    int digit = 0;
    while(fullNum){
        int tmp = fullNum % 10;
        fullNum /= 10;
        digit++;

        sepNum.push_back(tmp);
    }

    //정렬 - 뒤에 이어붙이는 과정 떄문에 내림차순으로 정렬할 필요 없음
    sort(sepNum.begin(), sepNum.end());

    //하나의 수로 다시 합치는 과정
    int digNum = 1;
    changedNum = 0;
    for(int i = 0; i < digit; i++){
        changedNum += sepNum[i]*digNum;
        digNum *= 10;
    }

    cout << changedNum;

    return 0; 
}