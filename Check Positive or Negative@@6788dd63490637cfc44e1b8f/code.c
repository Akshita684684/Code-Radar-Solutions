#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<0)
    printf("Negative");
    else if (a>0)
    printf("Positive");
    else
    printf("Zero");
    
    return 0;
}