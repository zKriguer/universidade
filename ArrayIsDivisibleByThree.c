#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Matriz com valores fixo para nao fazer a leitura
    int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};
    
int identificarDivisivelPor3(){

    int i,j;
    for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		if(matriz[i][j] % 3 == 0){
    			printf("%d ", matriz[i][j]);
			}
		}
	}
}

    identificarDivisivelPor3(matriz);
    return 0;
}