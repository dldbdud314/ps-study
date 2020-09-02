#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s;
    getline(cin, s); //공백 포함 입력받음('\n'까지)
    int cnt = 0;

    if(s.empty()){
        cout << "0";
        return 0;
    }

    for(int i = 0; i < s.length(); i++){
        if(s[i]==' ') cnt++;
    }
    if(s[0]==' ') cnt--;
    if(s[s.length()-1]==' ') cnt--;

    cout << cnt+1;

    return 0;
}