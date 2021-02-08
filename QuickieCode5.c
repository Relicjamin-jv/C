#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void readTest();

typedef struct string{
    char *text;
}string;

int main(){
    FILE *ptr_file;
    string *sT = malloc(sizeof(struct string));
    ptr_file = fopen("Test.txt", "r");

    if(!ptr_file){
        return 1;
    }



    /*readTest(ptr_file);*/

    fclose(ptr_file);
    return 0;
}

/*void readTest(FILE *f){
    char buff[1024];

    while(fscanf(f, " %1023s", buff) == 1){
        puts(buff);
    }
    printf("%s", buff);
}*/