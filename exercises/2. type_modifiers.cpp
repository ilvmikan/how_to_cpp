#include <iostream>
using namespace std;

int main(){
    
    // Exemplo de declaração de variáveis usando modificadores de tipos
    int a = 1;          // Tipo: int (4 bytes)
    short int b = 1;     // Tipo: short int (2 bytes)
    long int c = 1;      // Tipo: long int (4 bytes)

    // Exemplo de inicialização de variáveis com valores específicos
    int a2 = 0;          // Inicializado com 0
    signed int b2 = -10;  // Inicializado com -10 (pode ser negativo)
    unsigned int c2 = -10; // Inicializado com -10 (tratado como número não negativo)

    // Exibição do tamanho e valor das variáveis
    cout << "Tamanho e valor de 'a': " << sizeof(a) << " bytes - " << a << endl;
    cout << "Tamanho e valor de 'b': " << sizeof(b) << " bytes - " << b << endl;
    cout << "Tamanho e valor de 'c': " << sizeof(c) << " bytes - " << c << endl;

    // Exemplo de manipulação de caracteres
    char caractere = 200;   // Pode armazenar valores de -128 a 127 (signed char)
    char caractere2 = -127; // Pode armazenar valores de -128 a 127 (signed char)

    // Exibição do tamanho e valor dos caracteres
    cout << "Tamanho e valor de 'caractere': " << sizeof(caractere) << " byte - " << static_cast<int>(caractere) << endl;
    cout << "Tamanho e valor de 'caractere2': " << sizeof(caractere2) << " byte - " << static_cast<int>(caractere2) << endl;

    return 0;
}