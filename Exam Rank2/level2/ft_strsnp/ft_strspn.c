unsigned long	ft_strspn(const char *s, const char *accept)
{
	unsigned long count = 0;
	int i = -1;
	int j = 0;
	while (s[++i])
		if(s[i] == accept[j++])
			count++;
	return(count);
}