#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

int main() {
    char dosyaAdi[100];
    FILE *dosya;
    char kelime[MAX_WORD_LENGTH];
    int kelimeSayisi = 0;

    printf("Metin dosyasinin adini girin: ");
    scanf("%s", dosyaAdi);

    dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) {
        printf("Dosya açilamadi.");
        return 1;
    }

    while (fscanf(dosya, "%s", kelime) == 1) {
        kelimeSayisi++;
    }

    fclose(dosya);

    printf("Dosyadaki toplam kelime sayisi: %d\n", kelimeSayisi);

    return 0;
}
