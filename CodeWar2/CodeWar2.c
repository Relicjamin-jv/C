/* Note:
    Allocate memory yourself!
*/

#include <stdlib.h>
#include <stdio.h>

char *dna_strand(const char *dna)
{
    char *DNAptr = (char*)malloc(1000 * sizeof(char)); /*Allocating n spaces in memory, including the \0 null termination*/
    for(int i = 0; i < 1000; i++){
        if(*(dna+i) == 'A'){
            *(DNAptr+i) = 'T';
        }
        if(*(dna+i) == 'T'){
            *(DNAptr+i) = 'A';
        }
        if(*(dna+i) == 'G'){
            *(DNAptr+i) = 'C';
        }
        if(*(dna+i) == 'C'){
            *(DNAptr+i) = 'G';
        }
        if(*(dna+i) == '\0'){
            *(DNAptr+i) = '\0';
        }
    }
    return DNAptr;
}

int main(){
    printf("%s",dna_strand("CATAGCTAGCTAGCTAGCTAATATAAAAGCTGCTCTAAATTTATATATATATATGCTCTCTTATGTCTATCTGTCTAAT"));

    printf("\nNORMAL TERMINATION\n");

    return 1;
}



/*
Much Cooler Solution
#include <string.h>

char *dna_strand(const char *dna)
{
    char *result = strdup(dna);
    for (char *cp = result; *cp; ++cp)
    {
        switch (*cp)
        {
        case 'A': *cp = 'T'; break;
        case 'C': *cp = 'G'; break;
        case 'G': *cp = 'C'; break;
        case 'T': *cp = 'A'; break;
        }
    }
    return result;
}
 

 siebenschlaefer, ciplasplas, Yaroslaw2216, Collins4130, Timofej Galkin Codewars.com


 in hindsight I didn't have to use malloc, I never freed it either but it works :), just hope that the OS can take care of it, but who knows prolly not. But I think im getting a hold of 
 pointers in c

*/
