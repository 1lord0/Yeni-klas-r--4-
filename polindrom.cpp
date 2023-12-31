#include <stdio.h>
#include <string.h>

int IsPolindrom(char word[]) {
    int i, j;
    int length = strlen(word);
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 0;  // Polindrom değil
        }
    }
    
    return 1;  // Polindrom
}

int main() {
    char word[100];
    
    printf("Kelimeyi girin: ");
    scanf("%s", word);
    
    if (IsPolindrom(word)) {
        printf("%s bir polindromdur.\n", word);
    } else {
        printf("%s bir polindrom değildir.\n", word);
    }
    
    return 0;
}
