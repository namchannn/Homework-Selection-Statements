#include <stdio.h>
// int main() function
int main(){
	// Input
	int n;
	printf("Enter an integer number: ");
	scanf("%d", &n);
	// Process and Print Output
	if(n > 0)
		printf("n is a positive number.");
	else if(n < 0)
		printf("n is a negative number.");
	else
		printf("n is equal to 0.");	
	return 0;
}
