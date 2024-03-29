﻿/*
Finding the first 100 polygonal numbers with sides between 3 and 10000


~~Documentation~~
https://en.wikipedia.org/wiki/Polygonal_number

~~Links~~
GitHub: https://github.com/DanielNicolae
Google Play: https://play.google.com/store/apps/developer?id=Don%C8%9Bu+Daniel+Nicolae
YouTube: https://www.youtube.com/channel/UCdxZEh4oSEsxDRc8MsTawjw?view_as=subscriber
GrabCad: https://grabcad.com/don.u.daniel.nicolae-1
WordPress: https://daniel25site.wordpress.com/
DeviantArt: http://free-gamer4ever.deviantart.com/

~~Author~~
Donțu Daniel Nicolae 2019
*/

#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable : 6031)

int* Triangular_numbers();
int* Square_numbers();
int* Pentagonal_numbers();
int* Hexagonal_numbers();
int* Heptagonal_numbers();
int* Octagonal_numbers();
int* Nonagonal_numbers();
int* Decagonal_numbers();
int* Hendecagonal_numbers();
int* Dodecagonal_numbers();
int* Tridecagonal_numbers();
int* Tetradecagonal_numbers();
int* Pentadecagonal_numbers();
int* Hexadecagonal_numbers();
int* Heptadecagonal_numbers();
int* Octadecagonal_numbers();
int* Enneadecagonal_numbers();
int* Icosagonal_numbers();
int* Icosihenagonal_numbers();
int* Icosidigonal_numbers();
int* Icositrigonal_numbers();
int* Icositetragonal_numbers();

int* Polygonal_numbers();

