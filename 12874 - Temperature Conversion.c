#include <stdio.h>
#include<stdlib.h>

int main (){
    double celcius;
    double fahrenheit;
    scanf("%lf", &celcius);

    // fahrenheit = 9/5*celcius + 32 will give us error since 9/5 will be 1
    // There are three solutions:
    // 1. fahrenheit = celcius * (9/5) + 32;
    // 2. fahrenheit = (9.0/5) * celcius+32;
    // 3. fahrenheit = (double) 9/5 * celcius + 32

    fahrenheit=celcius*9/5+32;
    printf("%f\n", fahrenheit);
    return 0;
}