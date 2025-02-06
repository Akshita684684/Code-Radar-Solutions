#include <stdio.h>
int main() {
    char Vowel;
    scanf("%c", &Vowel);
    if(Vowel == 'a' || Vowel == 'e' || Vowel == 'i' || Vowel == 'o' || Vowel == 'u'|| Vowel == 'A' || Vowel == 'E' || Vowel == 'I' || Vowel == 'O' || Vowel == 'U') 
    printf("Vowel");
    else if (isdigit(ch)) 
        printf("Digit\n");
    
    else if (isalpha(ch)) 
        printf("Consonant\n");
    else 
    printf("Special Character\n");
    return 0;
}