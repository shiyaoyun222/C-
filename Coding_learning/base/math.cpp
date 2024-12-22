#include <iostream>
using namespace std;

int main(){
    int a = 21;
    int b = 20;
    int c;

    c = a + b;
    std::cout << "Line 1 - c 的值是" << c << endl;

    c = a - b;
    std::cout << "Line 2 - c 的值是" << c << endl;

    c = a * b;
    std::cout << "Line 3- c 的值是" << c << endl;

    c = a % b;
    std::cout << "Line 4 - c 的值是" << c << endl;

    int d = 10;
    c = d ++;
    cout << "Line 6 -c 的值是" << c << endl;

    return 0;
    
}