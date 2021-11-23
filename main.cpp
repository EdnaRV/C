#include <iostream>
#include<time.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    srand(time(NULL));
    nr = rand()%100+1;
    int array[100] = {'/0'};
    for(int i=1; i<=100; i++){
        for(int j=1; j <=sizeof(array); j++)
            if(nr != array[i])
                array[i] = nr;
    }

    for(int x=0; i <= sizeof(array);i++){
        printf("Día %d: %d , \n",i,array[i]);
    }

    return 0;
}
