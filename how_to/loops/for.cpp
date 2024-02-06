#include <iostream>
using namespace std;

/* Como utilizar

    for ( inicialização ; condição ; incremento) {
        // bloco de código
    }
*/

void for_loop(){
    for (int x = 0; x <= 10; x++){
        cout << "O valor de x = " << x << endl;
    }
}

int main(){
    char saudacao[4] = {'O', 'i', '!', '\0'};

    for(int i = 0; i < 4; i++){
        std::cout << saudacao[i];
    }

    return 0;
}