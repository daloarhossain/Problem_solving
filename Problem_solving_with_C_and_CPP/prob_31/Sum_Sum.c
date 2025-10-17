/**
 📅 Date   : 17-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
  int counter;
  scanf("%d", &counter);

//   find and store the values
  int values[counter];

  for(int i = 0; i < counter; i++){
    scanf("%d", &values[i]);
  }

//   print the summation after completing the calculation
  int sum_of_postive_values = 0;
  int sum_of_negative_values = 0;

  for(int i = 0; i < counter; i++){

    if(values[i] >= 1){
        sum_of_postive_values += values[i];
    }
    else{
        sum_of_negative_values += values[i];
    }

  }

  printf("%d %d", sum_of_postive_values, sum_of_negative_values);

  return 0; 
}