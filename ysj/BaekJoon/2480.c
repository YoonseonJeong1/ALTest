#include<stdio.h>

int main(void)
{
	int a,b,c;
	int ans=0;

	scanf("%d %d %d",&a, &b, &c);

	if(a==b)
	{
		if(b == c)
		{
			ans=10000+(a*1000);
			printf("%d\n",ans);
			return 0;
		}
		else
		{
			ans=1000+(a*100);
			printf("%d\n",ans);
			return 0;
		}
	}  
	else 
	{
		if(b == c)
		{
			ans=1000+(b*100);
			printf("%d\n",ans);
			return 0;
		}
		else if(a==c)
		{
			ans=1000+(a*100);
			printf("%d\n",ans);
			return 0;
		}
		else
		{
			if(a>=b)
			{
				if(b>=c)
				{
					ans=a*100;
				}
				else
				{
					if(c>=a)
						ans=c*100;
					else
						ans=a*100;
				}
			}
			else   //b > a
			{
				if(b>=c)
				{
					ans=b*100;
				}
				else  // b< c
				{
					ans=c*100;

				}
			}
			printf("%d\n",ans);
			return 0;
		}
	}

	return 0;
}
