#include <stdio.h>
// int main() function
int main(){
	// Input
	int a;
	printf("Enter a: ");
	scanf("%d", &a);
	// Process and Print Output
	if((a >= 10) && (a <= 100))
		printf("%d is in range (10, 100)", a);
	else
		printf("%d is not in range (10, 100)", a);		
	return 0;
}
