/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aryabenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:57:54 by aryabenk          #+#    #+#             */
/*   Updated: 2018/03/05 12:57:55 by aryabenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <locale.h>
#include "./printf/ft_printf.h"

int	main(void)
{
	int k;

    //setlocale (LC_ALL,"");
	printf("~ret = %d\n", ft_printf("%S", L"àпьпрьпь"));
	printf("!ret = %d\n", printf("%S", L"Lalalala, 100% des gens qui parlent à Ly adorent Ly. Ou Presque. 2, 10, 2710, "));
}
