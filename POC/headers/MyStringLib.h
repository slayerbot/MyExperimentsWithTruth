#pragma once

class MyStringLib 
{

public:
	//strlen
	int Mystrlen(const char *str);
	//strcpy
	char * Mystrcpy(const char *str, char *des);
	//strrev
	void Mystrrev(char *str);
	//strstr
	char * Mystrstr(char *hay, const char *needle);

	//func to find if given string is palindrome
	bool IsPalindrome(char *str);
	// func to replace certain substring with other
	char * MyReplaceStr(char *str, char *find, char *replace);
};

