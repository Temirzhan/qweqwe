#include <string.h>
#include <locale.h>
#include <iostream>
#include <stdio.h>



char *LenMax(char *pt, char *pt2, char *pt3)
{
	if (strlen(pt) >= strlen(pt2) && strlen(pt) >= strlen(pt3))
	{
		return pt;
	}
	if (strlen(pt2) >= strlen(pt) && strlen(pt2) >= strlen(pt3))
	{
		return pt2;
	}
	if (strlen(pt3) >= strlen(pt) && strlen(pt3) >= strlen(pt2))
	{
		return pt3;
	}
}
char *LenMin(char *pt, char *pt2, char *pt3)
{
	if (strlen(pt) <= strlen(pt2) && strlen(pt) <= strlen(pt3))
	{
		return pt;
	}
	if (strlen(pt2) <= strlen(pt) && strlen(pt2) <= strlen(pt3))
	{
		return pt2;
	}
	if (strlen(pt3) <= strlen(pt) && strlen(pt3) <= strlen(pt2))
	{
		return pt3;
	}
}

void zamena(char *pt)
{
	for (int i = 0; i < 12; i++)
	{
		if ((int)*(pt + i) > 47 && (int)*(pt + i) < 59)
		{
			*(pt + i) = '!';
		}
	}
}
void Count(char *pt)
{
	int count = 0;
	for (int i = 0; i < 12; i++)
	{
		if (*(pt + i) == '*' || *(pt + i)=='+'||*(pt+i)=='-')
		{
			*(pt + i) = '!';
			count++;
		}
	}
	printf("вчтречаються %d\n", count);
}

void Count2(char *pt)
{
	int count = 0;
	pt = strupr(pt);
	for (int i = 0; i < 12; i++)
	{
		if (*(pt + i) == 'а' || *(pt + i) == 'Е' || *(pt + i) == 'О'|| *(pt + i) == 'У'|| *(pt + i) == 'Ю'|| *(pt + i) == 'Я')
		{
			count++;
		}
	}
	printf("вчтречаються %d\n", count);
}
void Count3(char *pt)
{
	int count = 0;
	pt = strupr(pt);
	for (int i = 0; i < 12; i++)
	{
		if (*(pt + i) == ':')
		{
			break;
		}
		count++;
	}
	printf("количество символов %d\n", count);
}

void CountABC(char *pt)
{
	int count = 0;
	for (int i = 0; i < 12; i++)
	{
		if (*(pt + i) == 'a'|| *(pt + i+1) == 'b' || *(pt + i+2) == 'c')
		{
			count++;
		}
	}
	printf("количество ABC %d\n", count);
}

void No1(char *pt, char *pt2, char *pt3)
{
	int flag = 0;
	int flag2 = 0;
	int count = 0;
	for (int i = 0; i < 40; i++)
	{
		if (*(pt + i) == '\0')
			break;
		flag == 0;
		for (int j = 0; j < 40; j++)
		{
			if (*(pt + j) == '\0')
			{
				break;
				flag = 1;
			}
			if (*(pt + i) == *(pt2 + i))
			{
				flag2 = 1;
				break;
			}
		}
		if (flag2 == 0)
		{
			*(pt3 + count) = *(pt + i);
			count++;
		}
		if (flag == 1)
			break;
	}
	*(pt3 + count) = '\0';
}