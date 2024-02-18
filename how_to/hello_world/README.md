## Explicação do código

A famosa tradição do "Hello, world!" ao aprender uma nova linguagem. Vamos tentar explorar alguns conceitos como bibliotecas, função **"main"** e a saída de dados com "**cout**" 

#### BIBLIOTECAS
```C++
#include <iostream>
```
**__<iostream>__** é a biblioteca padrão em C++ (input/output stream) que fornece a entrada e saída de dados. As principais classes fornecidas (você verá **cout** logo logo) são:
- **__cin__**: entrada de dados
- **__cout__**: saida de dados
- **__cerr__**: exibir mensagens de erro
- **__clog__**: mensagens de log

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
- __**MAIN**__: nome da função
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
"**__cout__**" junto de "**__<<"__** (conhecido como operador de inserção) é usado para saida de dados, como mostrado, estamos inserindo a string "Hello world" no fluxo de saída "__**cout**__". Pra quem já programa, é semelhante a:
- Python: print("Hello, world")
- Java: System.out.print("Hello, world");

E a instrução "**__endl__**" é usada para inserir uma nova linha no fluxo de saída e, de forma prática, significa "fim da linha", semelhante a "**__system.out.println()__**" em Java.

Além disso, utilizando "using namespace std" abaixo da biblioteca, você pode usar "cout" e outras coisas da biblioteca padrão diretamente, sem utilizar "std::". Compare o exemplo abaixo com o código __**"hello_world.cpp"**__.
```C++
#import <iostream>
using namespace std;
// posso omitir o uso de std:: em cout
// não é uma boa prática, mas como iniciante dá pra deixar passar por simplicidade

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}
```

