void decToBinary(int n) {
    int binaryNum[32]; // array to store binary number
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2; // store remainder (0 or 1)
        n = n / 2; // divide by 2
        i++;
    }
    // print binary array in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main() {
    int n;
    
    // Input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
       // Convert to octal
    printf("Octal: %o\n", n);
    
    // Convert to hexadecimal
    printf("Hexadecimal: %X\n", n);
    
   // Conversion to binary
   	printf("Binary: \n");
   	decToBinary(n);
   	
   	
}
