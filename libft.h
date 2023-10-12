#ifndef LIBFT_H
#define LIBFT_H

 
int             ft_isalpha( int arg );
int             ft_isdigit( int arg );
int             ft_isalnum( int arg );
int             ft_isascii( int arg );
int             ft_isprint( int arg );
unsigned int    ft_strlen( char* str );
void*           ft_memset( void* ptr, int ch, unsigned int size ); //The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
void            ft_bzero( void * ptr, int size); //set mem to zero
void*           ft_memcpy( void* dst, void* src, unsigned int count );
void*           ft_memmove( void* dst, void* src, unsigned int size );
unsigned int    ft_strlcpy( char* dst, const char* src, unsigned int size ); //return src size
unsigned int    ft_strlcat( char* dst, const char* src, unsigned int size ); //return new dest size
void            ft_toupper( char* str );
void            ft_tolower( char* str );
char*           ft_strchr( char* str, int ch ); //first occurance
char*           ft_strrchr( char* str, int ch ); //last occurance
int             ft_strncmp( char* strA, char* strB, unsigned int size );
void*           ft_memchr( void* mem, int toSearch, unsigned int size );
int             ft_memcmp( void* memA, void* memB, unsigned int size );
char*           ft_strnstr( char* haystack, char* needle, unsigned int size );
int             ft_atoi( const char* str );
void*           ft_calloc( unsigned int size, unsigned int count );
char*           ft_strdup( char* src );

#endif