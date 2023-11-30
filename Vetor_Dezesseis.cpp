#include <iostream>
#include <cstring>

using namespace std;

int contador() {
    int tamanho = 16;

    char Original[tamanho];

    cout << "Digite o texto: ";
    cin.getline(Original, tamanho);

    int Qntd_Caracteres = strlen(Original);

    cout << "A quantidade de caracteres na string é: " << Qntd_Caracteres << endl;

    return Qntd_Caracteres;  // Retorna a quantidade de caracteres
}

void lerdezesseis() {
    const int tamanhoPorcao = 16;
    char porcao[tamanhoPorcao];

    cout << "Digite os caracteres (pressione Enter para finalizar):" << endl;

    while (true) {
        // Chama a função contador e obtém a quantidade de caracteres
        int bytesRead = contador();

        // Se há caracteres lidos, faça algo com a porção
        if (bytesRead > 0) {
            // Lê uma porção de 16 caracteres ou menos
            cin.read(porcao, min(tamanhoPorcao, bytesRead));

            // Exemplo: Imprime os caracteres lidos
            for (int i = 0; i < min(tamanhoPorcao, bytesRead); ++i) {
                cout << porcao[i];
            }
            cout << endl;
        }

        // Verifica se atingiu o final da entrada
        if (bytesRead < tamanhoPorcao) {
            break;
        }
    }
}

int main() {
    // Chama a função para ler porções de 16 caracteres da entrada do usuário
    lerdezesseis();

    return 0;
}
