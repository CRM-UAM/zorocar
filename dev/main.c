/**
 * zorocar, asistente al conductor
 * @author Lázaro
 * @date 14-12-2016
 * @brief Contiene el inicio del programa
 *
 */

#include <stdio.h>
#include <stdlib.h>

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

int main (){
	char *pregunta = NULL;
	double presionRueda = 0;
	
	pregunta = (char*) malloc(sizeof(char)*2);
	
	while(1){
		
		printf("¿Cual es la presión de la rueda?:  ");
		scanf("%lf", &presionRueda);
		
		printf("Resultado del estado de la rueda: %d\n", presionIsOk(presionRueda));
		
		if(cocheIsArrancado(pregunta)==0) return 0;	
	}
	return 0;
}
