#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        bool flag = false;
        string s;
        cin >> s;

        stack<char> ps;
        for(int j = 0; j < s.length(); j++){
            if(s[j]=='(')
                ps.push('(');
            else{
                if(ps.empty()){
                    cout << "NO" << '\n';
                    flag = true;
                    break;
                }
                else
                    ps.pop();
            }
        }

        if(!flag && ps.empty())
            cout << "YES" << '\n';
        else if(!ps.empty())
            cout << "NO" << '\n';
    }

    return 0;
}