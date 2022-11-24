#include<stdio.h>
main(){
	int a=1,b=1,c;
	printf("ENTER factoral of Num.");
	scanf("%i",&c);
	while(a<=c)
	{
    	b=b*a;
		a++;	
	}
	printf("factoral of is =%i",b,c);
}
