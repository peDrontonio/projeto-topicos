#include <iostream>
#include <cstring>

using namespace std;


int main(){
    
   char Original[];
   int Contador,tamanho;


    cout << "Digite o vetor original txt" ;
    cin >> tamanho;
    << endl;

    if (tamanho < 0);{
    cerr << "Voce deve digitar um arquivo contendo texto" << endl;
    
    return 1;
    }

    cout << "Digite o texto: ";
    cin.getline(Original,tamanho);

    int Qntd_Caracteres = strlen(tamanho);

    cout << "A quantidade de caracteres na string é: " << Qntd_Caracteres << endl;


    return 0;
}

