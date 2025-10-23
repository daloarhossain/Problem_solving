/**
 📅 Date   : 23-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{

    char value[100001];
    fgets(value, sizeof(value), stdin);

    /*
        Do all the conversions:

        Note: We will do these conversions with the help of ascii value

        44 == ,
        97 - 122 = A - z
        65 - 90 = a - z

        difference between uppercase and lowercase is 32;

    */

    for (int i = 0; i < strlen(value); i++)
    {
        if (value[i] == 44)
        { 
            value[i] = 32;
        }
        else if(value[i] >= 97 && value[i] <= 122){
            value[i] -= 32;
        }
        else if(value[i] >= 65 && value[i] <= 90){
            value[i] += 32;
        }
    }

    // Print the output
    printf("%s", value);

    return 0;
}