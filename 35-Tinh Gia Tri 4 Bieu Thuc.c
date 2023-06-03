#include <stdio.h>
// int main() function
int main(){
	// Input
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	// Process and Print Output
	switch(c){
	case '+':
		printf("%d", a + b);
		break;
	case '-':
		printf("%d", a - b);
		break;
	case '*':
		printf("%d", a * b);
		break;
	case '/':
		printf("%d", a / b);		
	}	
	return 0;
}
