#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool IsPolindrom(char kelime[])
{
    int uzunluk, i; 
    uzunluk = strlen(kelime);

    for (i = 0; i < uzunluk / 2; i++) 
    {
        if (kelime[i] != kelime[uzunluk - 1 - i]) 
        {
            return false; 
        }
    }

    return true; 
}

int main()
{
    char kelime[100]; 

    printf("Bir kelime girin: ");
    scanf("%s", kelime); 

    if (IsPolindrom(kelime)) 
    {
        printf("Girdiginiz kelime polindromdur.\n"); 
    }
    else 
    {
        printf("Girdiginiz kelime polindrom degildir.\n"); 
    }
  return 0;
}

