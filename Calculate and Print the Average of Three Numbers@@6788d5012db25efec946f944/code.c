#include <stdio.h>



int main() {
    int a,b,c,num,num2;
    scanf("%d%d%d",&a,&b,&c);
    num=a+b+c;
    
    num2=num/3;
    printf("Average: %.2f", num2);
    return 0;
}