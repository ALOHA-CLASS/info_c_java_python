#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 30;
    // 포인터 변수 선언
    int *ptr = &num;

    printf("ptr : %p\n", ptr);          // 주소값
    printf("*ptr : %d\n", *ptr);        // 포인터로 접근한 값

    return 0;
}
