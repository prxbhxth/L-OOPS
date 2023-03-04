#include<stdio.h>

int main(){
	int a;
	printf("Enter the Number : ");
	scanf("%d", &a);

	if (a % 2 == 0){
		printf("Even\n");
	}else{
		printf("Odd\n");
	}
}