int main(void)
{
	int polygonOfSides;
	int* p;
	int i;
	int a;
	printf("Enter a number between 3 and 24 to calculate the first 100 polygonal numbers that have between 3 and 24 sides.\n");
	printf("For polygonal numbers with sides greater than 24, please enter the number 25.\n");
	while ((a = scanf("%d", &polygonOfSides)) == 0)  // Neither success (1) nor EOF
	{
		// clear what is left, the * means only match and discard:
		scanf("%*[^\n]");
		// input was not a number, ask again:
		printf("enter a number: ");
	}
		
	switch (polygonOfSides)
	{
	case 3:
		p = Triangular_numbers();
		
		printf("The triangular numbers between 1 and 100:\n");
		for (i=1;i<=100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 4:
	{
		p = Square_numbers();

		printf("The first 100 square numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	}
	case 5:
		p = Pentagonal_numbers();
		printf("The first 100 pentagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 6:
		p = Hexagonal_numbers();
		printf("The first 100 hexagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 7:
		p = Heptagonal_numbers();
		printf("The first 100 heptagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 8:
		p = Octagonal_numbers();
		printf("The first 100 octagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 9:
		p = Nonagonal_numbers();
		printf("The first 100 nonagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 10:
		p = Decagonal_numbers();
		printf("The first 100 decagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 11:
		p = Hendecagonal_numbers();
		printf("The first 100 hendecagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 12:
		p = Dodecagonal_numbers();
		printf("The first 100 dodecagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 13:
		p = Tridecagonal_numbers();
		printf("The first 100 tridecagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 14:
		p = Tetradecagonal_numbers();
		printf("The first 100 tetradecagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 15:
		p = Pentadecagonal_numbers();
		printf("The first 100 pentadecagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 16:
		p = Hexadecagonal_numbers();
		printf("The first 100 hexadecagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 17:
		p = Heptadecagonal_numbers();
		printf("The first 100 heptadecagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 18:
		p = Octadecagonal_numbers();
		printf("The first 100 octadecagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 19:
		p = Enneadecagonal_numbers();
		printf("The first 100 enneadecagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 20:
		p = Icosagonal_numbers();
		printf("The first 100 icosagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 21:
		p = Icosihenagonal_numbers();
		printf("The first 100 icosihenagonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 22:
		p = Icosidigonal_numbers();
		printf("The first 100 icosidigonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 23:
		p = Icositrigonal_numbers();
		printf("The first 100 icositrigonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	case 24:
		p = Icositetragonal_numbers();
		printf("The first 100 icositetragonal numbers are:\n");
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;

	case 25:
		printf("Enter the number of sides for the poligon.\n");
		p = Polygonal_numbers();
		for (i = 1;i <= 100;i++)
		{
			printf("%d \n",p[i]);
		}
		break;
	default:
		printf("The polygon must have between 3 and 24 sides.\n");
	}
	return 0;
}
int *Triangular_numbers()
{
	static int triangular_nums[101];
	for (int n = 1; n <= 100; n++)
	{
		int triangular = (n * n + n) / 2;
		triangular_nums[n] = triangular;
	}
	return triangular_nums;
}

int *Square_numbers()
{
	static int square_nums[101];
	for (int n = 1; n <= 100; n++)
	{
		int square = n * n;
		square_nums[n] = square;
	}
	return square_nums;
}
int *Pentagonal_numbers()
{
	static int pentagonal_nums[101];
	for (int n = 1; n <= 100; n++)
	{
		int pentagonal = (3 * n * n - n) / 2;
		pentagonal_nums[n] = pentagonal;
	}
	return pentagonal_nums;
}
int *Hexagonal_numbers()
{
	static int hexagonal_nums[101];
	for (int n = 1; n <= 100; n++)
	{
		int hexagonal = (4 * n * n - 2*n) / 2;
		hexagonal_nums[n] = hexagonal;
	}
	return hexagonal_nums;
}
int *Heptagonal_numbers()
{
	static int heptagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int heptagonal = (5 * n * n - 3 * n) / 2;
		heptagonal_nums[n] = heptagonal;
	}
	return heptagonal_nums;
}
int* Octagonal_numbers()
{
	static int octagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int heptagonal = (6 * n * n - 4 * n) / 2;
		octagonal_nums[n] = heptagonal;
	}
	return octagonal_nums;
}
int* Nonagonal_numbers()
{
	static int nonagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int nonagonal = (7 * n * n - 5 * n) / 2;
		nonagonal_nums[n] = nonagonal;
	}
	return nonagonal_nums;
}
int* Decagonal_numbers()
{
	static int decagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int decagonal = (8 * n * n - 6 * n) / 2;
		decagonal_nums[n] = decagonal;
	}
	return decagonal_nums;
}
int* Hendecagonal_numbers()
{
	static int hendecagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int hendecagonal = (9 * n * n - 7 * n) / 2;
		hendecagonal_nums[n] = hendecagonal;
	}
	return hendecagonal_nums;
}
int* Dodecagonal_numbers()
{
	static int dodecagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int dodecagonal = (10 * n * n - 8 * n) / 2;
		dodecagonal_nums[n] = dodecagonal;
	}
	return dodecagonal_nums;
}
int* Tridecagonal_numbers()
{
	static int tridecagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int tridecagonal = (11 * n * n - 9 * n) / 2;
		tridecagonal_nums[n] = tridecagonal;
	}
	return tridecagonal_nums;
}
int* Tetradecagonal_numbers()
{
	static int tetradecagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int tetradecagonal = (12 * n * n - 10 * n) / 2;
		tetradecagonal_nums[n] = tetradecagonal;
	}
	return tetradecagonal_nums;
}
int* Pentadecagonal_numbers()
{
	static int pentadecagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int pentadecagonal = (13 * n * n - 11 * n) / 2;
		pentadecagonal_nums[n] = pentadecagonal;
	}
	return pentadecagonal_nums;
}
int* Hexadecagonal_numbers()
{
	static int hexadecagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int hexadecagonal = (14 * n * n - 12 * n) / 2;
		hexadecagonal_nums[n] = hexadecagonal;
	}
	return hexadecagonal_nums;
}
int* Heptadecagonal_numbers()
{
	static int heptadecagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int heptadecagonal = (15 * n * n - 13 * n) / 2;
		heptadecagonal_nums[n] = heptadecagonal;
	}
	return heptadecagonal_nums;
}
int* Octadecagonal_numbers()
{
	static int octadecagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int octadecagonal = (16 * n * n - 14 * n) / 2;
		octadecagonal_nums[n] = octadecagonal;
	}
	return octadecagonal_nums;
}
int* Enneadecagonal_numbers()
{
	static int enneadecagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int enneadecagonal = (17 * n * n - 15 * n) / 2;
		enneadecagonal_nums[n] = enneadecagonal;
	}
	return enneadecagonal_nums;
}
int* Icosagonal_numbers()
{
	static int icosagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int icosagonal = (18 * n * n - 16 * n) / 2;
		icosagonal_nums[n] = icosagonal;
	}
	return icosagonal_nums;
}
int* Icosihenagonal_numbers()
{
	static int icosihenagonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int icosihenagonal = (19 * n * n - 17 * n) / 2;
		icosihenagonal_nums[n] = icosihenagonal;
	}
	return icosihenagonal_nums;
}
int* Icosidigonal_numbers()
{
	static int icosidigonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int icosidigonal = (20 * n * n - 18 * n) / 2;
		icosidigonal_nums[n] = icosidigonal;
	}
	return icosidigonal_nums;
}
int* Icositrigonal_numbers()
{
	static int icositrigonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int icositrigonal = (21 * n * n - 19 * n) / 2;
		icositrigonal_nums[n] = icositrigonal;
	}
	return icositrigonal_nums;
}
int* Icositetragonal_numbers()
{
	static int icositetragonal_nums[101];
	for (int n = 1;n <= 100;n++)
	{
		int icositetragonal = (22 * n * n - 20 * n) / 2;
		icositetragonal_nums[n] = icositetragonal;
	}
	return icositetragonal_nums;
}

int* Polygonal_numbers()
{
	static int polygonal_nums[101];
	int s;
	int rc;
	while ((rc = scanf("%d", &s)) == 0)  // Neither success (1) nor EOF
	{
		// clear what is left, the * means only match and discard:
		scanf("%*[^\n]");
		// input was not a number, ask again:
		printf("enter a number: ");
	}
	
	if (s > 3 && s <= 10000)
	{
		printf("The first 100 polygonal numbers with %d sides are:\n",s);
		for (int n = 1; n <= 100; n++)
		{
			int polygonal = ((s - 2) * n * n - (s - 4) * n) / 2;
			polygonal_nums[n] = polygonal;
		}
		return polygonal_nums;
	}
	else
	{
		printf("Choose a number between 4 and 10000.");
	}
}



