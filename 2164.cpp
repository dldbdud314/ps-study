#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;

    queue<int> cardQ;

    //초기 상태 - 1 2 3 ..(->오름차순)
    for(int i = 1; i <= n; i++){
        cardQ.push(i);
    }

    int lastCard = 1;
    while(cardQ.size()>1){
        cardQ.pop();    //맨앞 카드 버리고

        lastCard = cardQ.front();

        int tmp = cardQ.front();
        cardQ.pop();
        cardQ.push(tmp);    //맨앞에 있던 카드 맨뒤에 추가
    }

    cout << lastCard;

    return 0;
}