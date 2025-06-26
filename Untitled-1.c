#include <stdio.h>

int main() {
    double a1, b1, c1, a2, b2, c2, x, y;

    printf("Enter coefficients of first equation a1, b1, c1: ");
    scanf("%lf %lf %lf", &a1, &b1, &c1);

    printf("Enter coefficients of second equation a2, b2, c2: ");
    scanf("%lf %lf %lf", &a2, &b2, &c2);

    // Check if the system has no solution
    if (a1 / b1 == a2 / b2 && c1 / b1 != c2 / b2) {
        printf("No solution exists.\n");
        return 1;
    }

    // Eliminate y and solve for x
    if (b1 != 0 && b2 != 0) {
        if (b1 == b2) {
            printf("Equations are dependent (infinite solutions).\n");
            return 1;
        }
        double factor = b2 / b1;
        a2 -= a1 * factor;
        c2 -= c1 * factor;
        x = c2 / a2;
        y = (c1 - a1 * x) / b1;
    } else {
        // Special cases: handle equations with y or x missing in one
        // Implement specific logic depending on the cases
        printf("Special case! Handle equations with missing variables.\n");
    }

    printf("Solution: x = %.2lf, y = %.2lf\n", x, y);

    return 0;
}
