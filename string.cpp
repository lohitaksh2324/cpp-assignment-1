#include <iostream>
#include <bits/stdc++.h>

int main() {
    int freq[52] = {0};  
    std::string str, newstr;
    std::cout << "enter a string: ";
    std::getline(std::cin,str);
    for(char &j : str ) {
        j = std::toupper(j);
    }

    newstr = str;
    int length = str.length();
    for(int x = 0; x < length / 2; x++) {
        char temp = str[x];
        str[x] = str[length - x - 1];
        str[length - x - 1] = temp;
    }
   
    

    if(newstr == str) {
        std::cout << "string is palindrome" << std::endl;
        
    }
    else {
        std::cout << "string is not palindrome" << std::endl;
    }

    for(char &s : newstr) {
        if(s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U'){
            s = '*';
        }
    }
    std::cout << newstr;

    for (char ch : str) {
        if (ch >= 'A' && ch <= 'Z') 
            freq[ch - 'A']++;  
        else if (ch >= 'a' && ch <= 'z') 
            freq[ch - 'a' + 26]++;  
    }

    std::cout << std::endl << "freq: " << std::endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)  {
            std::cout << (char)('A' + i) << ": " << freq[i] << std::endl;
        }
    }

} 