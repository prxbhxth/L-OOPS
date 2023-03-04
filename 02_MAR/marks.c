#include<stdio.h>

int main(){
	int m;
	printf("Enter Marks : ");
	scanf("%d", &m);
	if (m < 0 || m > 100){
		do{
			printf("Wrong Input!\n");
			printf("Enter Marks : ");
			scanf("%d", &m);
			if (0 <= m && m <= 100){
				break;
			}else{
				continue;	
			}
		}while(m > 100 || m < 0);
		if (m > 49){
			printf("Pass\n");
		}else{
			printf("Fail\n");
		}
	}else{
		if (m > 49){
			printf("Pass\n");
		}else{
			printf("Fail\n");
		}
	}
}
