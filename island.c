#include<stdio.h>

int const rows = 3;
int const columns = 3;
int sumt = 0, actualSquArea = 0, area = 0;
int sum[rows][columns] = {

};
int island [][columns] = {
    {0,1,0,1},
    {1,0,1,0},
    {1,1,1,1},
    {0,0,0,0}
};
/*
void areaT(int actualSquArea){
    if(actualSquArea == 4){
        area += 0;
    }else if(actualSquArea <= 3){
        area += actualSquArea;
    }

}
*/
//Bandera
int main(){

for(int m = 0; m < rows; m++){
    for(int n = 0; n < columns; n++){
        sum[m][n] = 0;
    }
}


for(int i = 0; i <= rows; i++){
    for(int j = 0;j <= columns; j++ ){
        printf("%d",island[i][j]);
        if(j == 0 && i == 0){ //j = column,  i = row
            actualSquArea += 2;
            if(island[i][j+1] == 0){
                actualSquArea += 1;
                if(island[i+1][j] ==0){
                    actualSquArea += 1;
                }
            }
        //areaT(actualSquArea);
        printf("El perimetro total actual: %d: \n", area);
        }else if(j == 0 && i == rows){

        }
    }
printf("\n");
}
/*
for(int i = 0; i <= rows; i++){
    for(int j = 0;j <= columns; j++ ){
        printf("%d",island[i][j]);
        if((island[i][j])island[i][j] == 1 ){ // 1
            if(i == 0 || j == 0){
                sum[i][j] += 1;
                if(island[i][j+1] == 1){ //sig column
                    sum[i][j] -= 1;
                    if(island[i+1][j] == 0){
                       sum[i][j] -= 1;
                    }else if(island[i+1][j] == 1){
                        sum[i][j] -= 4;
                    }
                    
                }
            }
            
        }
    }
printf("\n");
}
for(int k = 0; k < rows; k++){
    for(int l = 0; l < columns; l++){
        sumt = sumt + sum[k][l];
    }
}
*/
printf("El perimetro totales: %d: \n", area);


return 0;    
}