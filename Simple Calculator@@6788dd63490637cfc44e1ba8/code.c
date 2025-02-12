#include <stdio.h>
#include<ctype.h>

int main() {
    int a,b,e=0;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        e=a+b;
        printf("%d",e);
    }
    else if(c=='-'){
        e=a-b;
        printf("%d",e);
    }
    else if(c=='*'){
        e=a*b;
        printf("%d",e);
    }
    
    else{
        printf("error");
    }
    return 0;

}