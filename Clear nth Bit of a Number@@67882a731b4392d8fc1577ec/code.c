#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
     c=~(1<<b)&a;
     a=a&c;
    printf("%d",a);
    return 0;
}