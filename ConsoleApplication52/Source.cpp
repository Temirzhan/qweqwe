#include <string.h>
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include "Header.h"


char f;
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	do
	{
		int N;
		printf("Выберите задание", &N);
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*1.	Составить программу, которая:
a.	запрашивает имя человека и повторяет его на экране;
b.	запрашивает имя человека и повторяет его на экране с приветствием.
*/
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите имя: ");
			scanf("%s", pt);
			fputs(pt, stdout);
			printf("\n");
			free(pt);
		}
		break;
		case 2:
		{
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			char pt2[40] = "Приветствую тебя ";
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите имя: ");
			scanf("%s", pt);
			strncat(pt2, pt, 40);
			fputs(pt2, stdout);
			printf("\n");
			free(pt);
			free(pt2);
		}
		break;
		case 3:
		{
			/*2.	Составить программу, которая запрашивает название футбольной команды и повторяет его на экране со словами "— это чемпион!".*/
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			char pt2[40] = "- это чемпоин ";
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите команду: ");
			scanf("%s", pt);
			strncat(pt, pt2, 40);
			fputs(pt, stdout);
			printf("\n");
			free(pt);
		}
		break;
		case 4:
		{
			/*4.	Составить программу, которая запрашивает название государства и его столицы, а затем выводит сообщение: "Столица государства ... — город ..." (на месте многоточий должны быть выведены соответствующие значения).*/
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			char *pt2 = NULL;
			pt2 = (char*)malloc(40 * sizeof(char));
			char *pt3 = NULL;
			pt3 = (char*)malloc(40 * sizeof(char));
			if (pt == NULL || pt2 == NULL || pt3 == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите Государоство:");
			scanf("%s", pt);
			printf("Введите столтцу: ");
			scanf("%s", pt2);
			sprintf(pt3, "Cтолица государства %s город %s", pt, pt2);
			fputs(pt3, stdout);
			printf("\n");
			free(pt);
			free(pt2);
			free(pt3);
		}
		break;
		case 5:
		{
			//5.	Дано название футбольного клуба.Определить количество символов в нем.
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите Клуб:");
			scanf("%s", pt);
			printf("В этом  клубе %d символов\n", strlen(pt));
			free(pt);
		}
		break;
		case 6:
		{
			/*6.	Дано название города. Определить, четно или нет количество символов в нем*/
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Название города:");
			scanf("%s", pt);
			printf(" %d символов\n", strlen(pt));
			if (strlen(pt) % 2 == 0)
			{
				printf("четное\n");
			}
			else
			{
				printf("не четное\n");
			}
			free(pt);
		}
		break;
		case 7:
		{
			/*7.	Даны две фамилии. Определить, какая из них длиннее.*/
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			char *pt2 = NULL;
			pt2 = (char*)malloc(40 * sizeof(char));
			if (pt == NULL || pt2 == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите первую фамилию:");
			scanf("%s", pt);
			printf("Введите вторую фамилию: ");
			scanf("%s", pt2);
			if (strlen(pt) > strlen(pt2))
			{
				printf("Первая длинее\n");
			}
			else if (strlen(pt) < strlen(pt2))
			{
				printf("Вторая длинее\n");
			}
			else
			{
				printf("равны");
			}
			free(pt);
			free(pt2);
		}
		break;
		case 8:
		{
			/*8.	Даны названия трех городов. Вывести на экран самое длинное и самое короткое название.*/
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			char *pt2 = NULL;
			pt2 = (char*)malloc(40 * sizeof(char));
			char *pt3 = NULL;
			pt3 = (char*)malloc(40 * sizeof(char));
			char *pt4;
			char *pt5;
			if (pt == NULL || pt2 == NULL || pt3 == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите первый город:");
			scanf("%s", pt);
			printf("Введите второй город: ");
			scanf("%s", pt2);
			printf("Введите третий город: ");
			scanf("%s", pt3);
			pt4 = LenMax(pt, pt2, pt3);
			pt5 = LenMin(pt, pt2, pt3);
			printf("Максимальна :%s  Минимальная :%s\n", pt4, pt5);
			free(pt);
			free(pt2);
			free(pt3);
		}
		break;
		case 9:
		{
			/*9.	Дано слово. Вывести на экран его третий символ*/
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите слово:");
			scanf("%s", pt);
			printf("третий символ %c\n", pt[2]);
			free(pt);
		}
		break;
		case 10:
		{
			//	10.	Введите массив символов из 12 элементов.Замените каждый символ - цифру на символ '!'
			char *pt = NULL;
			pt = (char*)malloc(13 * sizeof(char));
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите слово до 12 символов");
			scanf("%s", pt);
			zamena(pt);
			fputs(pt, stdout);;
			free(pt);
		}
		break;
		case 11:
		{
			//11.	Дана матрица символов размером 2×6.Сколько раз среди данных символов встречаются символы + , -, *.
			char *pt = NULL;
			pt = (char*)malloc(13 * sizeof(char));
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите слово до 12 символов");
			scanf("%s", pt);
			Count(pt);
			free(pt);

		}
		break;
		case 12:
		{
			//12.	Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.
			char *pt = NULL;
			pt = (char*)malloc(13 * sizeof(char));
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите слово до 12 символов");
			scanf("%s", pt);
			printf("%s", pt);
			Count2(pt);
			free(pt);
		}
		break;
		case 13:
		{
			/*13.	Дан массив символов, среди которых есть символ двоеточие ‘:’. Определить, сколько символов ему предшествует*/
			char *pt = NULL;
			pt = (char*)malloc(13 * sizeof(char));
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите слово до 12 символов");
			scanf("%s", pt);
			printf("%s", pt);
			Count3(pt);
			free(pt);
		}
		break;
		case 14:
		{
			//14.	Дан массив символов.Определить, сколько раз входит в него группа букв abc.
			char *pt = NULL;
			pt = (char*)malloc(13 * sizeof(char));
			if (pt == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите слово до 12 символов");
			scanf("%s", pt);
			CountABC(pt);
			free(pt);
		}
		break;
		case 15:
		{
			/*15.	Заданы две строки. Построить новую строку, состоящую из символов, которые входят в первую строку, но не входят во вторую.*/
			char *pt = NULL;
			pt = (char*)malloc(40 * sizeof(char));
			char *pt2 = NULL;
			pt2 = (char*)malloc(40 * sizeof(char));
			char *pt3 = NULL;
			pt3 = (char*)malloc(40 * sizeof(char));
			if (pt == NULL || pt2 == NULL || pt3 == NULL)
			{
				printf("EROR\n");
				exit(0);
			}
			printf("Введите строку:");
			scanf("%s", pt);
			printf("Введите строку: ");
			scanf("%s", pt2);
			No1(pt,pt2, pt3);
			printf("%s\n", pt3);
		}
		break;
		}
		printf("Хотитепродолжить проверять задание y-da");
		scanf("%c", &f);
	}while(f == 'y');
}