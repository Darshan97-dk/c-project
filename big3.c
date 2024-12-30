#include <stdio.h> 
void biggest3() {
    int a, b, c ;
	printf("\n\nEnter the numbers a, b, c: ");
scanf ("%d %d %d", &a, &b, &c);
    // Finding largest using compound expressions
    if (a >= b && a >= c)
        printf("%d is the lagest number.", a );
    else if (b >= a && b >= c)
        printf("%d is the lagest number.", b );
    else
         printf("%d is the lagest number.\n", c );

    // return 0;
}
