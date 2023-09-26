#include <iostream>
#include <string>
#include <string.h>
#include <vector>

using namespace std; 

bool isSubsequence(string str, string sub){
    char firstChar = str[0]; 
    string str_next = str.substr(1, str.length() - 1); 

    
    cout << str_next << "\n"; 
    
    return true; 
}

int main(){

    string str = "abcheaibcdi"; 
    string sub = "headi";

    isSubsequence(str, sub); 

    // for(int i = 0; i < str.length(); i++){
            
    // }
}