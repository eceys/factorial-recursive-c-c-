#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

double factorial(int a){
	
	int value;	
	if(a<=1){
		value=1;
	}else{
	value=a*factorial(a-1);
	}
	return value;
}

int main (){
	
	while(1==1){
		system("CLS");
		int a;
		printf("If you want quit enter \"0\"\nEnter last number:");
		scanf("%d",&a);
		if(a == 0){
			break;
		}else{	
			printf("Result : %.0f\nPress any key to continue...\n",factorial(a));
			getch();
		}
		
	}
	return 0;
}
