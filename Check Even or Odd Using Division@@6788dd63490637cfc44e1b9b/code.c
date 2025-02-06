#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==b)
    printf("Even");
    else
    printf("Odd");
    return 0;
}