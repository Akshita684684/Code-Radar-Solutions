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
    char str[] = "Hello, World!";
    
    printf("Original String: %s\n", str);
    
    reverseString(str);
    
    printf("Reversed String: %s\n", str);
    
    return 0;
}
