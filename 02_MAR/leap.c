#include<stdio.h>

int main(){
	int a;

	printf("Year : ");
	scanf("%d", &a);

	if (a % 4 == 0 && a % 100 != 0){
			printf("Leap\n");
	}else {
		printf("Not Leap\n");
	}
}
