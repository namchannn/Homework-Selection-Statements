#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, res;
	printf("Enter an integer number: ");
	scanf("%d", &n);
	res = n % 2;
	// Process and Print Output
	if(res == 0)
		printf("n is an even number.");
	else
		printf("n is an odd number.");	
	return 0;
}
