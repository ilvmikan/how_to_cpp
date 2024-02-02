#include <iostream>
using namespace std;

double verificar_nota(double notas[], int tamanho) {
    double media = 0.0;

    for (int i = 0; i < tamanho; i++) {
        if (notas[i] < 0 || notas[i] > 10 ) {
            cout << "A nota do [" << i + i << "] semestre nao entra nos intervalos do sistema (0 - 10)"<< endl ;
            return -1;
        }
    }
    
    for (int i = 0; i < tamanho; i++) {
        media += notas[i];
    }

    return media /= tamanho;

}

int main() {
    const int tamanho = 4;
    double notas[tamanho] = {};
    double media = 0.0;

    do {
        cout << "Digite a sua nota do primeiro semestre >> ";
        cin >> notas[0];

        cout << "Digite a sua nota do segundo semestre >> ";
        cin >> notas[1];

        cout << "Digite a sua nota do terceiro semestre >> ";
        cin >> notas[2];

        cout << "Digite a sua nota do quarto semestre >> ";
        cin >> notas[3];


        media = verificar_nota(notas, tamanho);

        if(media >= 0) {
            if (media >= 7) {
                cout << "Parabens, voce foi aprovado!" << endl;
            } else {
                cout << "Voce foi reprovado!" << endl;
            }
        }

    } while (media < 0);

    return 0;
}
