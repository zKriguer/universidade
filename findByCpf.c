#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int tamanho;
void menu();

struct usuario{
  int codigo;
  char cpf [14];
  char vacina[50];
  char data[8];
  char lote [50];
  char nome[100];
} Pessoas[1000000];

void consultar(){
  int i;
  int ret;
  char cpfConsulta[14];
  printf("%s", "Qual o CPF que deseja consultar? \n> ");
  scanf("%s", cpfConsulta);

  for(i = 0; i < tamanho; i++){

    ret =  strcmp(cpfConsulta , Pessoas[i].cpf);

    if(ret == 0){
    printf("\n%s%d \n","Código: ", Pessoas[i].codigo);
	printf("%s%s \n","Nome: ", Pessoas[i].nome);
    printf("%s%s \n", "CPF: ", Pessoas[i].cpf);
    printf("%s%s \n", "Vacina: ", Pessoas[i].vacina);
    printf("%s%s \n", "Data: ", Pessoas[i].data);
    printf("%s%s \n", "Numero do Lote: ", Pessoas[i].lote);
    }
  }
	system("pause");
  menu();
}

void listar (int length) {
  int i;
  for(i = 0; i < length; i++){
	printf("%s%d \n","Código: ", Pessoas[i].codigo);
	printf("%s%s \n","Nome: ", Pessoas[i].nome);
    printf("%s%s \n","CPF: ", Pessoas[i].cpf);
    printf("%s%s \n", "Vacina: ", Pessoas[i].vacina);
    printf("%s%s \n", "Data: ", Pessoas[i].data);
    printf("%s%s \n", "Numero do Lote: ", Pessoas[i].lote);
    printf("%s", "=================================================== \n");
  }
	system("pause");
  menu();
}

void cadastrar(){

  int i;
  printf("%s", "Quantas pessoas deseja cadastrar? \n> ");
  scanf("%d", &tamanho);
  fflush(stdin);

  for(i = 0; i < tamanho; i++){
    Pessoas[i].codigo = i+1;
    printf("%s%d%s", "Qual o nome da " , i+1 , "º pessoa?\n> ");
    scanf("%s" , Pessoas[i].nome);
      fflush(stdin);
    printf("%s%d%s", "Qual o CPF da " , i+1 , "º pessoa?\n> ");
    scanf("%s" , Pessoas[i].cpf);
      fflush(stdin);
    printf("%s%d%s", "Qual a Vacina tomada pela " , i+1 , "º pessoa?\n> ");
    scanf("%s" , Pessoas[i].vacina);
      fflush(stdin);
    printf("%s%d%s", "Em qual data a " , i+1 , "º pessoa recebeu essa vacina? (Formato dd/mm/aa)\n> ");
    scanf("%s" , Pessoas[i].data);
      fflush(stdin);
    printf("%s%d%s", "Qual o lote da vacina aplicada à " , i+1 , "º pessoa?\n> ");
    scanf("%s" , Pessoas[i].lote);
      fflush(stdin);
	    system("cls");
}
	system("pause");
  menu();
};

void menu() {
	system("cls");
  int escolha;
	  printf("%s \n", "Escolha entre: \n");
	  printf("%s \n", "1 - Cadastrar Vacina \n");
	  printf("%s \n", "2 - Listar Aplicações \n");
	  printf("%s \n", "3 - Consultar por CPF \n");
	  printf("%s \n", "4 - Sair \n ");
	  fflush(stdin);
	  scanf("%d", &escolha);
	  system("cls");
	if (escolha == 1) cadastrar();
	if (escolha == 2) listar(tamanho);
	if (escolha == 3) consultar();
}

int main(void) { 
  setlocale(LC_ALL, "Portuguese");
  menu();
}
