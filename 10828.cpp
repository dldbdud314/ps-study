#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    stack<int> s;

    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;

        if(tmp=="push"){
            int pushNum;
            cin >> pushNum;
            s.push(pushNum);
        }
        else if(tmp == "pop"){
            if(s.empty())
                cout << "-1" << '\n';
            else{
                cout << s.top() << '\n';    //출력하고
                s.pop();    //삭제 (pop은 출력하는 메소드가 아님!)
            }
        }
        else if(tmp == "size")
            cout << s.size() << '\n';
        else if(tmp == "empty"){
            if(s.empty()) cout << "1" << '\n';
            else cout << "0" << '\n';
        }
        else if(tmp == "top"){
            if(s.empty()) cout << "-1" << '\n';
            else cout << s.top() << '\n';
        }
    }
    
    return 0;
}