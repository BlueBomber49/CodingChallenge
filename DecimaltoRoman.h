#pragma once
#include <string>
#include <map>
#include <algorithm>
using namespace std;


string DecimaltoRoman(int numIn){
    string result;
    //Handles 1000's place
    while(numIn - 1000 >= 0){
        numIn -= 1000;
        result.append("M");
    }
    //Handling 100's place
    if(numIn >= 900){
        numIn -= 900;
        result.append("CM");
    } else if(numIn >= 500){
        numIn -= 500;
        result.append("D");
    } else if(numIn >= 400){
        numIn -= 400;
        result.append("CD");
    } while(numIn >= 100){
        numIn -=100;
        result.append("C");
    }
    //Handling 10's place
    if(numIn >= 90){
        numIn -= 90;
        result.append("XC");
    } else if(numIn >= 50){
        numIn -= 50;
        result.append("L");
    } else if(numIn >= 40){
        numIn -= 40;
        result.append("XL");
    } while(numIn >= 10){
            numIn -=10;
            result.append("X");
        }
    //Handling 10's place
    if(numIn >= 9){
        numIn -= 9;
        result.append("IX");
    } else if(numIn >= 5){
        numIn -= 5;
        result.append("V");
    } else if(numIn >= 4){
        numIn -= 4;
        result.append("IV");
    } while(numIn >= 1){
        numIn -=1;
        result.append("I");
    }
    return result;
}