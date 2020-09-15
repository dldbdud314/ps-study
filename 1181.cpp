#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, string> > words;
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        int wordCnt = word.length();
        
        words.push_back(make_pair(wordCnt, word));
    }

    sort(words.begin(), words.end());

    cout << words[0].second << '\n';
    for(int i = 1; i < words.size(); i++){
        if(words[i-1].second != words[i].second)
            cout << words[i].second << '\n';
    }

    return 0;
}