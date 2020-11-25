#include <stdio.h>
#include <stdlib.h>

/* written by
* Vinod Mathew Sebastian 
*/

int multiples_of_3_and_5(int);

int main(void) {

	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	int result = multiples_of_3_and_5(num);
	printf("The sum is: %d", result);

	return 0;
}

int multiples_of_3_and_5(int number){

int sum = 0;

if (number < 1){
        printf("Please enter a positive number\n");
}
else {
        for(int i = 1; i<number; i++){
		if ((i % 3 == 0) || (i % 5 == 0)){
		sum += i;
		}
	}
}

return sum;
}
