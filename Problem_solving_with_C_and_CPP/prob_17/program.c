#include<stdio.h>

int main()
{
    int count_numbers;
    scanf("%d\n", &count_numbers);

    int even_num = 0, odd_num = 0, positive_num = 0, negative_num = 0;
    int i = 1;

    while (i <= count_numbers)
    {
        int value;
        scanf("%d", &value);

        // count even or odd number 
        if(value % 2== 0){
            even_num++;
        }
        else{
            odd_num++;
        }

        // count positive or negative
        if(value >= 1){
            positive_num++;
        }
        else if(value <= -1 && value != 0){
            negative_num++;
        }


        i++;
    }

    // print output
    printf("Even: %d\n", even_num);
    printf("Odd: %d\n", odd_num);
    printf("Positive: %d\n", positive_num);
    printf("Negative: %d\n", negative_num);
    
    return 0;
}