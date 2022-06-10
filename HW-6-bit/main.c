#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdio.h>

int pack4Chars2Int(char c1, char c2, char c3, char c4);
int checkEvenParity(short input);


void main()
{
	char c1='v', c2='f', c3='t', c4='y';
	int D1to4;
	printf("get a 4 chars to get thers binar:\n");
	//scanf("%c", &c1);

	//scanf("%c", &c2);

	//scanf("%c", &c3);

	//scanf("%c", &c4);

	D1to4 = pack4Chars2Int(c1, c2, c3, c4);


	int Sum1Logi;
	short input;
	printf("get a detsimal num to chekc the 1 logi in ther binar's:");
	scanf("%d", &input);
	Sum1Logi = checkEvenParity(input);

	if (Sum1Logi == 1)
		printf("num 1 bit is Zogi");
	else if (Sum1Logi == 0)
	{
		printf("num 1 bit is AnZogi");
	}
	else
		printf("problem");
}

int pack4Chars2Int(char c1, char c2, char c3, char c4)
{
	int binar4 = 0;
	binar4 |= c1;
	binar4 <<= 8;
	binar4 |= c2;
	binar4 <<= 8;
	binar4 |= c3;
	binar4 <<= 8;
	binar4 |= c4;

	return binar4;
}

int checkEvenParity(short input)
{
	int x = 1;
	short masc;
	int counter = 5; // כדי שלא יהי  ערך 0 בטעות
	masc = x; // אןלי צריך קאסטינג
	short check = 0;

	for (int bit = 16; bit > 0; bit--)
	{
		check = (masc & input);
		input >>= 1;

		if (check > 0)
			counter++;
		//נקבל ביט ביט
	}
	counter = (counter - 5);
	x = (counter % 2);
	if (x == 1)
		return (0); // מחזיר ההפך מהשארית 
	else if (x == 0)
		return (1);
	else
	{
		printf("problem");
		return (5);
	}

}