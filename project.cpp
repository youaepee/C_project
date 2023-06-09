#include <stdio.h>
#include <math.h>

int main() {
    int option;
    double num, result;

    printf("Scientific Calculator\n");

    while (1) {
        printf("\nSelect an operation:\n");
        printf("1. Square Root\n");
        printf("2. Exponentiation\n");
        printf("3. Logarithm (base 10)\n");
        printf("4. Natural Logarithm (base e)\n");
        printf("5. Sine\n");
        printf("6. Cosine\n");
        printf("7. Tangent\n");
        printf("8. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        if (option == 8) {
            printf("Thank you for using the calculator. Goodbye!\n");
            break;
        }

        printf("Enter a number: ");
        scanf("%lf", &num);

        switch (option) {
            case 1:
                result = sqrt(num);
                printf("Square Root: %lf\n", result);
                break;
            case 2:
                result = pow(num, 2);
                printf("Exponentiation: %lf\n", result);
                break;
            case 3:
                result = log10(num);
                printf("Logarithm (base 10): %lf\n", result);
                break;
            case 4:
                result = log(num);
                printf("Natural Logarithm (base e): %lf\n", result);
                break;
            case 5:
                result = sin(num);
                printf("Sine: %lf\n", result);
                break;
            case 6:
                result = cos(num);
                printf("Cosine: %lf\n", result);
                break;
            case 7:
                result = tan(num);
                printf("Tangent: %lf\n", result);
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}
