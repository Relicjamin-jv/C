#include <stdio.h>

int main(){
    int max;
    printf("\nPlease enter a max value: ");
    scanf("%d", &max);
    for(int i = 0; i <= max; i++){
        if((i % 2 == 0) || (i % 3 == 0)){
            printf("\n%d", i);
        }
    }
}