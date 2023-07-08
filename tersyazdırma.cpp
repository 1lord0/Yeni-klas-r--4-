#include <stdio.h>
#include <string.h>

int main()
{
    char metin[100]; 
    int uzunluk, i; 

    printf("Bir metin girin: "); 
    scanf("%s", metin); 

    uzunluk = strlen(metin);

    printf("Metnin tersi: "); 

    for (i = uzunluk - 1; i >= 0; i--) 
    {
        printf("%c", metin[i]);
    }

    printf("\n"); 

    return 0; 
}

