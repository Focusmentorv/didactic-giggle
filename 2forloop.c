/*for loop to print and  */
#include <stdio.h>
#include <stdlib.h>


int main() {
    int num, count, sum = 0;

    /*prompt to enter your number*/
    printf("Enter your natural positive digit:");
    scanf("%i", &num);

    for ( count = 1 ; count <= num; ++count)
    {
        /* code */
        sum += count;
        printf("%i\n", count);
    }
    printf("sum = %i\n", sum);
    return 0;

}