#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("Nhap v�o 5 so nguy�n:\n");
int i;
    for (i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

        
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    printf("Tong c�c so le l�: %d\n", sum);

    return 0;
}
