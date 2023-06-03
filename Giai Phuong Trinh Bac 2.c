#include <stdio.h>
#include <math.h>
// int main() function
int main(){
	// Input
	float a, b, c, delta;
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
	printf("Enter c: ");
	scanf("%f", &c);
	// Process and Print Output
	if(a == 0){ // The equation of degree 1
		printf("The equation has only solution x = %0.2f", (-c/b));
	}else{ // The quadratic equation 2
		// a != 0
		delta = b*b-4*a*c;		
		if(delta > 0){
			printf("The equation has two solution x1 = %0.2f, x2 = %0.2f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
		}else if(delta == 0){
			printf("The equation has double solution x1 = x2 = %0.2f", (-b/(2*a)));
		}else{
			printf("The equation has no solution.");
		}
	}	
	return 0;
}
