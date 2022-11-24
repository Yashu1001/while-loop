#include<stdio.h>
main(){
	int a,b=1,c;
	printf("ENTER DIGIT=");
	scanf("%i",&a);
	while(b<=10){
		c=a*b;
		
		printf("%i*%i=%i\n",a,b,c);
		b=b+1;			
	}	
}
