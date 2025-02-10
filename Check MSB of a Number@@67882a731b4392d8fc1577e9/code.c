#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    while (a!=0){
        a>>=1;
    }
    if(a&(1<<a))
    printf("Set");
    else
    printf("Not Set");
    return 0;
}