#include<stdio.h>

int main(){
	int c = 0, m, h;
	printf("Enter the number of hours : ");
	scanf("%d", &h);

	printf("Enter the number of hours : ");
	scanf("%d", &m);
	
	while (m > 60){
		h += 1;
		m -= 60;
	}

	if (h > 7){
		printf("Invalid Input\n");
	}else{
		if (h > 5){
			c += 200;
			h -= 5;
		}c += (50 * h) + m;

		printf("The cost is %d\n", c);
	}
}
