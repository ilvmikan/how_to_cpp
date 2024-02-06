#include <iostream>

int main() {
    int a = 10;                 // inteiros são valores sem parte fracionária podem ser positivos, negativos ou zero
    float b = 10.5;             // decimal com precisão simples (menos preciso, ocupando 32 bits)
    double c = 20.2130;         // decimal com precisão dupla (mais preciso, ocupando 64 bits)
    char d = 'A';               // armazena um caractere, pode ser também um número baseado na tabela ASCII
    bool veracidade = true;     // armazena verdadeiro, falso (ou 1 e 0) 

    std::cout << "Valor inteiro: " << a << std::endl;
    std::cout << "Valor float: " << b << std::endl;
    std::cout << "Valor double: " << c << std::endl;
    std::cout << "Valor char: " << d << std::endl;
    std::cout << "Valor bool: " << std::boolalpha << veracidade << std::endl;

    return 0;
}
