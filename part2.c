#include <stdio.h>

int main(void){
    char string[100];
    int alphabetCount, digitCount, spacesCount, otherCharsCount, i, ascii;
    i = 0;
    scanf("%s", string);
    while(string[i] != NULL){
        ascii = string[i];
        if((64<ascii && ascii<91) || (96<ascii && ascii<123)){
            alphabetCount++;

        }else if(47<ascii && ascii<58){
            digitCount++;

        }else if(ascii == 32){
            spacesCount++;

        }else{
            otherCharsCount++;

        }
        i++;
    }
    printf("%i %i %i %i", alphabetCount, digitCount, spacesCount, otherCharsCount);
}