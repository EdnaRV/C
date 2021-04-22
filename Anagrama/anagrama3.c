#include<stdio.h>
#include<stdlib.h>

void sum()
{
    
}

int main(){
    char s[] = {'m','o','r','a'};
    char t[] = {'a','m','o','w'};
    char us[] = {'/0'};
    char ut[] = {'/0'};
    int sums = 0, sumt = 0;
    int opc = 0;

    printf("Desea comparar cadena de prueba o ingrese par de cadenas. 1 -prueba , o 0 -ingresar cadenas\n");
    scanf("d",&opc);

    if((sizeof(s)) == (sizeof(t)) && opc == 1)
    {
        for(int k=0; k<sizeof(s); k++)
        {
            printf("%i\n",s[k]);
            printf("%i\n",t[k]);
            sums = sums + s[k];
            sumt = sumt + t[k];            
        }

            if(sums == sumt)
            {
                printf("S y T son anagrama\n");
            }
            else
            {
                printf("Noup son anagrama %d != %d",sums,sumt );
            }
        

    }else
    {
        printf("Ingresa la palabra 1  y 2 con un enter");
        scanf("%d %d", &us, &ut);

    }
    

return 0;    
}

