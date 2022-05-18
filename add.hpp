#ifndef add_hpp
#define add_hpp
#include <iostream>

class Add {
public:
    Add(std::string a, std::string b);
    std::string getResult();
private:
    void resizeString(std::string& left, std::string& right);
    int absolute(int number);
    string calculate(std::string a, std::string b);
    int charToInt(char inputChar);
    char intToChar(int number);
    int carryOn(int inputNumber);
    std::string result_;
};

#include "add.cpp"
#endif
