#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float squareNumber(float n);
float cubeNumber(float n);
float powerNumber(float n, int p);
int isEven(int num);
int isOdd(int num);
long digitNumber(long digit);
char myToLower(char ch);
char myToUpper(char ch);
int charToNumber(char c1, char c2, char c3);
int sumDividers(int n1, int n2);
int countDivideOdd(int num);
int smallerDivider(int num);
int biggestDivider(int num);
int gcd(int a, int b);
void limFracture(int numerator, int denominator);
int Lcm(int n1, int n2);

void main()
{
	
}
/***1***
float squareNumber(float n)
{
	float result = n * n;
	return result;
}

float cubeNumber(float n)
{
	float result = n * n * n;
	return result;
}

float powerNumber(float n, int p)
{
	int i = 0;
	float result = 1;
	if (p == 0)
		return 1; 
	else
	{
		for(i = 1; i <= p; i++)
		{
			result = result * n;
		}
		return result;
	}
}*/

/* ***2***
int isEven(int num)
{
	if (num % 2 == 0) // return !(num % 2) ? 1 : 0;
		return 1;
	return 0;
}

int isOdd(int num)
{
	return isEven(num) ? 0 : 1;
}*/

/* ***3***
long digitNumber(long digit)
{
	int i;
	long before = 1;
	long result = 1;
	if (digit == 0)
		return 0;
	else if (digit == 1)
		return 1;
	else
	{
		for (i = 1; i <= digit - 1; i++)
		{
			result = result * 10;
			before += result;
		}
		return before;
	}
	/* method 2
	long seq = 0;
	for(i = 1; i <= digit; i++)
	seq = (seq * 10) + 1;
	return seq; 

}*/

/* ***4***
char myToLower(char ch)
{
	
	if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
		return ch;
	}
	else
		return -1;
}
char myToUpper(char ch)
{

	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
		return ch;
	}
	else
		return -1;
}
/* method 2: 
char myToLower(char c) { return (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : -1; }
char myToUpper(char c) { return (c >= 'a' && c <= 'z') ? (c - 'a' + 'A') : -1; }*/

/***5***
int charToNumber(char c1, char c2, char c3)
{
	if (c1 > 57 || c1 < 48 || c2 > 57 || c2 < 48 || c3 > 57 || c3 < 48)
		return 0;
	else
	{
		return ((c1 - '0') * 100 + (c2 - '0') * 10 + c3 - '0');
	}
}*/

/* ***6***
int sumDividers(int n1, int n2)
{
	int i, min, max, sum = 1;
	if (n1 < n2) 
		min = n1;
	
	else
		min = n2;

	if (n1 > n2)
		 max = n1;
	else
		max = n2;

	if (min == 1)
		 return 1;

	if (max % min == 0)
		sum = sum + min;

	for (i = 2; i * i < min; i++)
	{
		if (min % i == 0)
		{
			if (max % i == 0)
				sum += i;
			if (max % (min / i) == 0)
				sum += (min / i);
		}
	}
	if (i * i == min && max % i == 0)
		sum += i;
	return sum;
}*/

/* ***7***
int countDivideOdd(int num)
{
	int root = (int)sqrt(num);
	if (root * root == num)
		return 1;
	else
		return 0;
}*/

/* ***8***
int smallerDivider(int num)
{
	int i;
	if (num % 2 == 0)
		return 2;
	else 
	{
		for (i = 3; i * i <= num; i++)
		{
			if (num % i == 0)
			{
				return i;
			}
		}
		return num;
	}
*/

/* ***9***
int biggestDivider(int num)
{
	int i;
	if (num % 2 == 0)
		return num / 2;
	else
	{
		for (i = 3; i * i <= num; i++)
		{
			if (num % i == 0)
			{
				return num / i;
			}
		}
		return num / num;
	}
}*/

int gcd(int a, int b)
{
	int tmp;
	while (b > 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

/* ***10***
void limFracture(int numerator, int denominator)
{
	int divide = 0;
	if (denominator == 0)
	{
		printf("Can't divide by zero!");
	}
	else
	{
		divide = gcd(numerator, denominator);
		printf("%d / %d\n", numerator / divide, denominator / divide);
	}
}*/

/***11***
int Lcm(int n1, int n2)
{
	int mult = 0;
	if (n1 == 0 || n2 == 0)
		return 0;
	if (n1 > 0)
		n1 = n1;
	else 
		n1 = -1 * n1;
	if (n2 > 0)
		n2 = n2;
	else
		n2 = -1 * n2;
	mult = gcd(n1, n2);
	return (n1 * n2) / mult;

}*/
