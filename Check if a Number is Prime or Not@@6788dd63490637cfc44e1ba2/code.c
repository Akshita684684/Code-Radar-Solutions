#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==b || a%3==b || a==2)
    printf("Not Prime");

    else
    printf("Prime");
    return 0;
}