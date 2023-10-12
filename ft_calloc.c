#include "libft.h"

void* ft_calloc( unsigned int size, unsigned int count )
{
    void* outPtr = malloc( size * count );
    ft_bzero( outPtr, size * count );
    return outPtr;
}