#include <stdio.h>
// int main() function
int main(){
	// Input
	int a;
	printf("Enter the number of year: ");
	scanf("%d", &a);
	// Process and Print Output
	if(a % 4 ==0)
		printf("%d is a leap year.", a);
	else
		// a%4!=0
		printf("%d is not a leap year.", a);		
	return 0;
}
