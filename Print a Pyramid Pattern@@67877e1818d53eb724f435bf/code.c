
#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Printing spaces
        for (space = 0; space <= n - i; space++) {
            printf(" ");
        }
        // Printing stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}