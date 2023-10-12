#include "libft.h"


int ft_isalnum( int arg )
{
    return  ( unsigned char )arg >= 'a' && ( unsigned char )arg <= 'z' || 
            ( unsigned char )arg >= 'A' && ( unsigned char )arg <= 'Z' ||
            ( unsigned char )arg >= '0' && ( unsigned char )arg <= '9'    
}