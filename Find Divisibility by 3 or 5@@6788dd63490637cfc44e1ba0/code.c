#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a%3==b && a%5==b)
    printf("Divisible by Both");
    else if (a%3==b)
    printf("Divisible by 3");
    else if (a%5==b)
    printf("Divisible by 5");
    else
    printf("Not Divisible");
    return 0;
}