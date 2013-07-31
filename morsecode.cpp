#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, string> getAlphabetMap();
map<wstring, char> getPlainTextAlphabetMap();
void writeMorseCode(string input, map<char, string> alphabetMap);
void writePlainText(wstring input, map<wstring, char> alphabetMap);

int main()
{
    writeMorseCode("HELLO WORLD", getAlphabetMap());
    writePlainText(L"••••   •   •-••   •-••   ---       •--   ---   •-• •-••   -••", getPlainTextAlphabetMap());

    return 0;
}

void writeMorseCode(string input, map<char, string> alphabetMap){
    for(int x = 0; x < input.length(); x++){
        cout << alphabetMap[input[x]];

        if((x + 1) < input.length() && input[x + 1] != ' '){
            cout << "   ";
        }
    }

    cout << endl << endl;
}

void writePlainText(wstring input, map<wstring, char> alphabetMap){
    char previousCharacter = NULL;
    wstring currentMorse = (L"");

    for(int x = 0; x < input.length(); x++){

        if((previousCharacter == ' ' && input[x] != ' ') || (previousCharacter != ' ' && input[x] == ' ')){
            cout << alphabetMap[currentMorse];
            currentMorse = L"";
        } else if (x == (input.length()- 1)){
            currentMorse += input[x];
            cout << alphabetMap[currentMorse];
            break;
        }

        currentMorse += input[x];
        previousCharacter = input[x]; // for comparison
    }

    cout << endl << endl;
}


map<char, string> getAlphabetMap() {
    map<char, string> output;
    output['A'] = "•-";
    output['B'] = "-•••";
    output['C'] = "-•-•";
    output['D'] = "-••";
    output['E'] = "•";
    output['F'] = "••-•";
    output['G'] = "--•";
    output['H'] = "••••";
    output['I'] = "••";
    output['J'] = "•---";
    output['K'] = "-•-";
    output['L'] = "•-••";
    output['M'] = "--";
    output['N'] = "-•";
    output['O'] = "---";
    output['P'] = "•--•";
    output['Q'] = "--•-";
    output['R'] = "•-•";
    output['S'] = "•••";
    output['T'] = "-";
    output['U'] = "••-";
    output['V'] = "•••-";
    output['W'] = "•--";
    output['X'] = "-••-";
    output['Y'] = "-•--";
    output['Z'] = "--••";

    output['0'] = "-----";
    output['1'] = "•----";
    output['2'] = "••---";
    output['3'] = "•••--";
    output['4'] = "••••-";
    output['5'] = "•••••";
    output['6'] = "-••••";
    output['7'] = "--•••";
    output['8'] = "---••";
    output['9'] = "----•";
    output[' '] = "       ";

    return output;
}

map<wstring, char> getPlainTextAlphabetMap() {
    map<wstring, char> output;
    output[L"•-"]   = 'A';
    output[L"-•••"] = 'B';
    output[L"-•-•"] = 'C';
    output[L"-••"]  = 'D';
    output[L"•"]    = 'E';
    output[L"••-•"] = 'F';
    output[L"--•"]  = 'G';
    output[L"••••"] = 'H';
    output[L"••"]   = 'I';
    output[L"•---"] = 'J';
    output[L"-•-"]  = 'K';
    output[L"•-••"] = 'L';
    output[L"--"]   = 'M';
    output[L"-•"]   = 'N';
    output[L"---"]  = 'O';
    output[L"•--•"] = 'P';
    output[L"--•-"] = 'Q';
    output[L"•-•"]  = 'R';
    output[L"•••"]  = 'S';
    output[L"-"]    = 'T';
    output[L"••-"]  = 'U';
    output[L"•••-"] = 'V';
    output[L"•--"]  = 'W';
    output[L"-••-"] = 'X';
    output[L"-•--"] = 'Y';
    output[L"--••"] = 'Z';

    output[L"-----"] = '0';
    output[L"•----"] = '1';
    output[L"••---"] = '2';
    output[L"•••--"] = '3';
    output[L"••••-"] = '4';
    output[L"•••••"] = '5';
    output[L"-••••"] = '6';
    output[L"--•••"] = '7';
    output[L"---••"] = '8';
    output[L"----•"] = '9';
    output[L"       "] = ' ';

    return output;
}
