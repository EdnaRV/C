//Rosales Valdez Edna 
#include<stdio.h>
#include<stdlib.h>

class ncola
{
	public:
		int valor;
		ncola *siguiente;
};

typedef ncola *ap_ncola;

class Cola
{
	public:
		ncola *inicio, *final;
		Cola()
		{
			inicio=NULL;
			final=NULL;
		}
		void insertar(int valorext);
		void extraer(void);
		void mostrar(void);
		void menu(void);
		int cempty(void);
};



int main(void)
{
	Cola llamar;
	int valor_ext,opc;

	if(llamar.cempty()==true)
	{
		printf("Cola vacia\n");
		llamar.menu();
		scanf("%d",&opc);
		
		while(opc!=4)
		{
			switch(opc)
			{
				case 1:
					printf("\nIngresa el dato: ");
					scanf("%d",&valor_ext);
					llamar.insertar(valor_ext);
					llamar.menu();
					
					break;
					
				case 2:
					llamar.mostrar();
					llamar.menu();
					break;	
					
				case 3:
					llamar.extraer();
					llamar.menu();
					break;
									
				default:
					printf("\nEleccion invalida\n");
					llamar.menu();
					break;						
			}	
			printf("\n-----------------------------");
			scanf("%d",&opc);		
		}				
	}



return 0;
}
//------------------------------------------------------

void Cola::insertar(int valorext)
{
	ncola *nuevacola;
		nuevacola=new ncola();
		nuevacola->valor=valorext;
		nuevacola->siguiente=NULL;
		
}

int Cola::cempty()
{
	if(inicio==NULL)
		return true; //vacio
	else
	return false; //con datos
}

void Cola::mostrar()
{
	ncola *p=inicio;
	printf("El valor es :%d\n",p->valor);
}

void Cola::extraer(void)
{
	if(!cempty())
	{
		int posi=inicio->valor;
		ncola *eliminar=inicio;
		if(inicio==final)
		{
			inicio=NULL;
			final==NULL;
		}else
		{
			inicio=inicio->siguiente;
		}
		delete(eliminar);
		
	}
}
void Cola::menu(void)
{
	printf("Menu\n"
		   "1.Insertar\n");
	if(cempty()!=true) //vacia	
	{
		printf("2.Mostrar\n"
			   "3.Extraer\n");
	}	
	printf("4.Salir\n");
}




















