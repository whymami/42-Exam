int ft_strlen(const char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return (i-1);
}
unsigned int	ft_strcspn(const char *s, const char *reject)
{
	int len = ft_strlen(reject);
	unsigned int i = 0;
	unsigned int j = 0;
	while(s[i])
	{	
		j = 0;
		if (len > 1)
			while (reject[j])
			{
				if (s[i] == reject[j])
					return (i);
				j++;
			}
		else if (len < 2)
			if (s[i] == reject[0])
				return (i);
		i++;
	}
	return (i);
}