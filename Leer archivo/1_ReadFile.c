#include <stdio.h>
#include <stdlib.h>

/* Imprime datos contenidos de un archivo de texto */

int main() {
	FILE*flujo=fopen("datos.csv","r");
	if(flujo==NULL){
		perror("Error en la apertura del archivo");
		return 1;
	}	
	
	fseek(flujo, 0,SEEK_END); /*fseek: mueve datos_cuantas posiciones_indica donde inicia*/
	int num_elementos=ftell(flujo); /*ftell: indica donde se encuentra el flujo de datos */
	rewind(flujo); /*Los mando al inicio*/
	
	/*calloc: Crear arreglo dinamico,tamaño de cada elemento_# elementos*/
	char*cadena=(char*) calloc(sizeof(char),num_elementos); 
	if(cadena==NULL){
		perror("Error en reserva de memoria");
		return 2;
	}
	
	/*fread:recibe arreglo_tamaño de cada elemento_cuantos elemetos se leen_donde extrae los elementos*/
	int num_elementos_leidos=fread(cadena,sizeof(char),num_elementos,flujo);
	if(num_elementos_leidos!=num_elementos){
		perror("Error leyendo el archivo");
		return 3;
	}	
	
//e	
	c=fgetc(archivo);
		while (c!=EOF){
			swich(c){
				case',';
				
					tabla[ia][ja]=atof(line); /*atof:convierte a flotante*/
					
					
					
			}
		}
	
	printf("%c\n",cadena); 
	
	
	
	free(cadena); /*Libera memoria*/
	fclose(flujo);
	printf("\n\n Se ha leido el archivo correctamente");
	
	return 0;
}
