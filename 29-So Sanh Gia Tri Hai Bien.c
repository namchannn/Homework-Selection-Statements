#include <stdio.h>
// int main() function
int main(){
	// Input
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	// Process and Print Output
	if(a >= b)
		printf("a is greater than or equal to b");
	else
		printf("a is smaller than b");	
	return 0;
}
