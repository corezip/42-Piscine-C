/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:52:35 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/06 15:52:38 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



int		match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (match(s1 + 1, s2 + 1));
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}

void    test(char *s1, char *s2, int should)
{
		if (match(s1, s2) == should)
				printf("ahuevo que funciona Pardrino!\n");
		else
		{
				printf("!FAIL\n");
				printf("%s\n", s1);
				printf("%s\n", s2);
				printf("!you:    %d\n", match(s1, s2));
				printf("!should: %d\n", should);

		}
}

int     main(void)
{
						test("a", "b", 0);
						test("c", "c", 1);
						test("d", "dd", 0);
						test("d", "*d", 1);
						test("d", "*d*", 1);
						test("d", "d*", 1);
						test("dd", "d*d", 1);
						test("abcccd", "*ccd", 1);
						test("mississipissippi", "*issip*ss*", 1);
						test("xxxx*zzzzzzzzy*f", "xxxx*zzy*fffff", 0);
						test("xxxx*zzzzzzzzy*f", "xxx*zzy*f", 1);
						test("xxxxzzzzzzzzyf", "xxxx*zzy*fffff", 0);
						test("xxxxzzzzzzzzyf", "xxxx*zzy*f", 1);
						test("xyxyxyzyxyz", "xy*z*xyz", 1);
						test("mississippi", "*sip*", 1);
						test("xyxyxyxyz", "xy*xyz", 1);
						test("mississippi", "mi*sip*", 1);
						test("ababac", "*abac*", 1);
						test("ababac", "*abac*", 1);
						test("aaazz", "a*zz*", 1);
						test("a12b12", "*12*23", 0);
						test("a12b12", "a12b", 0);
						test("a12b12", "*12*12*", 1);
						test("*", "*", 1);
						test("a*abab", "a*b", 1);
						test("a*r", "a*", 1);
						test("a*ar", "a*aar", 0);
						test("XYXYXYZYXYz", "XY*Z*XYz", 1);
						test("missisSIPpi", "*SIP*", 1);
						test("mississipPI", "*issip*PI", 1);
						test("xyxyxyxyz", "xy*xyz", 1);
						test("miSsissippi", "mi*sip*", 1);
						test("miSsissippi", "mi*Sip*", 0);
						test("abAbac", "*Abac*", 1);
						test("abAbac", "*Abac*", 1);
						test("aAazz", "a*zz*", 1);
						test("A12b12", "*12*23", 0);
						test("a12B12", "*12*12*", 1);
						test("oWn", "*oWn**", 1);
						test("bLah", "bLah", 1);
						test("bLah", "bLaH", 0);
		return (0);
}
