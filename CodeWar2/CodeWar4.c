#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

size_t count_sheep(const bool *sheep, size_t count){
    int counter = 0;
    for(int i = 0; i <= count; i++){
        if(sheep[i] == true){
            counter++;
        }
    }
    return counter;
}

int main(){
    const bool sheep[] = {
        true, false, true, true
    };
    printf("%ld", count_sheep(sheep, 4));

}