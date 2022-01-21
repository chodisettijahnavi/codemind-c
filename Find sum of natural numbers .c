#include<stdio.h>
main()
{
	int i=1,n,Sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		Sum += i;
		i++;
	}
	printf("%d",Sum);
}