#include <stdio.h>

int main() {
    int numbers[5];
    int even_count = 0, odd_count = 0;

    printf("Nhap vào 5 so nguyên:\n");
int i;
    for (i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

        
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("So luong so chan: %d\n", even_count);
    printf("So luong so le: %d\n", odd_count);

    return 0;
}
