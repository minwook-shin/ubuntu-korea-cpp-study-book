# 헤더 파일

## 해더파일이란

함수들을 선언해둔 곳입니다.

기능을 구현하는 곳은 cpp로 보내야합니다.

## 이렇게까지 하는 이유

중복 정의를 피해서 관리, 공유가 쉽다.

## 만들어보기

* sum.h

```c++
int sum(int a,int b);
```

* sum.cpp

```c++
int sum(int a, int b){
    return a + b;
}
```

* main.cpp

```c++
#include "sum.h"
#include <iostream>

using namespace std;

int main ()
{
    int result = int sum(5,10);
    cout<<"result :  "<< result <<endl;
    return 0;
}
```

## 클래스

클래스 형식도 public, private을 헤더파일에 선언해주면 됩니다.

## 과제

* 과제-1 : 두 수를 교환하면서 변수 타입을 같이 출력하는 swap()함수를 작성하고 swap.h파일도 같이 작성하기

* 과제-2 : 계산기 프로그램을 calc.h, cals.cpp, main.cpp로 이루어진 프로젝트로 만들기