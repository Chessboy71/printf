#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Complete the sentence : you know %s jon Snow \n", "nothing");
    printf("Complete the sentence : you know %s jon Snow \n", "nothing");
    _printf("Complete the sentence : you know %s jon %% \n", NULL);
    printf("Complete the sentence : you know %s jon Snow \n", NULL);
    return (0);
}