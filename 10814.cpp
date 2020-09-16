#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<int, string>& a, pair<int, string>& b){ //첫번째 원소 기준 오름차순 정렬
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, string> > p;
    for(int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age >> name;
        p.push_back(make_pair(age, name));
    }

    //stable_sort : 정렬하기 전의 순서가 정렬 후에도 유지됨(!=sort)
    stable_sort(p.begin(), p.end(), compare);

    for(int i = 0; i < n; i++){
        cout << p[i].first << " " << p[i].second << '\n';
    }

    return 0;
}