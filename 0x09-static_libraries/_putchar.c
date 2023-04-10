#include "main.h"

/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int message[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
        int index, array_size;

        /* Compute the size of the message array */
        array_size = sizeof(message) / sizeof(int);

        /* Output each character in the message array */
        for (index = 0; index < array_size; index++)
        {
                putchar(message[index]);
        }

        return (0);
}
