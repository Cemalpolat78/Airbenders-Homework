#include <iostream>
#include <cctype>
#include <string>
#include <vector>

int main() {
    char askfornewstring = 'y';

    while ( askfornewstring == 'y' ){
        std::string line;   
        std::getline(std::cin, line);
        std::vector<char> given_vec{} ; 
        
        for (int i = 0 ; i < line.size(); i++){

            if(isalnum(line[i])){
                given_vec.push_back(std::tolower(line[i]));                

            }
        
        }
    
    std::string front(given_vec.begin(), given_vec.end());
    std::string back(given_vec.rbegin(), given_vec.rend());
    if (front == back){
        std::cout << "It is palindrome\n";

    } else {
        std::cout << "It is not a palindrome"<< std::endl;


   }

    std::cout << "Do you want to check another string? (y/n) ";
    std::cin >> askfornewstring;
    std::cin.ignore(2 , '\n');

    }

return 0;
}

