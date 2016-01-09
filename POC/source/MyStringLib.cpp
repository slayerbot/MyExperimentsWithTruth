#include "stdafx.h"
#include "MyStringLib.h"

int MyStringLib::Mystrlen(const char * str)
{
	int len = 0;
	for (; *str; *str++)
	{
		len++;
	}
	return len;
}

// test: 
// 1. pass null in sr 
// 2. size of des smaller than sr
char * MyStringLib::Mystrcpy(const char * src, char * des)
{
	char *buf = des;
	while (*buf++ = *src++);
	return des;
}

// test: 
// 1. str = NULL
// 2. with spaces
// 3. with \0 in between the string array
void MyStringLib::Mystrrev(char *str)
{
	if (str == NULL) return;
	
	int len = static_cast<int>(strlen(str));
	
	char *i = str;
	char *j = str;
	// j pointing to last element in array
	j = j + len -1;

	char tmp;
	while (j>i) {
		tmp = *i;
		*i = *j;
		*j = tmp;
		*i++;
		*j--;
	}

	cout << "rev str" << str << endl;
}

char * MyStringLib::Mystrstr(char * hay, const char * needle)
{
	if (!*needle) return (char *)hay;
	
	char *pAdv = hay;
	char *p = hay;
	char *pBegin = hay;
	char *n = const_cast<char *>(needle);

	while (*n++)
	{
		*pAdv++;
	}

	while (*pAdv)
	{
		pBegin = p;
		n = const_cast<char *>(needle);

		while (*p && *n && *p++ == *n++);
		if (!*n)
			return pBegin;
		p = pBegin + 1;
		*pAdv++;
	}
	return NULL;
}

bool MyStringLib::IsPalindrome(char * str)
{
	char *start = str;
	int len = Mystrlen(str);
	char *end = start + len - 1;
	bool res = true;

	while (*str)
	{
		*str = tolower(*str);
		*str++;
	}

	while (start < end) {
		if (*start == *end) {
			*start++;
			*end--;
		}
		else {
			res = false;
			break;
		}
	}
	return res;
}

// using std lib to simplify things
// Assuming the caller takes care of the memory for the newly created string after replace
char * MyStringLib::MyReplaceStr(char *str, char *find, char *replace)
{
	if (*str == NULL || *find == NULL || *replace == NULL)
		return NULL;

	int tailLen = 0;
	int findLen = 0;
	int repLen = 0;
	
	char *p = str;

	while (p)
	{
		p = strstr(p, find);
		if (p != NULL)
		{
			findLen = (int)strlen(find);
			repLen = (int)strlen(replace);
			tailLen = (int)strlen(p + findLen);
			
			//memmove(str1,str2,n)
			//copies n char from str2 to str1
			memmove(p + repLen, p + findLen, tailLen + 1);
			// For str -> "John meets and says hi to Jill" 
			// find -> "meets and says hi"  replace -> "gives book"
			
			// str1 -> "says hi to Jill"
			// str2 -> " to Jill"
			// str -> "John meets and  to Jill"

			memcpy(p, replace, repLen);
			// str -> "John gives book to Jill"
		}
	}
	return str;
}
