#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char s2)
{
	int i = 0;
	while (s1[i])
	{
		if (s1[i] == s2)
			return (0);
		++i;
	}
	return (s1[i] - s2);
}
	

void    ft_union(char *s1, char *s2)
{
	int i = 0;
	char temp[256];
	int j = 0;

	temp[j] = s1[i];
	while (s1[i] != '\0')
	{
		if (ft_strcmp(temp, s1[i]) != 0)
		{
			++j;
			temp[j] = s1[i];
		}
		++i;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (ft_strcmp(temp, s2[i]) != 0)
		{
			++j;
			temp[j] = s2[i];
		}
		++i;
	}
	temp[++j] = '\0';
	ft_putstr(temp);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}