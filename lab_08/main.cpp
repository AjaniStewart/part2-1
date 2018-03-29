#include <iostream>
#include "unindent.h"

int main(){
    string w, reap;
  //char c;
  //int i=0;
  //char str[]="Example sentence to test isspace\n";
 /* while (str[i])
  {
    c=str[i];
    if (isspace(c)) c='\n';
    //putchar (c);
    i++;
  }
  */
bool start = true;
int ctr = 0;

  while(getline(cin, w)){
        
        if(start){
            start = false;
            cout << removeLeadingSpaces(w) << endl;
            ctr = countChar(w);
        }else{
            for(int i = 0; i < ctr+1; i++){
                cout << "   ";  
            }
            ctr = countChar(w);
            cout << removeLeadingSpaces(w) << endl;
            
            
        }
       
  }
  cout << reap  << endl;
    return 0;
}