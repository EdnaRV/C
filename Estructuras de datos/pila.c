//Rosales Valdez Edna
//Programa Pila Dinámica
#include<stdio.h>
#include<stdlib.h>
	int eleccion;
	int valor;
	int cont=0;

/*Estructura autoreferenciada*/
struct nodoPila{
	int dato;
	struct nodoPila *ptrSiguiente; /*Apuntador a nodo pila*/
};

typedef struct nodoPila NodoPila; /*Sinonimo de la estructura nodoPila*/
typedef NodoPila *ptrNodoPila; /*Sinonimo para NodoPila*/

/*Prototipos*/
void empujar(ptrNodoPila *ptrCima, int info);
int sacar(ptrNodoPila *ptrCima);
int estaVacia(ptrNodoPila ptrCima);
void imprimePila(ptrNodoPila ptrActual);
void instruccionesv(void);
void instrucciones(void);

/*Begin*/
int main()
{
	ptrNodoPila ptrPila=NULL; /*Apunta al tope de la fila*/
	ptrNodoPila  ptrActual;
		
if(cont==0){


	instruccionesv(); /*Despliega menu*/	
	
	printf("\n-------------------------------------------");
	scanf("%d",&eleccion);
	
	while(eleccion!=3){
		
		switch(eleccion){
			/*Empuja el valor dentro de la pila*/
			case 1:
				printf("\nIntroduzca dato: ");
				scanf("%d",&valor);
				empujar(&ptrPila,valor);
//				imprimePila(ptrPila);
				instrucciones(); 
				cont++;
				break;
				
			/*Saca el valor de la pila*/
			case 2:
				 
				 /*Si la pila no esta vacia*/

				 	printf("\nEl valor sacado es %d",sacar(&ptrPila));
				 
				 
	//			 imprimePila(ptrPila);
				 instrucciones();
				 cont--;
				 break;
			default:
				printf("\nEleccion no valida");
				instrucciones();
				break;
		}
		printf("\n-----------------------------");
		scanf("%d",&eleccion);
		
	}
}else{
	
	instrucciones(); 

	printf("\n-------------------------------------------");
	scanf("%d",&eleccion);
	
	while(eleccion!=3){
		
		switch(eleccion){
			/*Empuja el valor dentro de la pila*/
			case 1:
				printf("\nIntroduzca dato: ");
				scanf("%d",&valor);
				empujar(&ptrPila,valor);
	//			imprimePila(ptrPila);
				instrucciones(); 
				cont++;
				break;
				
			/*Saca el valor de la pila*/
			case 2:
				 
				 /*Si la pila no esta vacia*/

				 	printf("\nEl valor sacado es %d",sacar(&ptrPila));
				 
				 
	//			 imprimePila(ptrPila);
				 instrucciones();
				 cont--;
				 break;
			default:
				printf("\nEleccion no valida");
				instrucciones();
				break;
		}
		printf("\n-----------------------------");
		scanf("%d",&eleccion);
	
	


}

}
	return 0;
	
} /*End main*/

//Funciones

void instruccionesv(void)
{
	printf("\nIntroduzca su eleccion:\n"
			"1.Insertar valor dentro de la pila\n"
			"2.Terminar el programa\n");
}

void instrucciones(void)
{
	printf("\nIntroduzca su eleccion:\n"
			"1.Insertar valor dentro de la pila\n"
			"2.Mostrar valor de dentro de la pila\n"
			"3.Terminar el programa\n");
			
}

/*Inserta nodo encima de la pila*/
void empujar(ptrNodoPila *ptrCima, int info){
	ptrNodoPila ptrNuevo; /*Apuntador al nuevo nodo*/
	
	ptrNuevo=calloc(1000,sizeof(NodoPila));
	
	if(ptrNuevo!=NULL){
		ptrNuevo->dato=info;
		ptrNuevo->ptrSiguiente=*ptrCima;
		*ptrCima=ptrNuevo;	
	}
	
	else{
		printf("\n %d no se insertó. Memoria insuficiente",info);
	}
}

/*Elimina un nodo de la cima de la pila*/
int sacar(ptrNodoPila *ptrCima)
{
	ptrNodoPila ptrTemp; /*Apuntador a un nodo temporal*/
	int valorElim; /*valor del nodo*/
	
	ptrTemp=*ptrCima;
	valorElim=(*ptrCima)->dato;
	*ptrCima=(*ptrCima)->ptrSiguiente;
	free(ptrTemp);
	
	return valorElim;
}

/*Imprime la pila*/
void imprimePila(ptrNodoPila ptrActual)
{
	/*Si la pila esta vacia*/
	if(ptrActual==NULL){
		printf("\n La pila esta vacia");	
	}
	else{
		printf("\n La pila es:");
	}
	/*Mientras no sea el final de la pila*/
	while(ptrActual!=NULL){
		printf("\n %d -> ",ptrActual->dato);
		ptrActual=ptrActual->ptrSiguiente;
	}
	printf("NULL\n");
}

/*Devuelve 1 si la pila esta vacia, delo contrario 0*/
int estaVacia(ptrNodoPila ptrCima)
{
	return ptrCima==NULL;
	
}






















