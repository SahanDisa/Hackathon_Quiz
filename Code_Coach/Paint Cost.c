#include<stdio.h>

int main(){
	int color;
	scanf("%d",&color);
	
	int cost = color*5 + 40;
	int final_cost= cost*1.1;
	if(color%2==0){
		printf("%d",final_cost);
	}else{
		printf("%d",final_cost+1);
	}
	
	
	return 0;
}
