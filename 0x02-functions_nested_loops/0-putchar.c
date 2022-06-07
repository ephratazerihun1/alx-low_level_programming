#include <unistd.h>
/**
* _putchar - writes the character putchar to stdout
* @putchar: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char putchar)
{
return (write(1, &putchar, 1));
}
