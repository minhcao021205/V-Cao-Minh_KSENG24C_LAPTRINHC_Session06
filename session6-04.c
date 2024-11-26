#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c; 
    double delta, x1, x2; 

    
    printf("Nh?p h? s? a: ");
    scanf("%lf", &a);
    printf("Nh?p h? s? b: ");
    scanf("%lf", &b);
    printf("Nh?p h? s? c: ");
    scanf("%lf", &c);

    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trình có vô s? nghi?m.\n");
            } else {
                printf("Phuong trình vô nghi?m.\n");
            }
        } else {
            
            x1 = -c / b;
            printf("Phuong trình có m?t nghi?m: x = %.2lf\n", x1);
        }
    } else {
        
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trình vô nghi?m (delta < 0).\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trình có nghi?m kép: x1 = x2 = %.2lf\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trình có hai nghi?m phân bi?t:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }

    return 0;
}
