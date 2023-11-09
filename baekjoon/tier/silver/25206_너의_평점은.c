#include <stdio.h>

int main(void)
{
	char	sub[51];
	char	rat[3];
	double	sum = 0;
	double	cresum = 0;
	double	cre;

	for (int i = 0; i < 20; i++)
	{
		scanf("%s %lf %s", sub, &cre, rat);
		if (rat[0] == 'A' && rat[1] == '+')
			sum += cre * 4.5;
		else if (rat[0] == 'A' && rat[1] == '0')
			sum += cre * 4.0;
		else if (rat[0] == 'B' && rat[1] == '+')
			sum += cre * 3.5;
		else if (rat[0] == 'B' && rat[1] == '0')
			sum += cre * 3.0;
		else if (rat[0] == 'C' && rat[1] == '+')
			sum += cre * 2.5;
		else if (rat[0] == 'C' && rat[1] == '0')
			sum += cre * 2.0;
		else if (rat[0] == 'D' && rat[1] == '+')
			sum += cre * 1.5;
		else if (rat[0] == 'D' && rat[1] == '0')
			sum += cre * 1.0;
		if (rat[0] == 'A' || rat[0] == 'B' || rat[0] == 'C' || rat[0] == 'D' || rat[0] == 'F')
			cresum += cre;
	}
	if (sum == 0 || cresum == 0)
	{
		printf("0.000000");
		return (0);
	}
	printf("%lf\n", sum / cresum);
	return (0);
}
