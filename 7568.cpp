#include <iostream>
using namespace std;

typedef struct{
    int weight;
    int height;
}Person;

int main(){
    int N;
    cin >> N;
    Person p[N];
    for(int i = 0; i < N; i++){
        cin >> p[i].weight >> p[i].height;
    }

    //더 덩치 큰 애가 있다면 자기자신의 rank++
    for(int i = 0; i < N; i++){
        int rank = 0;
        for(int j = 0; j < N; j++){
            if(p[i].weight<p[j].weight && p[i].height<p[j].height)
                rank++;
        }
        cout << (rank+1) << " ";
    }

    return 0;
}