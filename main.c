#include <stdio.h>
#include <math.h>

int main() {
    float a = 0, b = 0, c = 0, delta, x1, x2;
    printf("Informe o coeficiente de X^2: ");
    scanf("%f", &a);

    printf("Informe o coeficiente de X: ");
    scanf("%f", &b);

    printf("Informe o termo independente : ");
    scanf("%f", &c);

    delta = (b*b)-4*a*c; // usando o math.h -> delta = powf(b,2) -4*a*c

    if (delta < 0) {
        printf("Delta negativo, logo terá uma raiz complexa.");
        return 1;
    }

    x1 = (-b + sqrtf(delta))/2*a;

    x2 = (-b - sqrtf(delta))/2*a;

    printf("X1 = %f , X2 = %f\n",x1,x2);

    return 0;
}
