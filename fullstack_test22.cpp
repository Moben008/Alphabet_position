#include <string>
#include <sstream>
#include <iostream>
#include <cctype>
#include <algorithm>

std::string alphabet_position(std::string message)
{ // remove the spaces from the message 
    message.erase(std::remove_if(message.begin(), message.end(), isspace), message.end());

//creating a new string
//first changing the the letters to low
//removing all the non letters from the string 
    std::ostringstream os;
    for (auto const & c : message)
    {
        char c_lower = std::tolower(c);
        if (c_lower < 'a' || c_lower > 'z')  continue;
        int pos = c_lower - 'a' + 1 ;
        os << pos;
        os << ' ';
    }


    return os.str();
}


int main(){ 

  std::string text; 
  std::cout<<"Enter a phrase :"<<std::endl; 
  std::getline(std::cin, text);
  std::string s_out = alphabet_position(text);
  std::cout<<"the alphabet positions :"<<s_out<<std::endl;


    return 0;
}