/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:07:43 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/10 09:13:01 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	count_word(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && sep(s[i], c))
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && !sep(s[i], c))
				i++;
		}
	}
	return (words);
}

char	*ft_strduplicate(char *s, int start, int end)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(char) * ((end - start) + 1));
	if (!copy)
		return (NULL);
	while (start < end)
	{
		copy[i] = s[start];
		start++;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**result;

	i = 0;
	j = 0;
	result = malloc(sizeof(char *) * (count_word((char *) s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && sep(s[i], c))
			i++;
		start = i;
		while (s[i] && !sep(s[i], c))
			i++;
		if (start < i)
		{
			result[j] = ft_strduplicate((char *) s, start, i);
			j++;
		}
	}
	result[j] = 0;
	return (result);
}

/* void    ft_free_2d_arr(char **arr)
{
    int	i;

    i = 0;
    while (arr[i] != NULL)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}

void    ft_put_2d_arr(char **arr)
{
    int    i;

    i = 0;
    while (arr[i] != NULL)
    {
        printf("array [%d] : %s\n", i, arr[i]);
        i++;
    }
    printf("array [%d] : %s\n\n", i, arr[i]);
    i = 0;
}
	
int    main()
{
    // Init 1
    char str1[] = "Bonsoir tout le monde";
    char sep1 = ' ';
    char **arr1;

    // Init 2
    char str2[] = "_Bonsoir_ tout_ le_ monde_";
    char sep2 = '_';
    char **arr2;

    // Init 3
    char str3[] = "Bonsoir tout le monde !";
    char *sep3 = "";
    char **arr3;

    // Init 4
    char str4[] = "AA";
    char *sep4 = "";
    char **arr4;

    // Init 5
    char str5[] = "";
    char sep5 = ' ';
    char **arr5;


    // Test 1
    arr1 = ft_split(str1, sep1);
    printf("Test 1 (Split normal, avec separation des mots) : \n");
    ft_put_2d_arr(arr1);
    ft_free_2d_arr(arr1);

    // Test 2
    arr2 = ft_split(str2, sep2);
    printf("Test 2 (Split normal avec un ' ' devant tout le nonde) : \n");
    ft_put_2d_arr(arr2);
    ft_free_2d_arr(arr2);

    // Test 3
    arr3 = ft_split(str3, *sep3);
    printf("Test 3 (La chaine est copiee dans un sub array) : \n");
    ft_put_2d_arr(arr3);
    ft_free_2d_arr(arr3);

    // Test 4
    arr4 = ft_split(str4, *sep4);
    printf("Test 4 (AA only on n0 cell) : \n");
    ft_put_2d_arr(arr4);
    ft_free_2d_arr(arr4);

    // Test 5
    arr5 = ft_split(str5, sep5);
    printf("Test 5 (null) : \n");
    ft_put_2d_arr(arr5);
    ft_free_2d_arr(arr5);

    return (0);
} */