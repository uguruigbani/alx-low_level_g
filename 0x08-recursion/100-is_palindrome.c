#include "main.h"

/**
  * _lent - checks the length of a string
  * @s: is the string
  * Return: return the lent of the string
**/
int _lent(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lent(s + 1));
}

/**
 * checkz - checks if the string is palindrome
 * @j: is the index
 * @ln: is the length of the string
 * @s: is the string
 * Return: 1 if is polindrome or 0 if not
**/
int checkz(int j, int ln, char *s)
{
	if (ln > 0)
	{
		if (s[j] == s[ln])
		{
			return (checkz(j + 1, ln - 1, s));
		}
		else if (s[j] != s[ln])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: input value
 *
 * Return: Always 0
 */

int is_palindrome(char *s)
{
return (checkz(0, _lent(s) - 1, s));

}
