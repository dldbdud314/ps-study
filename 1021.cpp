#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int leftCnt(int target, deque<int> dq){
    int cnt = 1;    //front에서 시작하는 게 아니라 back에서 시작하기 때문에 일을 더하고 시작한다.
    deque<int> tmp = dq;
    int back = tmp.back();
    while(back!=target){
        tmp.pop_back();
        cnt++;

        back = tmp.back();
    }

    return cnt;
}

int rightCnt(int target, deque<int> dq){
    int cnt = 0;
    deque<int> tmp = dq;
    int front = tmp.front();
    while(front!=target){
        tmp.pop_front();
        cnt++;

        front = tmp.front();
    }
    
    return cnt;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> pos;
    for(int i = 0; i < m; i++){
        int tmp;
        cin >> tmp;
        pos.push_back(tmp);
    }

    deque<int> q;

    //초기 세팅 
    for(int i = 1; i <= n; i++){
        q.push_back(i);
    }

    int cnt = 0;
    for(int i = 0; i < m; i++){
        int this_target = pos[i];
        int this_front = q.front();

        if(this_front==this_target){
            q.pop_front();
        }
        else{
            //왼쪽 방향 회전 수 vs. 오른쪽 방향 회전 수 비교 -> 그만큼 회전하기
            int left_cnt = leftCnt(this_target, q);
            int right_cnt = rightCnt(this_target, q);
            if(left_cnt >= right_cnt){
                //오른쪽 회전
                for(int j = 0; j < right_cnt; j++){
                    int front = q.front();
                    q.pop_front();
                    q.push_back(front);
                }
                //target 요소 제거
                q.pop_front();
                cnt += right_cnt;
            }
            else if(left_cnt < right_cnt){
                //왼쪽 회전
                for(int j = 0; j < (left_cnt-1); j++){  //leftCnt 함수에서 일을 더한 상태에서 카운트 값을 리턴했기 때문에 일을 빼줘야 한다.
                    int back = q.back();
                    q.pop_back();
                    q.push_front(back);
                }
                //target 요소 제거
                q.pop_back();
                cnt+=left_cnt;
            }
        }
        
    }
    cout << cnt;

    return 0;
}