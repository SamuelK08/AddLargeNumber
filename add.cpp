#include "add.hpp"

Add::Add(std::string a, std::string b) {
  result_ = "";
    calculate(a, b);
}

void Add::resizeString(std::string& left, std::string &right) {
     if(left.size() > right.size()) {
        int gap = left.size() - right.size();
        for(int i = 0; i < gap; i++) {
            right += "_";
        }
    } else {
        int gap = right.size() - left.size();
        for(int i = 0; i < gap; i++) {
            left += "_";
        }
    }
}

int Add::absolute(int number) {
    if(number < 0) {
        return number * -1;
    } else {
        return number;
    }
}

string Add::calculate(std::string a, std::string b) {
    resizeString(a, b);
    bool hasCarry = false;
}

int Add::charToInt(char inputChar) {
    return inputChar - 48;
}

char Add::intToChar(int number) {
    return number + 48;
}

std::string Add::getResult() {
    return result_;
}
