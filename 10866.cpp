#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    deque<int> d;

    for(int i = 0; i < n; i++){
        string cmd;
        cin >> cmd;

        if(cmd=="push_front"){
            int push_num;
            cin >> push_num;

            d.push_front(push_num);
        }
        else if(cmd=="push_back"){
            int push_num;
            cin >> push_num;

            d.push_back(push_num);
        }
        else if(cmd=="pop_front"){
            if(!d.empty()){
                cout << d.front() << '\n';

                d.pop_front();
            }
            else
                cout << "-1" << '\n';
        }
        else if(cmd=="pop_back"){
            if(!d.empty()){
                cout << d.back() << '\n';

                d.pop_back();
            }
            else
                cout << "-1" << '\n';
        }
        else if(cmd=="size"){
            cout << d.size() << '\n';
        }
        else if(cmd=="empty"){
            if(d.empty())
                cout << "1" << '\n';
            else
                cout << "0" << '\n';
        }
        else if(cmd=="front"){
            if(d.empty())
                cout << "-1" << '\n';
            else
                cout << d.front() << '\n';
        }
        else if(cmd=="back"){
            if(d.empty())
                cout << "-1" << '\n';
            else
                cout << d.back() << '\n';
        }
    }

    return 0;
}