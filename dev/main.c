/**
 * zorocar, asistente al conductor
 * @author Lázaro
 * @date 14-12-2016
 * @brief Contiene el inicio del programa
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "comprobadores.h"

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
