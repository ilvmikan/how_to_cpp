## Explicação do código

A famosa tradição do "Hello, world!" ao aprender uma nova linguagem. Vamos tentar explorar alguns conceitos como bibliotecas, função **"main"** e a saída de dados com "**cout**" 

#### BIBLIOTECAS
```C++
#include <iostream>
```
**__<iostream>__** é a biblioteca padrão em C++ (input/output stream) que fornece a entrada e saída de dados. As principais classes fornecidas (você verá **cout** logo logo) são:
- cin: entrada de dados
- cout: saida de dados
- cerr: exibir mensagens de erro
- clog: mensagens de log

#### FUNÇÕES
```C++
int main () {
    /*
    Código
    */
    return 0;
}
```
É a função principal do programa, onde a execução começa, além disso, temos
- __**INT**__: tipo de dado que a função retorna, **INT** significa números inteiros (-3, -2, -1, 0, 1, 2, 3...)
- __**MAIN**__: nome da função (você pode altera-lo, mas não é uma prática comum)
- __**( )**__: Argumentos da função
- __**{ }**__: Bloco de código associado a função (todo código que está dentro de { } pertence a função), por exemplo:
```C++
int main () {
    std::cout << "Olá!! Estou dentro da função" << std::endl;
    
    return 0;
}

std::cout << "Me expulsaram." << std::endl;
```
Se o código for executado, acontecerá um erro:
```C++
.\hello_world.cpp:9:6: error: 'cout' in namespace 'std' does not name a type
 std::cout << "Me expulsaram." << std::endl;
      ^~~~
In file included from .\hello_world.cpp:1:0:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:61:18: note: 'std::cout' declared here
   extern ostream cout;  /// Linked to standard output
```
- Return 0: indica que o programa foi executado com sucesso :)

#### COUT
```C++
std::cout << "Hello, world!" << endl;
```
"cout" junto de "<<" (conhecido como operador de inserção) é usado para saida de dados, como mostrado, estamos inserindo a string "Hello world" no fluxo de saída "**cout**". Pra quem já programa, é semelhante a:
- Python: print("Hello, world")
- Java: System.out.println("Hello, world");

Utilizando "using namespace std" abaixo da biblioteca, você pode usar "cout" e outras coisas sem utilizar "std::" junto
```C++
#import <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}
```

