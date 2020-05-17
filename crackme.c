#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

float test(char *param_1){
  float local_8;
  
  local_8 = 720300.00000000;
  while (*param_1 != '\0') {
    local_8 = local_8 / (float)((int)*param_1 + -0x30);
    param_1 = param_1 + 1;
  }
  return (float)local_8;
}

int main(int argv, char** argc){
	if (argv != 2){
		printf("Digite a chave do programa:\n");
		return -1;
	}
	for(int i = 0; i < strlen(argc[1]); i++){
		if(!isdigit(argc[1][i])){
			printf("digite apenas numeros!\n");
			return -1;
		}}
  	if (test(argc[1]) == 1)
    		printf("Chave Válida!\n");
  	else
   	 	printf("Chave Inválida!\n");
	
	

	return 0;
}
