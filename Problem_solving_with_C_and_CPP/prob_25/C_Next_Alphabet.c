#include<stdio.h>

// This problem has solved with ascii value;
int main()
{
    char latter;
    scanf(" %c", &latter);

    if(latter == 'z'){
        printf("%c", 'a');
    }
    else{
        int next_letter = latter + 1;
        printf("%c", next_letter);

    }

    return 0;
}