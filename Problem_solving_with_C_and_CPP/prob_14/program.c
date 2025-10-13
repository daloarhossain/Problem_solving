#include<stdio.h>

int main()
{
    long long int num_one, num_two;
    scanf("%lld %lld", &num_one, &num_two);

    // operation
    long long int mul = num_one * num_two;
    int sum = num_one + num_two;
    int sub = num_one - num_two;

    // print output
    printf("%lld + %lld = %d\n", num_one, num_two, sum);
    printf("%lld * %lld = %lld\n", num_one, num_two, mul);
    printf("%lld - %lld = %d\n", num_one, num_two, sub);

    return 0;
}