#include <iostream>
#include <cstring>

using namespace std;

void caracteresRepetidos(char vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        if (vetor[i] == '\0') {
            continue;  // Ignora caracteres marcados como repetidos
        }

        int contador = 1;  // Inicia o contador para a letra atual

        for (int j = i + 1; j < tamanho; ++j) {
            if (vetor[i] == vetor[j]) {
                ++contador;
                vetor[j] = '\0';  // Marca caracteres repetidos para não contar novamente
            }
        }

        if (contador > 1) {
            cout << "O caractere '" << vetor[i] << "' se repete " << contador << " vezes." << endl;
        }
    }
}

int main() {
    const int tamanhoMaximo = 100;
    char vetor[tamanhoMaximo];

    cout << "Digite um vetor de caracteres: ";
    cin.getline(vetor, tamanhoMaximo);

    caracteresRepetidos(vetor, strlen(vetor));

    return 0;
}
