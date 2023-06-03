#include <stdio.h>
// int main() function
int main(){
	// Input
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	// Process and Print Ouput
	if((a != 0) && (b != 0))
		printf("a is not equal to 0 and b is not equal to 0");
	else
		printf("a is equal to 0 or b is equal to 0");		
	return 0;
}
