#include<stdio.h>

int main(){
	float c;
	printf("CGPA : ");
	scanf("%f", &c);

	if (9 <= c && c <= 10) {
		printf("Outstanding\n");
	}else if (8 <= c && c <= 9) {
		printf("Excelllent\n");
	}else if (7 <= c && c <= 8) {
		printf("Good\n");
	}else if (6 <= c && c <= 7) {
		printf("Average\n");
	}else if (5 <= c && c <= 6) {
		printf("Better\n");
	}else {
		printf("Poor\n");
	}
}
