#include "libft.h"

int ft_isalpha( int arg )
{
    return ( unsigned char )arg >= 'a' && ( unsigned char )arg <= 'z' || ( unsigned char )arg >= 'A' && ( unsigned char )arg <= 'Z';     
}