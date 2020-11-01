#include <stdio.h>
int main()
{
	int storage[999];
	int numcorrect[999];
	int num, numcor;
	int i, j = 0, c = 0;
	scanf_s("%d", &num);
	for (i = 0;i < num;i++)
	{
		scanf_s("%d", &storage[i]);
	}
	scanf_s("%d", &numcor);
	for (i = 0;i < numcor;i++)
	{
		scanf_s("%d", &numcorrect[i]);
	}

	for (i = 0;i < num;i++)
	{
		for (j = 0;j < num;j++)
		{
			if (storage[j] % 1000 == numcorrect[i])
			{
				c += 1;
			}
		}
	}
	printf("%d", c);
}