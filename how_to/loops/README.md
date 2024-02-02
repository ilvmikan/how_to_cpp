# Explicação do loop **FOR**

### `Para ler sobre o loop while, role até a proxima sessão escrita "Explicação do loop while"`

O loop for é utilizado para a criação de repetições de uma certa condição enquanto verdadeira, esse loop é normalmente utilizado em situações onde você já tem um limite estabelecido, por exemplo:
### Em um jogo de forca
- Você tem 5 tentativas restantes.
### Ou em um "Cara ou coroa" 
- Restam apenas 2 tentativas para jogar a moeda e cair "Cara".

### A estrutura do loop for é:

```C++

for (inicializacao ; condição ; incremento ou decremento){

	//bloco de código
}

for (  int x = 0;  x < 10;  x++){
  cout << "O valor de x = " << x << endl;  
}

```

No exemplo do código mostrado acima e também em `for.cpp`, utilizamos uma inicialização de uma variável com o nome "`x`" com um valor de 0 associado a ela. Nisso, criamos uma condição de `enquanto x for menor que 10` e logo após, colocamos um incremento na variavel `x`, note que a condição `x < 10 é verdadeira`, **x** (que recebe o valor 0) é menor do que o valor 10, então o bloco de código é executado enquanto a condição de `x é menor que 10` é verdadeira, fazendo:

```C++
//saida
O valor de i =  1
O valor de i =  2
O valor de i =  3...

```
Até que a condição seja falsa, sendo `x maior do que 10` e acontece a finalização do loop.

Um exemplo prático é uma tabuada, mostrado em [arquivo tabuada][tabuada-link].

[tabuada-link]: exercises/5.%20tabuada.cpp


Em outras palavras: Se X for menor que 10, adicione 1 a variavel x (x + 1), se X for maior que 10, encerre esse loop.

# Explicação do loop **while**
