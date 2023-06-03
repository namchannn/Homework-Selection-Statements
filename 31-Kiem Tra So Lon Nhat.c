#include <stdio.h>
// int main() function
int main(){
	// Input
	int num1, num2, num3;
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);
	printf("Enter num3: ");
	scanf("%d", &num3);
	// Process and Print Output
	if((num1 > num2) && (num1 > num3))
		printf("%d is the largest num.", num1);
	else if((num2 > num1) && (num2 > num3))
		printf("%d is the largest num.", num2);
	else
		printf("%d is the largest num.", num3);		
	return 0;
}
