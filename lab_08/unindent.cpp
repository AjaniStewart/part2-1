#include <iostream>
#include <cctype>
#include "unindent.h"

using namespace std;

//This removes ALL spaces, instead of leading spaces
//rewrote function to make it remove only leading spaces
string removeLeadingSpaces(string line){
    string result = "";
    // for(int i = 0; i < line.length(); i++){
    //     if(!isspace(line[i])){
    //         result += line[i];
    //     }
    // }
    int count = 0;
    //skip all the spaces
    while (isspace(line[count])) count++;
    //add the rest of the string to result
    for (; count < line.size(); ++count)
        result += line[count];
    return result;
}

//wrong prototype; this should be able to count any character, not just brackets
//rewriting to make it work as intended
int countChar(string line, char c){
    //static int bracket = 0;
    int count = 0;
    for(int i = 0; i < line.length(); i++)
        if(line[i] == c)
            count++;
    return count;
}

