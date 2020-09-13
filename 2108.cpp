#include <iostream>
#include <vector>
#include <math.h>   //round 함수(반올림) - 그 외 ceil(올림), floor(내림)가 있음
using namespace std;

int main(){
    int n, tmp;
    cin >> n;
    vector<int> num;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        num.push_back(tmp);
    }

    //산술평균
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += num[i];
    }
    int avg = round(sum/num.size());    //반올림

    //중앙값
    sort(num.begin(), num.end());
    int midIdx = num.size()/2;
    int mid = num.at(midIdx);

    //최빈값
    
    //범위
    int min = num[0];
    int max = num[num.size()-1];
    int range = max - min;

    cout << '\n' << avg << '\n' << mid << '\n' << range;

    return 0;
}