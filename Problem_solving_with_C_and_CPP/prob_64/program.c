/**
 📅 Date   : 31-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <string.h>

int main()
{
    // getting all the inputed values;
    char value_one[1001];
    char value_two[1001];
    int start_indx, end_indx;

    fgets(value_one, 1001, stdin);
    fgets(value_two, 1001, stdin);
    scanf("%d %d", &start_indx, &end_indx);

    // Slicing the second value to add with first value;
    char value_two_sliced[1000];
    for (int i = start_indx, j = 0; i <= end_indx; i++, j++)
    {
        value_two_sliced[j] = value_two[i];

        // adding the null charecter in the sliced array;
        if (i == end_indx)
        {
            value_two_sliced[j + 1] = '\0';
        }
    }

    /*
    removing the new line charecter from value one as fgets() function takes it by default and adding null charecter;
    */
   
    if (value_one[strlen(value_one) - 1] == '\n')
    {
        value_one[strlen(value_one) - 1] = '\0';
    }

    // concate the sliced value with first value and print that
    strcat(value_one, value_two_sliced);
    printf("%s", value_one);

    return 0;
}