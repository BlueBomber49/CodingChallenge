#include <string>
#include "RomantoDecimal.h"
#include "DecimaltoRoman.h"
#include "test.cpp"
using namespace std;


int main(int argc, char* argv []){

    for(int i=1; i<argc; i++){
        string str = argv[i];
        if(isdigit(str[0])){ //Decimal number
            int input = stoi(argv[i]);
            cout << str << ": " << DecimaltoRoman(input) << endl;

        } else{ //Roman numerals
            cout << str << ": " << RomantoDecimal(str) << endl;
        }
    }

}