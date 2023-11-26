#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;

char chave[] = "ZzXx";
int tam_chave = strlen(chave);


int main(){
	char texto[10000];
	cout<< endl << "Digite a Mensagem que sera Criptografada" << endl;
	cin.getline(texto, sizeof(texto));
	int tam_texto = strlen(texto),i,aux[tam_texto],aux2[tam_chave],texto_crip[tam_texto];
	for(i=0; i < tam_texto ; i++){
		aux[i] = texto[i];
	}
	for(i=0; i < 4; i++){
		aux2[i] = chave[i]; 
	}
	for(i=0; i < tam_texto ; i++){
		texto_crip[i] = aux[i]*aux2[i % tam_chave];
	}
	ofstream arquivo;
	arquivo.open("teste.txt");
	for (i=0; i < tam_texto; i++){
	    arquivo << texto_crip[i]<<" ";
    }
	arquivo.close();
	return 0;
}
