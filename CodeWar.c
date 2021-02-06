#include <stdio.h>
#include <string.h>


char* remove_char(char* dst, const char* src)
{
    /* your solution should return the string even if you use dst */
    int len = strlen(src); 
    printf("The character array length was %d \n\n", len);

    if(len > 0){ /*if there are characters in the character array*/
        strcpy(dst, ++src);
    }
    if(len > 1){/*if there is more then two letters int the array, does this count null has part of its character array?*/
        dst[len-2] = '\0'; /*set the last character in the array to null, which implies that the null does add to part of the array, otherwise dst[len-1] would of worked*/
    }
    return dst;
    
  
}

int main(){
    char mod[512];
    remove_char(mod, "hello");
    printf("%s", mod);
    printf("\n\n");
    printf("the task finshed successfully\n");
    return 1;
}