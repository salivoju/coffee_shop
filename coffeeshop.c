#include<stdio.h>
int main()
{
	int X,P,Final_count,R,Count;
	scanf("%d %d",&X,&P);
	Final_count = X;
	R = (X*P)/100;
	Count = X - R; 
	Final_count+= Count;
	X = Count;
	while(Count > 1)
	{
    		R = (X*P)/100;
    		Count = X - R;
    		Final_count += Count;
    		X = Count;
	}
	printf("%d",Final_count);
}
