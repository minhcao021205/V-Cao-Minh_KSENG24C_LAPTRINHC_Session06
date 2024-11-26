#include <stdio.h>
#include <string.h> 

int main() {
    
    char password[20] = "matkhau123"; 
    char input[20];                  

    printf("Vui lòng nhap mat khau: ");
    scanf("%s", input); 

    
    if (strcmp(password, input) == 0) { 
        printf("Mat khau dúng!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}
