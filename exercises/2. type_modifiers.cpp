#include <iostream>
using namespace std;

int main(){

    int a = 1; //4 bytes
    short int b = 1; //2 bytes
    long int c = 1; // 4 bytes

    int a2 = 0;
    signed int b2 = -10;
    unsigned int c2 = -10;

    cout << sizeof(a) << " - " << a2 << endl;
    cout << sizeof(b) << " - " << b2 << endl;
    cout << sizeof(c) << " - " << c2 << endl;

    char caractere = 200;
    char caractere2 = -127;

    cout << sizeof(caractere) << " - " << caractere << endl;
    cout << sizeof(caractere2) << " - " << caractere2 << endl;

    return 0;
}