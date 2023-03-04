#include<stdio.h>

int main(){
	int n = 3;

	while(n > 0){
		for(int i = 0; i <= 5; i++){
			printf("*");
		}printf("\n");
		n--;
	}
}
