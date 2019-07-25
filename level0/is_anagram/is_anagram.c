/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_anagram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdenisov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:25:15 by kdenisov          #+#    #+#             */
/*   Updated: 2019/06/25 14:25:17 by kdenisov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_anagram(char *a, char *b)
{
	int al[127] = {0};
	int i;

	i = 0;
	while (a[i])
	{
		al[(unsigned)a[i]]++;
		i++;
	}
	i = 0;
	while (b[i])
	{
		al[(unsigned)b[i]]--;
		i++;
	}
	i = 0;
	while (i < 127)
	{
		if (al[i] != 0)
			return (0);
		i++;
	}
	return (1);
}
