#include <stdio.h>
#include <stdlib.h>

#include "comprobadores.h"

int cocheIsArrancado(char* pregunta){
			
			if(pregunta == NULL){
				printf("ERROR AL ALOJAR MEMORIA PARA LA PREGUNTA.\n");
				return 0;
			}	
			
			printf("Está el coche arrancado?\n");
			scanf("%s", pregunta);
			if(pregunta[0] == 'y' || pregunta[0] == 'Y' || pregunta[0] == 'S' || pregunta[0] == 's'){
				printf("%s, si! tu coche está arrancado\n", pregunta);
			}else if(pregunta[0] == 'n' || pregunta[0] == 'N'){
				printf("%s, no! tu coche NO está arrancado\n", pregunta);
			}else if(pregunta[0] == 'c' || pregunta[0] == 'C'){
				printf("ADIOS!\n");
				free(pregunta);
				return 0;
			}else{
				printf("Elija Y/N/C\n");
			}
	}

int presionIsOk(double presion){
	if(presion<2.2){return 1;}
	else if(presion <2.6){return 0;}
	else if(presion >=2.6){return 2;}
	else {return -1;}
}

int cinturonesIsOk(int peso){
	/**
	 * peso es el valor de 0 o 1 que devuelve un sensor en
	 * el asiento para determinar si hay alguien sentado**/
	 if(peso==1){return 1;}
	 else if(peso==0){return 0;}
}

bool encenderLuz(int i){
	if(cinturonesIsOk(i)==1){
		printf("Indicador cinturon encendido");
		return true;
	}else{
		printf("Indicador cinturon apagado");
		return false;
	}
	
}

