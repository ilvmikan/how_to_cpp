#include <iostream>

int main(){
    int escolha;

    std::cout << "Qual tabuada voce deseja ver? >> ";
    std::cin >> escolha;
    
    std::cout << "A tabuada do " << escolha << ":" << std::endl;
    for (int i = 0; i <= 10; i++) {
        std::cout << escolha 
                  << " x " 
                  << i 
                  << " = " 
                  << escolha * i 
                  << std::endl;
    }

    return 0;
}