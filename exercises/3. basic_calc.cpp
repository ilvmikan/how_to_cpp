#include <iostream>

int main(){

    int num1, num2, soma, sub, multi, div;

    std::cout << "Seja bem vindo a minha primeira calculadora" << std::endl;

    std::cout << "Digite o primeiro número" << std::endl;
    std::cin >> num1;
    std::cout << "Digite o segundo número" << std::endl;
    std::cin >> num2;

    std::cout << "A soma é: " << num1 + num2 << std::endl;
    std::cout << "A subtração é: " << num1 - num2 << std::endl;
    std::cout << "A multiplicação é: " << num1 * num2 << std::endl;
    std::cout << "A divisão é: " << num1 / num2 << std::endl;

    return 0;
}