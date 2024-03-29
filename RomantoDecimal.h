#pragma once
#include <string>
#include <map>
#include <set>
#include <iostream>
using namespace std;


const map<char, int> CharToInt = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

const set<char> validChars = {'I','V','X','L','C','D','M'};

int RomantoDecimal(string strIn){
    int totalVal = 0;
    int charVal;
    int nextVal;
    while(!strIn.empty()){
        if(validChars.find(strIn[0]) == validChars.end()){ //Checking for invalid characters
            cout << "Invalid character " << strIn[0];
            return -1;
        }
        charVal = CharToInt.at(strIn[0]);

        if(strIn.length() != 1) {
            if(validChars.find(strIn[1]) == validChars.end()){ //Checking for invalid characters
                cout << "Invalid character " << strIn[1] << endl;
                return -1;
            }
            nextVal = CharToInt.at(strIn[1]);
        } else{
            //End of string
            nextVal = 0;
        }
        if(charVal < nextVal){ //Subtraction of 2 variables
            nextVal -= charVal;
            totalVal += nextVal;
            strIn = strIn.substr(2);
        }
        else{ //Addition of just 1 variable
            totalVal += charVal;
            strIn = strIn.substr(1);
        }
    }
    return totalVal;
}