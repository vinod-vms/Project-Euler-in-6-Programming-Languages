#include <iostream>

/*
* Vinod Mathew Sebastian
*/
using namespace std;

int multiples_of_3_and_5(int number);

int main()
{
    int num;
    cout << "Please enter a number: " ;
    cin >> num;
    int result = multiples_of_3_and_5(num);
    cout << "The result is: " << result << endl;
    return 0;
}

int multiples_of_3_and_5(int number) {
int sum = 0;
if (number < 1){
    cout << "Please enter a positive number" << endl;
}
else {
    for (int i = 0; i<number; i++){
        if((i%3 == 0)|| (i%5 == 0)){
            sum += i;
        }
    }
    return sum;
}

}
