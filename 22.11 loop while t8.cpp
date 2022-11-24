#include<stdio.h>
main(){
	int i=1,sum=0,b;
	printf("ENTER Value=");
	scanf("%i",&b);
	while(i<=b)
	{
		sum=sum+i;
		i++;
    }
  printf("sum:-%i",sum);
}
