#ifndef file
#define file
/**
*struct spec - struct
*@c: char
*@fn: pointer
*/
typedef struct spec
{
char *c;
int (*fn)();
} type1;
int _printf(const char *format, ...);
#endif
