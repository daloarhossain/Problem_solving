/**
 📅 Date   : 28-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{

    char first_value[22];
    char last_value[11];
    scanf("%s\n%s", first_value, last_value);

    printf("%d %d\n", strlen(first_value), strlen(last_value));
    printf("%s\n", strcat(first_value, last_value));

    // removing the concated value from first value with the help of nul charecter;
    first_value[strlen(first_value) - strlen(last_value)] = '\0';

    /// swapping the first charecter between first and last values;
    int temp = first_value[0];
    first_value[0] = last_value[0];
    last_value[0] = temp;

    printf("%s %s\n", first_value, last_value);

    return 0;
}