/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int no1,no2,sum;
  float avg;
  
  printf("Enter Marks : ");
  scanf("%d",&no1);

  printf("Enter Marks : ");
  scanf("%d",&no2);

  sum=no1+no2;
  printf("Total Marks : %d \n",sum);

  avg=sum/2;
  printf("Average Marks : %.2f",avg);
  
  return 0;
}

