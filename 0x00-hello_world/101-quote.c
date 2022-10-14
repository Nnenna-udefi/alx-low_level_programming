#include <unistd.h>
/**
 * main-program entry point.
 *
 * Return: 1 on success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2012-10-19\n", 59);
	return (1);
}
