/**
 📅 Date   : 16-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++)
    {
        // Setp 1: Taking inputes
        int arr_len;
        scanf("%d", &arr_len);

        int array[arr_len];
        for (int j = 0; j < arr_len; j++)
        {
            scanf("%d", &array[j]);
        }

        // Step 2: Do copy the main array;
        int copied_array[arr_len];
        for (int c = 0; c < arr_len; c++)
        {
            copied_array[c] = array[c];
        }

        // Step 3: Sorting the copied_array with the help of a algorithm - selection
        for (int s = 0; s < arr_len - 1; s++)
        {
            int small_value = copied_array[s];
            int small_value_indx = s;

            for (int k = s + 1; k < arr_len; k++)
            {
                if (small_value > copied_array[k])
                {
                    small_value = copied_array[k];
                    small_value_indx = k;
                }
            }

            // Update the copied array
            int temp = copied_array[s];
            copied_array[s] = copied_array[small_value_indx];
            copied_array[small_value_indx] = temp;
        }

        // Step 4: finding the absolute values and create a new array;
        int absolute_values[arr_len];
        for (int a = 0; a < arr_len; a++)
        {
            int difference = array[a] - copied_array[a];

            if (difference < 0)
            {
                // Multiply with -1 to make it absolute;
                absolute_values[a] = difference * -1;
            }
            else
            {
                absolute_values[a] = difference;
            }
        }

        for (int p = 0; p < arr_len; p++)
        {
            printf("%d ", absolute_values[p]);
        }
        printf("\n");
    }

    return 0;
}