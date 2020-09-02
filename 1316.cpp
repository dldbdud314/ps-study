#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int stringNum;
    cin >> stringNum;
    string str[stringNum];
    for(int i = 0; i < stringNum; i++){
        cin >> str[i];
    }
    bool alphaFlag[26];
    bool isGroupVoc[stringNum];
    for(int i = 0; i < stringNum; i++){
        isGroupVoc[i] = true;
    }

    int groupVocCnt = 0;
    for(int i = 0; i < stringNum; i++){
        string thisStr = str[i];
        for(int i2 = 0; i2 < 26; i2++){
            alphaFlag[i2] = false;
        }
        for(int j = 0; j < thisStr.length(); j++){
            if(alphaFlag[(int)(thisStr[j]-'a')]){
                isGroupVoc[i] = false;
                break;
            } 

            if(thisStr[j]==thisStr[j+1]) continue;
            else alphaFlag[(int)(thisStr[j]-'a')]=true;
        }
        if(isGroupVoc[i]) groupVocCnt++;
    }

    cout << groupVocCnt;

    return 0;
}