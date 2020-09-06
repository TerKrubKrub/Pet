#include <stdio.h>
int main()
{
	int i,j;
	int x[5][6];
	int sum[6];
	for (i = 1; i <= 5; i++)
	{
		sum[i]=0;
		for (j = 1; j <= 4; j++)
		{
			scanf_s("%d", &x[i][j]);
			sum[i] += x[i][j];
		}
	}
	int max = 0, count=0;
	for (i = 1; i <= 5; i++)
	{
		if (sum[i] > max)
		{
			max = sum[i];
			count = i;
		}
	}
	printf("%d %d", count, max);
	return 0;
}