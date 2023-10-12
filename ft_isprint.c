#include "libft.h"

int ft_isprint( int arg )
{
    return ( unsigned char )arg >= 20 && ( unsigned char )arg <= 127;
}