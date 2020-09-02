#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int alphaCnt[26]={0, };

    for(int i = 0; i < s.length(); i++){
        if(s[i]>='a')
            alphaCnt[(int)(s[i]-'a')]++;
        else
            alphaCnt[(int)(s[i]-'A')]++;
    }

    int max = alphaCnt[0];
    int maxIdx = 0;
    bool flag = false;
    for(int i = 1; i < 26; i++){
        if(alphaCnt[i]>max){
            max = alphaCnt[i];
            maxIdx = i;
            flag = false;
        }else if(alphaCnt[i]==max){ //max가 여러개일 때 처리
            flag = true;
        }
    }

    if(flag) 
        cout << "?";
    else 
        cout << (char)(maxIdx+'A');

    return 0;
}