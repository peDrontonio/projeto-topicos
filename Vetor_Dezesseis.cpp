#include <iostream>

using namespace std;


void girarlinha(char linha[], int tamanho){

    char rotacao = linha[tamanho -1];
    for (int i=tamanho - 1; i > 0; --i ){
        linha[i] = linha[i-1];
    }
    linha[0] = rotacao;
} 


int main() {
    // Tamanho máximo da sequência
    const int MAX_TAMANHO = 100;

    // Solicita ao usuário inserir uma sequência
    cout << "Digite uma sequencia de caracteres (letras ou numeros): ";
    char sequencia[MAX_TAMANHO];
    cin.getline(sequencia, MAX_TAMANHO);

    // Obtém o tamanho da sequência
    int tamanho = 0;
    while (sequencia[tamanho] != '\0') {
        ++tamanho;
    }

    // Cria uma matriz para armazenar a sequência
    char matriz[MAX_TAMANHO][MAX_TAMANHO];

    // Preenche a matriz com a sequência
    for (int i = 0; i < tamanho; ++i) {
        matriz[0][i] = sequencia[i];
    }

    // Exibe a matriz
    cout << "Matriz resultante:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << matriz[0][i] << " ";
    }
    cout << endl;



    return 0;
}
