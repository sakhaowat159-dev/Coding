#include <stdio.h>
int main()
{

	int a;
	scanf("%d", &a);
	int t[a];
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &t[i]);
	}
	long long max = -100000, sec = -100000, abc = -100000;
	for (int i = 0; i < a; i++)
	{
		if (t[i] > max)
		{
			max = t[i];
		}

		if (t[i] > sec && t[i] != max)
		{
			sec = t[i];
		}

		if (t[i] > abc && t[i] != max && t[i] != sec)
		{
			abc = t[i];
		}
	}

	printf("%d\n", max);
	printf("%d\n", sec);
	printf("%d\n", abc);

	return 0;
}