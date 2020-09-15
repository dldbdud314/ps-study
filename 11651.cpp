#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > nums;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        nums.push_back(make_pair(b, a)); //x y 자리 뒤집어서 삽입 
    }

    sort(nums.begin(), nums.end());
    
    //x y 자리 다시 원래대로
    for(int i = 0; i < nums.size(); i++){
        swap(nums[i].first, nums[i].second);
    }

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i].first << " " << nums[i].second << '\n';
    }

    return 0;
}