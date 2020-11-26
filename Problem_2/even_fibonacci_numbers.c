#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Written by
Vinod Mathew Sebastian */
int num;
printf("Enter a number: ");
scanf("%d", &num);
 int sum = 0;
 int first_num = 0;
 int second_num = 1;
 int temp = first_num + second_num;

 while(temp < num){
     if (temp % 2 == 0){
        sum += temp;
     }
     first_num = second_num;
     second_num = temp;
     temp = first_num + second_num;


 }
 printf("The result is: %d", sum);
}
