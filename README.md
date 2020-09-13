# ps-study
백준 알고리즘 문제 풀이
<br>
<br>
👀 내가 보려고 정리해둔 잘 잊어 버리는 주요 알고리즘 + 잡다한 팁 모음‼️

## ✔️ 기본 알고리즘 정리
### O(log n^2) 정렬(2750) ⭐️⭐️⭐️
1. 선택 정렬
```
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
}
```

2. 삽입 정렬
```
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
```

3. 버블 정렬
```
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
```

## 🔑 유용한 STL 정리
### vector
```
#include <vector>
#include <algorithm>  //sort 함수
int main(){
    //선언
    vector<int> arr1;
    vector<int> arr2 = {5, 4, 3, 2, 1};
    
    arr1.push_back(6);  //가장 뒤에 데이터 추가
    arr1.push_back(7);
    arr1.push_back(8);
    
    arr1.pop_back();    //맨 뒤 데이터 꺼내오기
    
    arr1.clear();   //배열 비우기
    
    sort(arr2.begin(), arr2.end()); //배열의 시작과 끝 
}
```

------------------------------------
### 다시 
- 2231, 7568
