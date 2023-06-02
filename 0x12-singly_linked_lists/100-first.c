#include "stdio.h"

void cons(void) __attribute__ ((constructor));

 /**
  * cons - Print a string
  * This is executed before the main function is called
  */
void cons(void)
{
	printf("You are beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
