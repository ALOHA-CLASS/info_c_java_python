#include <stdio.h>
#include <string.h>

int main(void) {
    char data[20] = {0};
    char* str = "Hello Test";

    // strncpy( str1, str2, n )
    // : str2�� str1 �� n���� ���ڿ��� �����ϴ� �Լ�
    strncpy( data, str, 7 );

    printf("%s", data);         // ���� ��� : Hello T
    return 0;
}
