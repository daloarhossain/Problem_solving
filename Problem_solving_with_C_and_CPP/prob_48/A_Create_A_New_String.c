/**
 📅 Date   : 23-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{

    char first_val[1000];
    fgets(first_val, 1000, stdin);

    char last_val[1000];
    fgets(last_val, 1000, stdin);

    //   Print the output (the length of values and the values)
    int first_val_len = strlen(first_val);
    int last_val_len = strlen(last_val);

    // Remove the enter char as fgets() takes it.
    if(first_val > 0 && first_val[first_val_len - 1] == '\n'){
        first_val[first_val_len - 1] = '\0';
        first_val_len -= 1; // new line removed
        last_val_len -= 1; // new line removed
    }

    printf("%d %d\n", first_val_len, last_val_len);
    printf("%s %s", first_val, last_val);
    
    return 0;
}