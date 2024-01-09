#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include "ft_printf.h"

// void printt(const char *format,...)
// {
//     va_list print;
//     char *str;
//     char c;
//     int a;

//     va_start(print,format);
//     if (format[0] == '%')
//     {
//         if(format[1] == 's')
//         {
//             str = va_arg(print, char *);
//             write(1, str, strlen(str));
//             c = va_arg(print, int);
//             write(1, &c, 1);
//             a = va_arg(print, int);
//             printf("%d",a);
//         }
//     }
//     va_end(print);
// }
int main()
{
    // int o = 0;
    int s = 0;
    printf("%p\n",&s);
    ft_printf("%p",&s);
    // s = printf("\001\002\007\v\010\f\r\n");
    // printf("%s");
    // printf("%d\n%d",o,s);
}