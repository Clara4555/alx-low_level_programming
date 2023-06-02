#include <stdio.h>

void print_message_attributor(void) __attribute__((constructor));
/**
  *print_message_attributor -function where the printing taskes place
  *Return: always 0
  */
void print_message_attributor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
