#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 30;
    // ������ ���� ����
    int *ptr = &num;

    printf("ptr : %p\n", ptr);          // �ּҰ�
    printf("*ptr : %d\n", *ptr);        // �����ͷ� ������ ��

    return 0;
}
