#include<stdio.h>

int main(){
	int a;
	scanf("%d",a);
	if(a<1){
		printf("shh");
	}else if(a>=1 && a<=10){
		for(i=0;i<a;i++){
			printf("Ra!");
		}
	}else{
		printf("High Five");
	}
}
