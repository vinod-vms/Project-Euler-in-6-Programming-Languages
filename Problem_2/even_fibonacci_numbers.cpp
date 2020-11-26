#include <iostream>
using namespace std;

int main() {
// Written by
//Vinod Mathew Sebastian
int num;
cout << "Enter a number:  " ;
cin >> num;

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
 cout << endl << "The result is: " <<  sum << endl;


	
	
	return 0;
}