#include<stdio.h>
int main(){
	int n, result = 0;

	printf("Enter N : ");
	scanf("%d", &n);

	while(n > 0){
		result += n--;
	}printf("The Sum is %d\n", result);
}
