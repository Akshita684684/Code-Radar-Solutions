#include <stdio.h>


int main() {
    int a,b,e=0;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(a=='+'){
        e==a+b;
        printf("%d",e);
    }
    else if(a=='-'){
        e==a-b;
        printf("%d",e);
    }
    else if(a=='*'){
        e==a*b;
        printf("%d",e);
    }
    else if(a=='/'){
        e==a/b;
        printf("%d",e);
    }
    else{
        printf("error");
    }
    return 0;

}