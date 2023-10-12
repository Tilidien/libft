#include "libft.h"
void ft_bzero( void * ptr, int size )
{
    int i = 0;
    char* mem = ( char* )ptr;
    while ( i < size )
    {
        mem[i] = 0;
    }
}