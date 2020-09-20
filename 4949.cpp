#include <iostream>
#include <stack>
using namespace std;

int main(){
    while(true){
        stack<char> par;
        string str;
        getline(cin , str);

        //종료조건
        if(str.length()==1 && str[0]=='.') break;

        bool flag = false;
        for(int i = 0; i < str.length(); i++){
            if(str[i]=='(' || str[i]=='[')
                par.push(str[i]);
            else if(str[i]==')'){
                if(!par.empty() && par.top()=='(')
                    par.pop();
                else{
                    flag = true;
                    break;
                }
            }
            else if(str[i]==']'){
                if(!par.empty() && par.top()=='[')
                    par.pop();
                else{
                    flag = true;
                    break;
                }
            }
        }
        if(!flag && par.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}