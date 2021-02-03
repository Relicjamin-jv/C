#include <stdio.h>

int divide(int max); //function delcaration

int main(){
    int max;
    printf("\nPlease enter a max value: ");
    scanf("%d", &max);
    
    divide(max);

    printf("Finshed Successfully\n");
    return 0;
}


int divide(int max){
    for(int i = 0; i <= max; i++){
        if((i % 2 == 0) && (i % 3 == 0)){
            printf("\n%d", i);
        }
    }
    printf("\nFinished Divide\n");
    return 0;
}