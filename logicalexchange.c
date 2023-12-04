/* source code for logicalexchange
 *
 * DESCRIPTION:
 * Can the bitwise exclusive OR be used to exchange the values of two variables
 * without the use of a temporary variable?
 *
 * INPUT:
 * prompt for two integers
 *
 * PROCESSING:
 * exchange the vars without a temp var by var1 ^= var2.
 *
 * OUTPUT:
 * print the vars out to the screen.
 *
 *
 * NOTES:
 * 12/04/2023 - set up project on local host and github.
 * Work on input.
 *
 *
*/


/* includes */

#include <stdio.h>






/* defines */





/* data structure defines */





/* function declarations */






int main(int argc, char *argv[]) {

    int var1, var2;


    var1 = 0;
    var2 = 0;

    printf("Enter two integers, int1 int2: ");
    scanf("%i %i", &var1, &var2);
    printf("\n");

    var1 ^= var2;
    var2 ^= var1;
    var1 ^= var2;

    printf("%i %i\n", var1, var2);

    return(0);
}


/* function definitions */
















