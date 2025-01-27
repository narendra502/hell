#include<stdio.h>
int square(int n)
{
	int res=n*n;
	return res;
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int sq=square(n);
	printf("square is :%d",sq);
}
