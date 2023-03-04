#include<stdio.h>

int main(){
	int x, y, c, gcd;

	printf("X : ");
	scanf("%d", &x);

	printf("Y : ");
	scanf("%d", &y);
	
	if (x > y) {
		c = x;
	}else{
		c = y;
	}

	for (int i = 1; i <= c; i++){
		if (x % i == 0 && y % i == 0){
			gcd = i; 
		}else {
			continue;
		}
	}

	printf("The GCD is : %d\n", gcd);
}
