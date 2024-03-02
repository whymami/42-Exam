#include "unistd.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{
	if (!s1 || s2)
		return (0);
	int i = -1;
	while (*s1)
	{
		i = -1;
		while (s2[++i])
			if(*s1 == s2[i])
				return ((char *)s1);
		s1++;
	}
	return (0);
}