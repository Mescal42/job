#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

int main(void)
{
    int  i;
    char str[] = "bi bop a lula"; 

    i = 0;
    i = ft_strlen(str);
    ft_putchar(i);
    return (0);
}