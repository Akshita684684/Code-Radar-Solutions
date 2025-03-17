#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    
    while(start < end) {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move start forward and end backward
        start++;
        end--;
    }
}

int main() {
    char str[100];  // Array to hold the input string
    
    printf(" ");
    fgets(str, sizeof(str), stdin);  
    
   
    str[strcspn(str, "\n")] = '\0';
    
    
    
    reverseString(str);
    
    printf(" %s\n", str);
    
    return 0;
}

