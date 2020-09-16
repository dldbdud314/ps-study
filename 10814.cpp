#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<int, string>& a, pair<int, string>& b){
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

    stable_sort(p.begin(), p.end(), compare);

    for(int i = 0; i < n; i++){
        cout << p[i].first << " " << p[i].second << '\n';
    }

    return 0;
}