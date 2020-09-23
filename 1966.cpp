#include <iostream>
#include <queue>
using namespace std;

int main(){
    int test;
    cin >> test;

    for(int i = 0; i < test; i++){
        int n, m;
        cin >> n >> m;

        //기본 큐 - pair<priority, j>
        queue<pair<int, int> > printQ;
        //우선순위 큐(max 뽑아내서 크기 비교하는 용도)
        priority_queue<int> priority_printQ;

        //초기 세팅   
        for(int j = 0; j < n; j++){
            int priority;
            cin >> priority;
            
            printQ.push(make_pair(priority, j));
            priority_printQ.push(priority);
        }

        int cnt = 0;
        while(!printQ.empty()){
            //최대값 뽑아내기
            int max = priority_printQ.top();

            //cur==max
            pair<int, int> cur = printQ.front();
            printQ.pop();
            
            if(cur.first == max){
                priority_printQ.pop();  //가장 큰 요소도 바뀌어야 함
                cnt++;

                if(cur.second==m){
                    cout << cnt << '\n';
                    break;
                }
            }
            else{
                printQ.push(cur);
            }
        }
    }

    return 0;
}