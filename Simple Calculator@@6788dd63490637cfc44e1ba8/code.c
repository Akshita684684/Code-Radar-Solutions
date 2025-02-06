#include <stdio.h>


int main() {
    int a,b,c,
    char '*,+,-,/'
    scanf("%d %d %d %c %c %c %c",&a,&b,&c, &*,&+,&-,&/);
    if(a+b==c)
    printf("%d",c);
    else if (a*b==c)
    printf("%d",c);
    else if (a/b==c)
    printf("%d",c);
    else (a-b==c)
    printf("%d",c);
    return 0;
}