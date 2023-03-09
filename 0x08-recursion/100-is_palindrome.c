#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome recursively
 *
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	if (*s != *(s + len - 1))
		return (0);

	*(s + len - 1) = '\0';

	return (is_palindrome(s + 1));
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s1 = "abcddcba";
	char *s2 = "abcdcba";
	char *s3 = "abcdecba";
	char *s4 = "I guess I thought the dream-space would be all about the visual"

		printf("is_palindrome(\"%s\") = %d\n", s1, is_palindrome(s1));
	printf("is_palindrome(\"%s\") = %d\n", s2, is_palindrome(s2));
	printf("is_palindrome(\"%s\") = %d\n", s3, is_palindrome(s3));
	printf("is_palindrome(\"%s\") = %d\n", s4, is_palindrome(s4));

	return (0);
}
