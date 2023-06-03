#include <stdio.h>
// int main() function
int main(){
	// Input
	int a, b, c;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	// Process and Print Output
	if((a <= b) && (b <= c))
		printf("increasing");
	else if((a >= b) && (b >= c))
		printf("decreasing");
	else
		printf("neither increasing nor decreasing order");		
	return 0;
}
