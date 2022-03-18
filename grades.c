#include<stdio.h>
main()
{
	int a;
	printf("enter your marks");
	scanf("%d",&a);
	if(a>=80)
	printf("grade A");
	else if(a>=70)
	printf("grade B");
	else if(a>=60)
	printf("grade C");
	else if(a>=40)
	printf("grade D");
	else if(a<40)
	printf("fail");
	return 0;
}
