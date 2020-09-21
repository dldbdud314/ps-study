#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    //입출력 빠르게 - 시간초과 해결
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    queue<int> q;

    for(int i = 0; i < n ;i++){
        string str;
        cin >> str;

        if(str=="push"){
            int push_num;
            cin >> push_num;

            q.push(push_num);
        }
        else if(str=="pop"){
            if(!q.empty()){
                cout << q.front() << '\n';
                q.pop();
            }
            else
                cout << "-1" << '\n';
        }
        else if(str=="size"){
            cout << q.size() << '\n';
        }
        else if(str=="empty"){
            if(q.empty())
                cout << "1" << '\n';
            else
                cout << "0" << '\n';
        }
        else if(str=="front"){
            if(!q.empty())
                cout << q.front() << '\n';
            else
                cout << "-1" << '\n';
        }
        else if(str=="back"){
            if(!q.empty())
                cout << q.back() << '\n';
            else
                cout << "-1" << '\n';
        }
    }

    return 0;
}