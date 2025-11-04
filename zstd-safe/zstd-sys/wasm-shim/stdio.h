#include <stddef.h>

#ifndef	_STDIO_H
#define	_STDIO_H	1

#define fprintf(expr, ...)
#define fflush(expr)

typedef void* FILE;

#define	LONG_SEEK(a1, a2, a3)   (__builtin_unreachable(), 0)
#define	fread(a1, a2, a3, a4) (__builtin_unreachable(), 0)
#define	fflush(a1) (__builtin_unreachable(), 0)
#define	realloc(a1, a2) (__builtin_unreachable(), -100)

#define	SEEK_SET    1
#define	SEEK_CUR    2
#define	SEEK_END    3


#endif // _STDIO_H

