#include <iostream>
#include <queue>
#include <string>
#include <cstdlib>
#include <limits>

void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void aguardar_entrada()
{
    std::cout << "\naperte alguma tecla para continuar...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

void entrar_na_fila(const std::string &name, std::queue<std::string> &peoples)
{
    /* add an element to the end of the queue */
    peoples.push(name);
    std::cout << "[" << name << "] acabou de entrar na fila" << std::endl;

    aguardar_entrada();
    clear_screen();
}

void sair_da_fila(std::queue<std::string> &peoples)
{
    /* checks if queue is not empty and removes the front element*/
    if (!peoples.empty())
    {
        std::cout << "O elemento [" << peoples.front() << "] esta saindo da fila" << std::endl;
        peoples.pop();
    }
    else
    {
        std::cout << "A fila esta vazia." << std::endl;
    }

    aguardar_entrada();
    clear_screen();
}

void exibir_fila(const std::queue<std::string> &peoples)
{

    /*
        create a temp queue to show elements without modify the
        original queue because this code uses .pop (remove elements)
        and we dont want to modify original queue instead xd
    */

    std::queue<std::string> tempQueue = peoples;
    int i = 1;

    if (!tempQueue.empty())
    {
        std::cout << "Elementos na fila: " << std::endl;
        while (!tempQueue.empty())
        {
            std::cout << i << ": " << tempQueue.front() << " | ";
            i++;
            tempQueue.pop();
        }
    }
    else
    {
        std::cout << "Nenhum elemento na fila" << std::endl;
    }

    aguardar_entrada();
    clear_screen();
}

int main()
{
    std::queue<std::string> peoples;
    std::string name;
    char r;

    // menu
    do
    {
        clear_screen();
        std::cout << "1: Entrar na fila\n2: Tirar o primeiro elemento\n3: Ver fila\n4: Sair do programa\n";
        std::cout << ">>>>  ";
        std::cin >> r;

        switch (r)
        {
        case '1':
            clear_screen();
            std::cout << "Digite seu nome\n>> ";
            std::cin >> name;
            entrar_na_fila(name, peoples);
            break;

        case '2':
            clear_screen();
            sair_da_fila(peoples);
            break;

        case '3':
            clear_screen();
            exibir_fila(peoples);
            break;

        case '4':
            clear_screen();
            std::cout << "Saindo.\n";
            break;

        default:
            std::cout << "Opcao inválida.\n";
        }

    } while (r != '4');

    return 0;
}
