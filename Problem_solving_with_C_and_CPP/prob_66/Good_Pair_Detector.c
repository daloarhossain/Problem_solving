/**
 📅 Date   : 31-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    int arr_len, arr[1001];

    scanf("%d", &arr_len);

    // getting the array's values
    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &arr[i]);
    }

    // calculate the good pair
    int count_good_pair = 0;
    for (int i = 0; i < arr_len; i++)
    {
        for (int j = i + 1; j < arr_len; j++)
        {
            if (arr[i] % 2 == 0 && arr[j] % 2 == 1)
            {
                count_good_pair++;
            }
            else if (arr[i] % 2 == 1 && arr[j] % 2 == 0)
            {
                count_good_pair++;
            }
                // if the number is negative then the out put for odd number will be -1;
            else if(arr[i] % 2 == -1 && arr[j] % 2 == 0){
                count_good_pair++;
            }
            else if(arr[i] % 2 == 0 && arr[j] % 2 == -1){
                count_good_pair++;
            }

        }
    }

    printf("%d", count_good_pair);

    return 0;
}