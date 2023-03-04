#include<stdio.h>

int main(){
	int t; float c;
	printf("Enter The transaction amount : ");
	scanf("%d", &t);
	if (t < 39){
		do{
			printf("The Minimum transaction amount is $39. Please enter amount greaater than $39\n");
			printf("Enter The transaction amount : ");
			scanf("%d", &t);
		}while(t < 39);
		if (t < 2500){
			c = 30 + (0.017 * t);
		}else if (2500 <= t && t <= 6250) {
			c = 56 + (0.0066 * t);
		}else if (6250 <= t && t <= 20000) {
			c = 76 + (0.0034 * t); 
		}else if (20000 <= t && t <= 50000) {
			c = 100 + (0.0022 * t);
		}else if (50000 <= t && t <= 500000) {
			c = 155 + (0.0011 * t);
		}else{
			c = 255 + (0.0009 * t);
		}printf("The Commission is : $%.2f\n", c);
	}else{
		if (t < 2500){
			c = 30 + (0.017 * t);
		}else if (2500 <= t && t <= 6250) {
			c = 56 + (0.0066 * t);
		}else if (6250 <= t && t <= 20000) {
			c = 76 + (0.0034 * t); 
		}else if (20000 <= t && t <= 50000) {
			c = 100 + (0.0022 * t);
		}else if (50000 <= t && t <= 500000) {
			c = 155 + (0.0011 * t);
		}else{
			c = 255 + (0.0009 * t);
		}printf("The Commission is : $%.2f\n", c);
	}
}
