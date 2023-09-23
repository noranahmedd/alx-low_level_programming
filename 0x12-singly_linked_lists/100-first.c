#include "lists.h"
/**
 * printv4main - Constructor function to print a message before main
 */
void __attribute__((constructor)) printb4main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
