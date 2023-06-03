#include <stdio.h>
// int main() function
int main(){
	// Input
	int a;
	printf("Enter the score: ");
	scanf("%d", &a);
	// Process and Print Output
	if((a <= 0) || (a >= 10))
		printf("The score is not valid");
	else
		printf("The score is valid");		
	return 0;
}
