#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d %d",&a,&b);
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