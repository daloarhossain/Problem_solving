#include<stdio.h>

int main()
{
    int num_one, num_two, num_three, num_four;
    scanf("%d %d %d %d", &num_one, &num_two, &num_three, &num_four);
    
    long long int multiply_one = (long long) num_one * num_two;
    long long int multiply_two = (long long) num_three * num_four;
    long long int difference = multiply_one - multiply_two;

    printf("Difference = %lld", difference);

    return 0;
}