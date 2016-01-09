// POC.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "MyStringLib.h"


void intArrayrev(int *in, int len)
{
	int *i = in;
	cout << "i pointing to:" << *i << endl;
	int *j = in + len - 1;
	cout << "j pointing to:" << *j << endl;

	int tmp;

	while (j>i) {
		tmp = *i;
		*i = *j;
		*j = tmp;
		*i++;
		*j--;
	}
	int c = 0;

	//Printing the reversed shouldn't be the function responsibility
	while (c < len) {
		c++;
		cout << *in;
		*in++;
	}
}

void Fib(int terms)
{
	//0,1,1,2,3,5,8
	static int f = 0, s = 1, n;
	if (terms > 0)
	{
		n = f + s;
		f = s;
		s = n;
		cout << n << " ";
		Fib(terms-1);
	}
}

int Factor(int n)
{
	if (n == 1)
		return 1;
	else
		return(n*Factor(n - 1));
}

int main()
{
	char str[] = "John meets and says hi to Jill";

	MyStringLib oStrLib;

	char *res = oStrLib.MyReplaceStr(str, "meets and says hi", "gives book");
	printf("Length of given string: %d\n", oStrLib.Mystrlen(str));

	oStrLib.Mystrrev(str);
	cout << "reversed string: " << endl << str << endl;

	char *des = (char *) malloc(sizeof(char) * strlen(str));
	oStrLib.Mystrcpy(str, des);
	cout << "Copied String:" << endl << des << endl;

	des = oStrLib.Mystrstr(str, "OMP");
	if (des)
		cout << "sub String found " << endl << des << endl;
	else
		cout << "sub string not found " << endl;

	char strP[] = "Malayalam";
	if (oStrLib.IsPalindrome(strP))
		cout << "yay its palindrome" << endl;
	else
		cout << "no its not" << endl;



	//cout << "Factorial of: ";
	//int no;
	//cin >> no;
	////int fact = Factorial(no);
	//cout << "factorial is :" << endl;
	//printf("%d", Factor(no));
	
	/*cout << "enter the no of terms for series" << endl;
	int terms;
	cin >> terms;
	Fib(terms); */


/*
	int i[] = { 1,2,3,4,5 };
	int len = sizeof(i) / sizeof(i[0]);
	cout << "len: " << len << endl;
	intArrayrev(i, len);
	cout << "rev int: " << i << endl;*/

	return 0;
}

