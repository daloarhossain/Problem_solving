/**
 📅 Date   : 17-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
  int number;
  scanf("%d", &number);

// split the number
    int first_digit, last_digit;

    last_digit = number % 10;
    first_digit = number / 10;
   
    // Checking the conditon whether it is lucky or not;
    if(first_digit == 0 || last_digit == 0){
        printf("NO");
    }
    else if(first_digit % last_digit == 0 || last_digit % first_digit == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

  return 0; 
}