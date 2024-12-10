#include <limits.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		if (result * sign > INT_MAX)
			return (-1);
		if (result * sign < INT_MIN)
			return (0);
		i++;
	}
	if (str[i] != '\0')
		return (0);
	return ((int)(result * sign));
}
