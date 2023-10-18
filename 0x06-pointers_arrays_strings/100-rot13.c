#include "main.h"

char *rot13(char *str)
{
	 char *s = str;
	 while (*s)
	 {
		 char offset = (*s >= 'a') ? 'a' : 'A';
		 if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
		 {
			 *s = (((*s - offset + 13) % 26) + offset);
		 }
		 s++;
	 }
	 
	 return (str);
}
