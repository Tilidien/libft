#include "libft.h"

int ft_atoi( const char* str )
{
    int             out = 0;
    int             i   = 0;
    unsigned int    mul = 1;
    while ( ft_isdigit( str[i] ) || str[i] == '-' )
    {
        i++;
    }
    i--;
    while( i >= 0 && str[i] != '-' )
    {
        out += mul * ( str[i] - '0' );
        mul *= 10;
        i--;
    }
    if ( str[0] == '-' )
    {
        return -1 * out;
    }
    else return out;
}