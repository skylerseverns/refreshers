#include <iostream>
#include <regex>

using namespace std;

void countWords(string input);
bool contains(char input, string pattern);

int main(int argc, const char * argv[])
{
    countWords("Hello World!");
    countWords("Hello-World!");
    countWords("Dia dhuit! Dia 's Muire dhuit!");

    return 0;
}

void countWords(string input) {
    bool inWord = 0;
    int wordCount = 0;

    string pattern = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-";
    for(int x = 0; x < input.length(); x++){
       if(contains(input[x], pattern)){
          inWord = 1;
       } else {
           if(inWord) {
               wordCount++;
               inWord = 0;
           }
       }

       if((x + 1) == input.length() && inWord){
            wordCount++;
            inWord = 0;
       }
    }

    cout << "Words in phrase: " << wordCount << endl;
}

bool contains(char input, string pattern){
   for(int x = 0; x < pattern.length(); x++){
        if(pattern[x] == input){
            return 1;
        }
   }
   return 0;
}
