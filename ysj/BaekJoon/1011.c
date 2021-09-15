#include<stdio.h>

int main(void)
{
	float a,b;
	float result;
	int N;
	float ans, square;

	scanf("%d", &N);
	while(N--)
	{
		scanf("%f %f",&a,&b);
		result = b-a;
		ans = 1;
		square=2;
		while(result>square)
		{
			ans++;
			square=ans*ans+ans;
		}
		if(result >((square+((ans-1)*(ans-1)+(ans-1)))/2) )
			ans=ans*2;
		else
			ans=ans*2-1;
		printf("%d\n",(int)ans);	                                 	
	}


	return 0;
}
