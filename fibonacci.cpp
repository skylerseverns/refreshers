#include <iostream>

using namespace std;


void fibonacciNonRecursive();

int main()
{
    fibonacciNonRecursive();
    return 0;
}

void fibonacciNonRecursive(){
    long numberToDisplay = 0;
    long number0 = 0;
    long number1 = 0;
    long seed = 0;

    while(seed < 91){
        numberToDisplay = number0 + number1;

        cout << seed << ". " << numberToDisplay << endl;

        if(seed == 0){
            number1 = 1;
        } else if (seed == 1){
            number0 = 1;
        }

        number0 = number1;
        number1 = numberToDisplay;

        seed++;
    }
}
