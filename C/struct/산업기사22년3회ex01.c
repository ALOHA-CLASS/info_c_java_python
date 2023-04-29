#include <stdio.h>

struct test {
    int a;
    int b;
};

int func(int a, int b) {
    return a-b;
}

int main()
{
    struct test s = {10000, 3000};  
    int ret;
    ret = func(s.a, s.b);  // ???
    prinft("%d", ret);      // 출력 결과 : 7000


    return 0;
}
