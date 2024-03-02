#include <stdio.h>

void additionner(double a, double b) {
    printf("Le r\x82sultat de l'addition est : %g\n", a + b);
}

void soustraire(double a, double b) {
    printf("Le r\x82sultat de la soustraction est : %g\n", a - b);
}

void multiplier(double a, double b) {
    printf("Le r\x82sultat de la multiplication est : %g\n", a * b);
}

void diviser(double a, double b) {
    if (b != 0) {
        printf("Le r\x82sultat de la division est : %g\n", a / b);
    } else {
        printf("Division par z\x82ro impossible.\n");
    }
}

int main() {
    double a, b;
    char operateur;


    printf("Entrez le premier nombre : ");
    scanf("%lf", &a);


    printf("Entrez l'op\x82rateur (+, -, *, /) : ");


    scanf(" %c", &operateur);
    printf("Entrez le deuxième nombre : ");
    scanf("%lf", &b);


    switch (operateur) {
        case '+':
            additionner(a, b);
            break;

        case '-':
            soustraire(a, b);
            break;

        case '*':
            multiplier(a, b);
            break;

        case '/':
            diviser(a, b);
            break;

        default:
            printf("Op\x82rateur invalide.\n");
            return 1;
    }

    return 0;
}
