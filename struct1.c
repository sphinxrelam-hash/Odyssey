#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

// Function to read a complex number from the user
struct Complex readComplex() {
    struct Complex c;
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

// Function to print a complex number
void writeComplex(struct Complex c) {
    printf("%.2f + i%.2f\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff;
    
    printf("Enter real and imaginary parts of first complex number: ");
    c1 = readComplex();
    
    printf("Enter real and imaginary parts of second complex number: ");
    c2 = readComplex();
    
    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);
    
    printf("First Complex Number: ");
    writeComplex(c1);
    
    printf("Second Complex Number: ");
    writeComplex(c2);
    
    printf("Sum: ");
    writeComplex(sum);
    
    printf("Difference: ");
    writeComplex(diff);
    
    return 0;
}