#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c),
    c=(1>>b)^a;
    printf("%d", c);
    return 0;
}