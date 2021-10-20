#include<stdio.h>

int main(void)
{
	int wall[501];
	int width, height;
	int water=0;

	scanf("%d %d", &height, &width);

	for(int i=0; i<width; i++)
		scanf("%d",&wall[i]);

	printf("%d\n",water);


	return 0;
}
