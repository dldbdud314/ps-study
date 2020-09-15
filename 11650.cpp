#include <iostream>
#include <vector>
#include <utility>  //pair
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > nums;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        nums.push_back(make_pair(a, b));
    }

    //첫번째 원소가 같으면 알아서 두번째 원소 순으로 정렬해줌
    sort(nums.begin(), nums.end());

    for(int i = 0 ; i < n; i++){
        cout << nums[i].first << " " << nums[i].second <<'\n';
    }

    return 0;
}