#include <iostream>

using namespace std;


void reverseInPlace(string input);

int main()
{
    reverseInPlace("Hello World!");
    return 0;
}

void reverseInPlace(string input){
    int fromStart = 0;
    int fromEnd   = input.length() - 1;

    while(fromStart < fromEnd){
        char swap = input[fromStart];

        input[fromStart] = input[fromEnd];
        input[fromEnd] = swap;

        fromStart++;
        fromEnd--;
    }

    cout << input << endl;
}
