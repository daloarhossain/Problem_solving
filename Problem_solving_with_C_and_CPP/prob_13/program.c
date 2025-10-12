#include<stdio.h>

int main()
{
    int num_one, num_two, num_three;
    scanf("%d %d %d", &num_one, &num_two, &num_three);

    // find the maximum number among three numbers
    int min_num, max_num;

    if(num_one >= num_two && num_one >= num_three){
        max_num = num_one;
    }
    else if(num_two > num_one && num_two >= num_three){
        max_num = num_two;
    }
    else{
        max_num = num_three;
    }

    // find the minimum numbers among three numbers
    if(num_one <= num_two && num_one <= num_three){
        min_num = num_one;
    }
    else if(num_two <= num_one && num_two <= num_three){
        min_num = num_two;
    }
    else{
        min_num = num_three;
    }


    // print the minimum number and maximum number
    printf("%d %d", min_num, max_num);

    return 0;
}