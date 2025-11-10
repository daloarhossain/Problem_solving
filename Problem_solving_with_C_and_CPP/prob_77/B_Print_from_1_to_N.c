/**
 📅 Date   : 10-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

void print_nums(int destination, int i)
{
    if (destination == i) return;
    
    printf("%d\n", i + 1);
    print_nums(destination, ++i);
}

int main()
{
    int destination;
    scanf("%d", &destination);

    print_nums(destination, 0);

    return 0;
}