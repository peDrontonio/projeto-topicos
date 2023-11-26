#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;

class criptografia{
private:
	static const char chave[];
    static const int tam_chave;
		
public :
	
    void cript_txt(){
    char texto[10000];
	cout<< endl << "Digite a Mensagem que sera Criptografada" << endl;
	cin.getline(texto, sizeof(texto));
	int tam_texto = strlen(texto),i;
	int aux[tam_texto];
	int aux2[tam_chave];
	int texto_crip[tam_texto];
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
	      arquivo << texto_crip[i] <<" ";
        }
	arquivo.close();
	system("pause");
	system("explorer c:\\Cript_Definitivo\\arquivos_gerados\\");
	
	}
//=========================================================================	

	void cript_arquivo(){
		 
	}
	
	void decript_arquivo(){
	}
	
	void compress_arquivo(){
	}
	
	void decompress_arquivo(){
	}
	
};


void menu(){
	int opcao;
	while (1){
	   system("cls");
	   cout << "Escolha uma opçao: " << endl;
       cout << "1) Cripitografar um arquivo ou texto" << endl;
       cout << "2) Descripitografar um arquivo" << endl;
       cout << "3) Comprimir um arquivo " << endl;
       cout << "4) Descomprimir um arquivo" << endl;
       cout << "5) Sair" << endl << ":";
       cin >> opcao;
       criptografia obj;
       if(opcao>5||opcao<0||opcao%1!=0){
         cout<<"escolha apenas numeros entre 1 e 5"<<endl;;
         system("pause");
       }
       switch (opcao){
       case 1 :
         system("cls");
         cout << "Escolha uma opçao: " << endl;
         cout << "1) Criar um arquivo .txt cripitografado" << endl;
         cout << "2) Importar um arquivo para ser cripitografado" << endl;
         cout << "3) Sair" << endl << ":";
         cin >> opcao;
         if(opcao>3||opcao<0||opcao%1!=0){
           cout<<"escolha apenas numeros entre 1 e 3";
         }
         switch (opcao){
      	   case 1 :
      	       system("cls");
      	       obj.cript_txt();
      	       system("pause");
      	       break;
      	   case 2 :
      		   system("cls");
      		   obj.cript_arquivo();
      		   system("pause");
      		   break;
      	   case 3 :
	           system("cls");
	           cout<<endl<<"Saindo..." <<endl;
	           exit(0);
	           break;
      	   } 
         break;
       case 2 :
          system("cls");
          obj.decript_arquivo();
          system("pause");
          break;
       case 3 :
          system("cls");
          obj.compress_arquivo();
          system("pause");
          break;
       case 4 :
          system("cls");
          obj.decompress_arquivo();
          system("pause");
           break; 
	   case 5 :
	      system("cls");
	      cout<<endl<<"Saindo..." <<endl
		  ;
	      exit(0);
	      break;
        } 
    }
}

const char criptografia::chave[] = "ZzXx";
const int criptografia::tam_chave = strlen(criptografia::chave);

int main() {
    menu();
    return 0;
}
