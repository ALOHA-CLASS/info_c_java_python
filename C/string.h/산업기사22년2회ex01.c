#include <stdio.h>
#include <string.h>

int main(void) {
    char data[20] = {0};
    char* str = "Hello Test";

    // strncpy( str1, str2, n )
    // : str2을 str1 에 n개의 문자열을 복사하는 함수
    strncpy( data, str, 7 );

    printf("%s", data);         // 실행 결과 : Hello T
    return 0;
}
