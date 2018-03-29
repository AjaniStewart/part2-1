#include <iostream>
#include <cctype>
#include "unindent.h"

using namespace std;

string removeLeadingSpaces(string line){
    string result = "";
    for(int i = 0; i < line.length(); i++){
        if(!isspace(line[i])){
            result += line[i];
        }
    }
    return result;
}
int countChar(string line){
    static int bracket = 0;

    for(int i = 0; i < line.length(); i++){
        if(line[i] == '{'){
            bracket++;
        }else if(line[i] == '}'){
            bracket--;
        }
    }
    return bracket;
}

