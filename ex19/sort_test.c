#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
	int i;
	char *temp;
	int permut;

	permut = 1;
	while (permut)
	{
		i = 0;
		permut = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				permut = 1;
			}
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
