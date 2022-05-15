 #include "main.h"
 #include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
  va_list vl;
  int i = 0, j=0;
  char buff[100]={0}, tmp[20];
  char * str_arg;
  
  va_start( vl, format);
  while (format && format[i])
  {
    if(format[i] == '%'){
      i++;
      switch (format[i]) {
        /* Convert char */
        case 'c': {
          buff[j] = (char)va_arg( vl, int );
          j++;
          break;
        }
        /* Convert decimal */
        case 'd': {
          _itoa(va_arg( vl, int ), tmp, 10);
          strcpy(&buff[j], tmp);
          j += strlen(tmp);
          break;
        }
        /* Convert hex */
        case 'x': {
          _itoa(va_arg( vl, int ), tmp, 16);
          strcpy(&buff[j], tmp);
          j += strlen(tmp);
          break;
        }
        /* Convert octal */
        case 'o': {
          _itoa(va_arg( vl, int ), tmp, 8);
          strcpy(&buff[j], tmp);
          j += strlen(tmp);
          break;
        }
        /* copy string */
        case 's': {
          str_arg = va_arg( vl, char* );
          strcpy(&buff[j], str_arg);
          j += strlen(str_arg);
          break;
        }
      }
    } else {
      buff[j] =format[i];
      j++;
    }
    i++;
  } 
  fwrite(buff, j, 1, stdout); 
  va_end(vl);
  return j;
}
