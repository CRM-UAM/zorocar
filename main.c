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

int main (){
	char *pregunta;
	
	pregunta = (char*) malloc(sizeof(char)*2);
	
	while(1){
		if(cocheIsArrancado(pregunta)==0) return 0;	
	}
	return 0;
}
