#include<stdio.h>

// Solution 01
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

// solution 02
int main(){
    char ch;
    scanf("%c", &ch);

    // 32 is a ascii value that indicates the difference uppercase and lowercase alphabet

    if(ch >= 'a' && ch <= 'z'){
        printf("%c", ch - 32);
    }
    else{
        printf("%c", ch + 32);
    }
}