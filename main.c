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

#include <fcntl.h>

int main()
{
    // int o = 0;
    //int s = 1234;
    // int fd1 = open("ror.txt", O_CREAT | O_RDWR,0777);
    // printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s");
    // int fd = open("error.txt", O_CREAT | O_RDWR,0777);
    // ft_putnbr(fd);
    // s = printf("\001\002\007\v\010\f\r\n");
    close (1);
    int i = ft_printf("%qqqqqqq\n");
    if (i < 0)
    {
        i *= -1;
        write(2,"-", 1);
    }
    char c = i + '0';
    write(2, &c, 1);
    // dprintf(2, "%d",);
    //ft_printf("%qqq",s);
    // printf("%d\n%d",o,s);
    // va_list sf;
    // sf.
}