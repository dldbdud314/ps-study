# 백준 알고리즘 문제 풀이(C++)
<br>
👀 내가 보려고 정리해둔 잘 잊어 버리는 주요 알고리즘 + 잡다한 팁 모음‼️

## 🔄 문제 목록 (푸는대로 업데이트 할꺼여)
- 문자열: [11720](https://github.com/dldbdud314/ps-study/blob/master/11720.cpp), [10809](https://github.com/dldbdud314/ps-study/blob/master/10809.cpp), [2675](https://github.com/dldbdud314/ps-study/blob/master/2675.cpp), [1157](https://github.com/dldbdud314/ps-study/blob/master/1157.cpp), [1152](https://github.com/dldbdud314/ps-study/blob/master/1152.cpp), [1316](https://github.com/dldbdud314/ps-study/blob/master/1316.cpp)
- 재귀: [10872](https://github.com/dldbdud314/ps-study/blob/master/10872.cpp), [10870](https://github.com/dldbdud314/ps-study/blob/master/10870.cpp)
- 브루트포스: [2798](https://github.com/dldbdud314/ps-study/blob/master/2798.cpp), [2231](https://github.com/dldbdud314/ps-study/blob/master/2231.cpp)⭐️⭐️, [7568](https://github.com/dldbdud314/ps-study/blob/master/7568.cpp)⭐️⭐️, [1018](https://github.com/dldbdud314/ps-study/blob/master/1018.cpp)⭐️
- 정렬: [2750](https://github.com/dldbdud314/ps-study/blob/master/2750.cpp), [2751](https://github.com/dldbdud314/ps-study/blob/master/2751.cpp), [1427](https://github.com/dldbdud314/ps-study/blob/master/1427.cpp), [11650](https://github.com/dldbdud314/ps-study/blob/master/11650.cpp), [11651](https://github.com/dldbdud314/ps-study/blob/master/11651.cpp), [1181](https://github.com/dldbdud314/ps-study/blob/master/1181.cpp), [10814](https://github.com/dldbdud314/ps-study/blob/master/10814.cpp)
- 스택: [10828](https://github.com/dldbdud314/ps-study/blob/master/10828.cpp), [10773](https://github.com/dldbdud314/ps-study/blob/master/10773.cpp), [9012](https://github.com/dldbdud314/ps-study/blob/master/9012.cpp), [4949](https://github.com/dldbdud314/ps-study/blob/master/4949.cpp)⭐️
- 큐, 덱: [18258](https://github.com/dldbdud314/ps-study/blob/master/18258.cpp), [2164](https://github.com/dldbdud314/ps-study/blob/master/2164.cpp), [11866](https://github.com/dldbdud314/ps-study/blob/master/11866.cpp), [10866](https://github.com/dldbdud314/ps-study/blob/master/10866.cpp)

## ✔️ 기본 알고리즘 정리
### O(n^2) 정렬 ⭐️⭐️⭐️
- [2750](https://github.com/dldbdud314/ps-study/blob/master/2750.cpp)
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

### sort
- algorithm 라이브러리 
- sort(첫번째, 마지막 원소) 혹은
- sort(첫번째, 마지막 원소, 비교함수)
- 비교함수 형태
```
bool compare(int a, int b){ //오름차순
    return a < b;
}
```
- 원소들의 상대적 위치가 바뀌지 않는 **stable_sort()** 도 있다!! ([10814](https://github.com/dldbdud314/ps-study/blob/master/10814.cpp))<br>
[sort](http://www.cplusplus.com/reference/algorithm/sort/) vs.
[stable_sort](http://www.cplusplus.com/reference/algorithm/stable_sort/)

### pair

- pair 배열을 sorting할 때 알아두면 좋은 tip: 첫번째 원소 기준 정렬하고, 첫번째 원소가 같을 경우 두번째 원소 기준 정렬
- [11650](https://github.com/dldbdud314/ps-study/blob/master/11650.cpp), [11651](https://github.com/dldbdud314/ps-study/blob/master/11651.cpp), [1181](https://github.com/dldbdud314/ps-study/blob/master/1181.cpp)
```
#include <utility>  //pair
#include <vector>

int main(){
    pair<int, int> p;   //생성
    vector<pair<int, int> > pairs;
    
    //원소 추가
    p.make_pair(1, 1);
    for(int i = 0; i < 5; i++){
        pairs.push_back(make_pair(1, 1));
    }
    
    //원소 접근 - first, second
    cout << p.first << " " << p.second;
}
```

### stack
- stack 라이브러리
- 생성:
```
stack<int> s;
```
- push(추가), pop(삭제), top(최근 원소 조회), empty(비어 있는지 아닌지 체크), size(스택 크기)
- [10828](https://github.com/dldbdud314/ps-study/blob/master/10828.cpp), [9012](https://github.com/dldbdud314/ps-study/blob/master/9012.cpp), [10773](https://github.com/dldbdud314/ps-study/blob/master/10773.cpp)

### queue
- queue 라이브러리
- 생성:
```
queue<int> q;
```
- push(맨뒤 추가), pop(맨앞 삭제), front(맨앞 원소 반환), back(맨뒤 원소 반환), empty(비어 있는지 아닌지 체크), size(큐 크기)

### 기타
#### C++ 시간초과 해결 tip
1. 입출력 속도 up
```
cin.tie(NULL);
cin.sync_with_stdio(false);
```
이렇게 하면 C의 printf, scanf만큼 빨라짐

2. 개행
endl 대신 '\n'

------------------------------------
### 다시 
- **2231, 7568**
