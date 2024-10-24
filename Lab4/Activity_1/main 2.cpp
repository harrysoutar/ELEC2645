//ELEC/XJEL2645 - String
// Create a new project and, using some of the String examples as a starting point, write some code that counts the 
// number of vowels (a, e, i, o, u) in a given string. 

#include <iostream>
#include <string>
std::string str_in;
int str_length;
int counter;

int main(){
    std::cout << "Please enter a string: ";
    std::cin >> str_in;
    str_length = str_in.size();
    std::string array[str_length - 1];
    for(int i = 0; i < str_length; i++) {
        array[i] = str_in[i];
        if(array[i] == "a" || array[i] == "e" || array[i] == "i" || array[i] == "o" || array[i] == "u") {
            counter++;
        }
    }
    std::cout << counter;
}