#include<stdio.h>

int main()
{
    char charecter;
    scanf(" %c", &charecter);

    // making the character uppercase or lowercase with the helo of ASCII Value.
    char uppercase = charecter - 32;
    char lowercase = charecter + 32;

    if( charecter - 32 <= 90 && charecter - 32 >= 65 ){
        printf("%c", uppercase);
    }
    else{
        printf("%c", lowercase);
    }

    return 0;
}