## Explicação do código

#### BIBLIOTECAS
```C++
#include <iostream>
```

#### FUNÇÕES
```C++
int main () {
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


#### COUT
```C++
std::cout << "Hello, world!" << endl;
```
"cout" junto de "<<" é usado para saida de dados, pra que já programa, é semelhante a:
- Python: print("Hello, world")
- Java: System.out.println("Hello, world");

Utilizando "using namespace std", você pode usar "cout" e outras coisas sem utilizar "std::" junto
```C++
cout << "Hello, world!" << std::endl;
```

## Problemas em utilizar "using namespace std"

