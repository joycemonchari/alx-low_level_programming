#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
int get_word_length(char *str);
void free_words(char **words, int count);

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to array of words
 */
char **strtow(char *str)
{
    char **words;
    int word_count, i, j, k, length;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0; i < word_count; i++)
    {
        while (str[j] == ' ')
            j++;

        length = get_word_length(&str[j]);
        words[i] = malloc((length + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            free_words(words, i);
            return (NULL);
        }

        for (k = 0; k < length; k++, j++)
            words[i][k] = str[j];
        words[i][k] = '\0';
    }
    words[i] = NULL;

    return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: number of words
 */
int count_words(char *str)
{
    int count = 0, i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    return (count);
}

/**
 * get_word_length - gets the length of a word in a string
 * @str: the string to get word length from
 *
 * Return: length of word
 */
int get_word_length(char *str)
{
    int length = 0;

    while (str[length] != ' ' && str[length] != '\0')
        length++;

    return (length);
}

/**
 * free_words - frees all words in an array
 * @words: the array of words to free
 * @count: the number of words in the array
 *
 * Return: nothing
 */
void free_words(char **words, int count)
{
    int i;

    for (i = 0; i < count; i++)
        free(words[i]);

    free(words);
}
