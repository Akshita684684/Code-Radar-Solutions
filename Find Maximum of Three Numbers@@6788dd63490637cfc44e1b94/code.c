#include <stdio.h>


int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c)
    printf("a");
    else if(b>c &&c>a)
    printf("b");
    else
    printf("c");
    return 0;
}