#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int t = (int)time(nullptr);
	int answer = t % 10;
	int input;
	int rank = 0;
	bool clear = false;

	while (!clear)
	{
		scanf_s("%d", &input);

		if (answer > input)
		{
			printf("小さい\n");
		}
		else if (answer < input)
		{
			printf("大きい\n");
		}

		int sub = answer - input;

		if (answer == input)
		{
			printf("一致\n");
			rank = 2;
		}
		else if (sub > -3 && sub < 3)
		{
			printf("惜しい\n");
			rank = 1;
		}

		switch (rank)
		{
		case 2:
			printf("ランクS\n");
			clear = true;
			break;
		case 1:
			printf("ランクA\n");
			break;
		default:
			printf("ランクB\n");
			break;
		}
	}

	return 0;
}
