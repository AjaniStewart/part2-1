#include <iostream>
#include "unindent.h"



int main(){
     string w, reap;
//   //char c;
//   //int i=0;
//   //char str[]="Example sentence to test isspace\n";
//  /* while (str[i])
//   {
//     c=str[i];
//     if (isspace(c)) c='\n';
//     //putchar (c);
//     i++;
//   }
//   */
//indent once
    //more explicit names
    //bool start = true;
    //int ctr = 0;
    int openBrackets = 0, closedBrackets = 0;

      while(getline(cin, w)){
        
        // if(start){
        //     start = false;
        //     cout << removeLeadingSpaces(w) << endl;
        //     openBrackets = countChar(w, '{');
            

        // }else{
            w = removeLeadingSpaces(w);
            if (w[0] == '}') closedBrackets++;
            for(int i = 0; i < openBrackets - closedBrackets; i++){
                //use \t instead of  4 spaces
                std::cout << "\t";  
            }
            std::cout << w << '\n';
            openBrackets += countChar(w, '{');
            closedBrackets += countChar(w,'}');
            //cout << removeLeadingSpaces(w) << endl;
               
        }
  std::cout << reap  << endl;
    return 0;
}