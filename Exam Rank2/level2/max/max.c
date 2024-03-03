void ft_swap(int *s1, int *s2)
{
	int tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int		max(int* tab, unsigned int len)
{
	if(!tab[0] || !tab)
		return 0;
	int tmp = 0;
	int i = -1;
	while (++i < len)
		if(tab[i] > tab[i + 1])
			ft_swap(&tab[i],&tab[i+1]);
	return (tab[len]);
}