#include <stdio.h>

void convertDecimal(int decimal_value) {
    printf("Decimal: %d\n", decimal_value);
    
    // Convert to binary
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        int bit = (decimal_value >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    
    // Convert to octal
    printf("Octal: %o\n", decimal_value);
    
    // Convert to hexadecimal
    printf("Hexadecimal: %X\n", decimal_value);
}

int main() {
    int decimal_value;
    
    // Input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_value);
    
    convertDecimal(decimal_value);
    
   return 0; 
}