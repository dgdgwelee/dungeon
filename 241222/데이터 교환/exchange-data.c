#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a=5, b=6, c=7;
    int temp;
    temp=a;
    a=c;
    c=temp;
    temp=b;
    b=c;
    c=temp;
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}