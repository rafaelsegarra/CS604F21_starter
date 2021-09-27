#include <stdio.h>
int main()
{	//TODO: replace ??? to declare the right type for c and f
	double c, f;
	printf("Input Temp in Fahrenheit: ");
	scanf("%lf", &f);
	//TODO: convert fahrenheit to celsius. the formula is
	//TODO: c = (f - 32) * 5/9;
	//TODO: replace ??? to print out the celsius with two digits to the right of decimal point
	c = (f-32) * (5.0f/9.0f);
	printf("\nTemp in Celsius is: %.5lf\n", c);
	return 0;
}
