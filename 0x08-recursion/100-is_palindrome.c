#include "main.h"
#include<string.h>

int ispal_helper(char *, int, int);

/**
 * is_palindrome - checks if a string is palindrome
 * Description: A string is plaindrome if
 * it reads thesame in reverse
 * @s: pointer to the string
 * Return: 1 if true 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0, l = strlen(s);

	if (l == 0)
		return (1);
	return (ispal_helper(s, i, l - 1));
}

/**
 * ispal_helper - helper to is_palindrome
 * @s: pointer to string
 * @left: left index
 * @right: right index
 * Return: 1 if s is a palindrome 0 otherwise
 */
int ispal_helper(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] == s[right])
		return (ispal_helper(s, left + 1, right - 1));
	else
		return (0);
}
