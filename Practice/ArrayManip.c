#include <stdio.h>
#include <stdlib.h>

int methodOne(){
    const int R = 2;
    const int C = 4;

    int *myArray = (int*)malloc(R * C * sizeof(int));
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            *(myArray + i * C + j) = 2*i+3*j;
        }
    }
    
    printf("The Array For method one is: ");

    for(int i = 0; i < R; i++){
         printf("\n");
        for(int j = 0; j < C; j++){
            printf("%d ", *(myArray + i * C + j));
        }
    }
    free(myArray);
}

int methodTwo(){
    const int R = 4;
    const int C = 2;
    int *myArray[R];

    for(int i = 0; i < R; i++){
        myArray[i] = (int*)malloc(C * sizeof(int));
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
           myArray[i][j] = 5*i+j;
        }
    }
    
    printf("\nThe Array For method two is: ");

    for(int i = 0; i < R; i++){
         printf("\n");
        for(int j = 0; j < C; j++){
            printf("%d ", myArray[i][j]);
        }
    }
    for(int i = 0; i < R; i++){
       free(myArray[i]);
    }
}

int methodThree(){
    const int R = 5;
    const int C = 4;
    int **myArray = (int **)malloc(R * sizeof(int *));
    
    for(int i=0; i < R; i++){
        myArray[i]=(int *)malloc(C * sizeof(int));
    }

     for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
           myArray[i][j] = 3*i+2*j;
        }
    }
    

    printf("\nThe Array For method three is: ");

    for(int i = 0; i < R; i++){
         printf("\n");
        for(int j = 0; j < C; j++){
            printf("%d ", myArray[i][j]);
        }
    }
    for(int i = 0; i < R; i++){
       free(myArray[i]);
    }
    free(myArray);
}




int main(){
    methodOne();
    methodTwo();
    methodThree();
}