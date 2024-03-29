#pragma once
#include <string>
#include <map>
#include <iostream>
#include "RomantoDecimal.h"
#include "DecimaltoRoman.h"
using namespace std;

const map<string, int> testMap1 = {
        //Individual number conversion
        {"C",100},
        {"D",500},
        //Addition happens correctly
        {"III",3},
        {"LVIII",58},
        {"MXXII",1022},
        //Subtraction happens correctly
        {"IV",4},
        {"XCVI",96},
        {"CDLXXXI",481},
        {"MMMDCCXXIX",3729}
        };

const map<int,string> testMap2 = {
        //Individual number conversion
        {5, "V"},
        {50, "L"},
        {1000, "M"},
        //Conversions involving addition
        {3, "III"},
        {56, "LVI"},
        {1621, "MDCXXI"},
        //Conversions involving subtraction
        {9, "IX"},
        {44, "XLIV"},
        {1964,"MCMLXIV"}
};

void testRTD(){
    int testNum = 1;
    for(pair testCase: testMap1){
        string entry = testCase.first;
        int ans = testCase.second;
        int result = RomantoDecimal(entry);
        if(result != ans){
            cout << "Failed test " << to_string(testNum) << endl;
            cout << "Expected: " << entry << ":" << to_string(ans) << endl;
            cout << "Received: " << entry << ":" << to_string(result) << endl;
        }
        testNum++;
    }
    cout << "test finished" << endl;
}

void testDTR(){
    int testNum = 1;
    for(pair testCase: testMap2){
        int entry = testCase.first;
        string ans = testCase.second;
        string result = DecimaltoRoman(entry);
        if(result != ans){
            cout << "Failed test " << to_string(testNum) << endl;
            cout << "Expected: " << to_string(entry) << ":" << ans << endl;
            cout << "Received: " << to_string(entry) << ":" << result << endl;
        }
        testNum++;
    }
    cout << "test finished" << endl;
}
