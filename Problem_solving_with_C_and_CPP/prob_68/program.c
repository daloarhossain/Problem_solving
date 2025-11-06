/**
 📅 Date   : 03-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    int nums[10] = {11, 5, 77, 3, 68, 81, 44, 32};

    // finding the length of the array
    int len = 0;
    
    for (int i = 0;; i++)
    {
        if (nums[i] == '\0')
        {
            break;
        }

        len++;
    }

    // Sorting algorithm: selection

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {

            if (nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // printing the output
    for (int i = 0; i < len; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}