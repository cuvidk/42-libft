void	to_upper(char *a)
{
	if (*a >= 'a' && *a <= 'z')
		*a = *a - 32;
}

void	to_upper2(unsigned int i, char *a)
{
	if (*a >= 'a' && *a <= 'z')
		*a = *a - 32;
}

char	to_upper3(char a)
{
	if (a >= 'a' && a <= 'z')
		a = a - 32;
	return (a);
}

char	to_upper4(unsigned int i, char a)
{
	if (a >= 'a' && a <= 'z')
		a = a - 32;
	return (a);
}
