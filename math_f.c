#include<stdio.h>
#include<math.h>

int main(){
    int num = 9;

    // Square root
    float squareRoot = sqrt(num);

    printf("The square root of %d is %f\n", num, squareRoot);

    // Round Up
    printf("%f\n", ceil(1.4));
    // Round Down
    printf("%f\n", floor(1.4));
    // Power
    printf("%f\n", pow(2, 4));
    // Cube Root
    printf("%f\n", cbrt(89));
    // Tan
    printf("%f\n", tan(90));

    return 0;
}