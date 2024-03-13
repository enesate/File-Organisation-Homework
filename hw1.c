#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
    char metin[MAX_LENGTH];
    FILE *dosya;

   
    printf("Metni girin (en fazla %d karakter): \n", MAX_LENGTH);
    fgets(metin, MAX_LENGTH, stdin);

    dosya = fopen("text.txt", "w");
    if (dosya == NULL) {
        printf("Dosya oluşturulamadı.");
        return 1;
    }
    fprintf(dosya, "%s", metin);
    fclose(dosya);

    dosya = fopen("text.txt", "r");
    if (dosya == NULL) {
        printf("Dosya açılamadı.");
        return 1;
    }
    printf("\nDosyadan okunan metin:\n");
    while (fgets(metin, MAX_LENGTH, dosya) != NULL) {
        printf("%s", metin);
    }
    fclose(dosya);

    return 0;
}
