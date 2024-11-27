#include <stdio.h>

int main() {
    int mang[5]; 

 
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

 
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }

    printf("\n");
    return 0;
}

