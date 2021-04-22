#include<stdio.h>
int main(){

int a[] = {4,3,6,7};
int b[] = {8,9,7,2};
int c[5] = {0};
int temp;
int residuo = 0;

for(int i=3 ; i >= 0 ; i--)
{
	temp = a[i] + b[i];
	if (temp > 9)
	{
		residuo = temp / 10;
		c[i+1] = c[i + 1] + (temp % 10); 
		c[i] = residuo;
	}else 
	{
		c[i+1] = c[i + 1] + (temp % 10); 
	}

}
for(int j=0; j <=4; j++)
{
	printf("| %d",c[j]);
}

return 0;
}


