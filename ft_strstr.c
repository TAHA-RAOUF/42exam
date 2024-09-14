/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:04:22 by moraouf           #+#    #+#             */
/*   Updated: 2024/09/08 12:04:32 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *tofind)
{
	int	i;
	int	j;

	i = 0;
	if (tofind[0] == '\0')
	{
		return (str);
	}
	else
	{
		while (str[i])
		{
			j = 0;
			while (tofind[j] && str[i + j] == tofind[j])
			{
				j++;
			}
			if (tofind[j] == '\0')
			{
				return (&str[i]);
			}
			i++;
		}
	}
	return (0);
}
int main()
{
	char c[] = "Hello world";
	char to[] = "wo";
	printf("%s",ft_strstr(c,to));
}