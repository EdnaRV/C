#include<stdio.h>
#include<stdlib.h>
int main(){

char s[] = {'m','o','r','a'};
char ns[] = {'\0'};
for(int i=0; i<sizeof(s); i++)
{
    printf("%i\n",s[i]);
    ns[i] = s[i];
}
for(int j=0; j<sizeof(s); j++)
{
    printf("%d\n",ns[j]);
}

return 0;    
}