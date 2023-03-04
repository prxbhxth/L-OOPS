#include<stdio.h>

int main(){
	int m, p, c, g;
	
	printf("First Graduate : ");
	scanf("%d", &g);
	
	printf("Marks in Math : ");
	scanf("%d", &m);
	
	printf("Marks in Physics : ");
	scanf("%d", &p);
	
	printf("Marks in Chemistry : ");
	scanf("%d", &c);
	
	int average = (m + p + c) / 3;
	
	if(m < 0 || p < 0 || c < 0){
		printf("Wrong Input\n");
	}else{
		if (g == 1){
			if (average > 98){
				printf("Student Qualified\n");
			}else{
				printf("Student Not Qualified\n");
			}
		}else{
			printf("Student Not Qualified\n");
		}
	}
}
