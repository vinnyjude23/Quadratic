
#include <stdio.h>
#include<math.h>
int main() {
    float a, b, c, discriminant, r1, r2, realPart, imagPart;
    printf("your coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("r1 = %.2lf and r2 = %.2lf", r1, r2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        r1 = r2 = -b / (2 * a);
        printf("r1 = r2 = %.2lf;", r1);
    }


    else
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.f+%.fand r2 = %.f-%.f", realPart, imagPart, realPart, imagPart);


    return 0;
}
