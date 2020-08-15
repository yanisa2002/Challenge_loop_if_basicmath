#include<stdio.h>
#include<math.h>

float SD(int, int);

int main() {
    int a, b, i, square, count = 0;
    float sum = 0, sumSquare = 0;
    scanf_s("%d%d", &a, &b);
    if (b > a) {
        for (i = a; i <= b; i++) {
            printf("%d ", i);
            sum += i;
            square = i * i;
            sumSquare += square;
            count++;
        }
        printf("\nAverage = %.1f", sum / count);
        printf("\nS.D. = %.2f", SD(a, b));
    }
    else {
        for (i = a; i >= b; i--) {
            printf("%d ", i);
            sum += i;
            square = i * i;
            sumSquare += square;
            count++;
        }
        printf("\nAverage = %.1f", sum / count);
        printf("\nS.D. = %.2f", SD(a, b));
    }
    return 0;
}
float SD(int a, int b) {
    if (a == b)return 0;
    int i, sumsquare = 0, sum = 0, n = 0, min = 0, max = 0, square = 0;
    min = a > b ? b : a;
    max = a > b ? a : b;
    i = min;
    while (i <= max) {
        sum += i;
        square = i * i;
        sumsquare += square;
        i++;
        n++;
    }
    float x = (n * sumsquare) - sum * sum;
    float y = n * (n - 1);
    return sqrt(x / y);
}