/**
 📅 Date   : 10-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

void print_num_reverse(int des, int i){
    if(des == i) return;

    print_num_reverse(des, ++i);
    // Print output with space
    printf("%d", i);

    if(i > 1) printf(" ");
}

int main(){
  int destination;
  scanf("%d", &destination);

  print_num_reverse(destination, 0);
  return 0; 
}