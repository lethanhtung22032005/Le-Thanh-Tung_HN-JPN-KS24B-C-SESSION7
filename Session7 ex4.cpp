#include <stdio.h>

int main() {
    int n;

   
    do {
        printf("Nhap so phan tu cua mang (phai lon hon 0): ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So phan tu phai lon hon 0. Vui long nhap lai!\n");
        }
    } while (n <= 0);  

    int mang[n]; 

   
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

   
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
