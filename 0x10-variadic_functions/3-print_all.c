#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_all - funct that prints anything
  *
  *@format: arguments passed
  *
  *
  *
  */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *sta, *sep = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					sta = va_arg(list, char*);
					if (!sta)
						sta = "(nil)";
					printf("%s%s", sep, sta);
					break;
				default:
					a++;
					continue;
			}
			sep = ",";
			a++;
		}
	}
	printf("\n");
	va_end(list);
}
