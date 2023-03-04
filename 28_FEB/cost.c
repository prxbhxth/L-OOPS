#include<stdio.h>

int main(){
	int CC, NC, C, CF, NT, T, NCH, CH, LC, NH, WH;

	printf("Cost of One Computer : ");
	scanf("%d", &C);

	printf("Number of Computers : ");
	scanf("%d", &NC);

	printf("Cost of one table : ");
	scanf("%d", &T);
	
	printf("Number of tables : ");
	scanf("%d", &NT);
	
	printf("Cost of one chair : ");
	scanf("%d", &CH);
	
	printf("Number of chairs : ");
	scanf("%d", &NCH);
	
	printf("Wages per hour : ");
	scanf("%d", &WH);
	
	printf("Number of hours worked : ");
	scanf("%d", &NH);

	CC = NC * C;
	CF = (T * NT) + (CH * NCH);
	LC = WH * NH;

	printf("The total cost of Set-up is : %d\n", CC + CF + LC);
}
