//O(log n^2) 정렬
#include <iostream>
#include <algorithm>
using namespace std;

//1. 선택 정렬
void selectionSort(int num[], int n){
    for(int i = 0; i < n; i++){
        //가장 작은 수를 찾아
        //key = 가장 작은 수의 인덱스
        int key = i;
        for(int j = i+1; j <n; j++){
            if(num[j]<num[key])
                key = j;
        }
        //교환
        if(i != key) 
            swap(num[i], num[key]);
    }

    for(int i = 0; i < n; i++){
        cout << num[i] << " ";
    }
    cout << '\n';
}

//2. 삽입 정렬
void insertionSort(int num[], int n){
    //이미 정렬된 i-1까지의 배열과 정렬되지 않은 나머지(여기에 key)
    for(int i = 1; i < n; i++){
        int key = num[i];
        //정렬된 원소와 key를 비교해서 하나씩 뒤로 밀고
        int j;
        for(j = i-1; j>=0 && num[j]>key; j--){
            num[j+1]=num[j];
        }
        //교환
        num[j+1] = key;
    }

    for(int i = 0; i < n; i++){
        cout << num[i] << " ";
    }
    cout << '\n';
}

//3. 버블 정렬
void bubbleSort(int num[], int n){
    bool swapped = true;
    for(int i = n-1; i>=0 && swapped; i--){
        swapped = false;
        for(int j = 0; j < i; j++){
            if(num[j]>num[j+1])
                swap(num[j], num[j+1]);
                swapped = true;
        }
        //한 회전 끝나면 가장 큰 원소가 맨 뒤에 위치
        //교환이 한번도 일어나지 않으면(완벽 정렬) 수행 끝(!swapped)
    }

    for(int i = 0; i < n; i++){
        cout << num[i] << " ";
    }
    cout << '\n';
}

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    selectionSort(num, n);
    insertionSort(num, n);
    bubbleSort(num, n);

    return 0;
}