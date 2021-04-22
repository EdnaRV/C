#include<stdio.h>
#include<stdlib.h>

int main(){
    char s[] = {'m','o','r','a'};
    char t[] = {'a','m','o','r'};
    int sums = 0, sumt = 0;

    if((sizeof(s)) == (sizeof(t)))
    {
        for(int k=0; k<sizeof(s); k++)
        {
            //printf("%i\n",s[k]);
            //printf("%i\n",t[k]);
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
        printf("Cadenas de diferente longitud");
    }
    

return 0;    
}
