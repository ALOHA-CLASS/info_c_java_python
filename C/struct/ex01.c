#include <stdio.h>
#include <string.h>

/*
    # 구조체
    : 다양한 자료형의 변수들을 묶어서 정의한 새로운 자료형
      "통합 자료형"
    
    * 구조체 정의
    struct 구조체이름 {
        자료형1 변수1;
        자료형2 변수2;
    };
*/

// 구조체 정의
struct person {
    // 이름, 나이
    char name[30];
    int age;
};


int main() {

    // 구조체 선언
    struct person boy, girl;

    // 멤버 접근 연산자(.)
    // strcpy() : 문자열 복사 함수
    // boy, girl 의 name(이름)에 문자열을 복사
    strcpy(boy.name, "김휴먼");
    strcpy(girl.name, "박휴먼");

    // boy, girl 의 age(나이)
    boy.age = 20;
    girl.age = 10;

    // 출력
    printf("boy 의 이름은 %s, 나이는 %d \n", boy.name, boy.age);
    printf("girl 의 이름은 %s, 나이는 %d \n", girl.name, girl.age);
    
    return 0;
}
