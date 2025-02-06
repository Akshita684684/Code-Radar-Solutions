#include <stdio.h>
int main() {
    char Vowel;
    scanf("%c", &Vowel);
    if(Vowel == 'a' || Vowel == 'e' || Vowel == 'i' || Vowel == 'o' || Vowel == 'u' )
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
}