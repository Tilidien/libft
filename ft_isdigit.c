#include "libft.h"

int ft_isdigit( int arg )
{
    return ( unsigned char )arg >= '0' && ( unsigned char )arg <= '9';
}