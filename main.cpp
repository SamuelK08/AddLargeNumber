#include <iostream>
#include "add.hpp"
using namespace std;


int main() {
    // Add myAddition;
    string a = "";
    string b = "";
    cout << "type a: ";
    getline(cin, a);
    cout << "type b: ";
    getline(cin, b);
    

    while(a != "done") {
      cout << myAddition.calculate(a, b) << endl;
      cout << "r: " << myAddition.getResult() << endl;
    }

    return 0;
}
