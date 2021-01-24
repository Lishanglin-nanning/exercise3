#include<stdio.h>
int main(void)
{
	int cows, legs;
	printf("How many legs did you want the cow have:");
	scanf_s("%d", &legs);
	cows = legs / 4;
	printf("That implies there are %d cows.\n", cows);

	return 0;

}
