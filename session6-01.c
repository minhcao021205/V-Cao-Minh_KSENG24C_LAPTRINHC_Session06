#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("Nhap vào 5 so nguyên:\n");
int i;
    for (i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

        
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    printf("Tong các so le là: %d\n", sum);

    return 0;
}
