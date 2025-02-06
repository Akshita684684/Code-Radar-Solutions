#include <stdio.h>
int main() {
    char Vowel;
    scanf("%c", &Vowel);
    if(Vowel == 'a' || Vowel == 'e' || Vowel == 'i' || Vowel == 'o' || Vowel == 'u' )
    printf("Vowel");
    else if (isdigit(ch)) 
        printf("Digit\n");
    
    else if (isalpha(ch)) 
        printf("Consonant\n");
    else 
    printf("Consonant");
    return 0;
}