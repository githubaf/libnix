#define __NO_INLINE__
#include <string.h>
__stdargs char *strlwr(char *s) {
	unsigned char *s1 = (unsigned char *) s;

	while (*s1) {
		if ((*s1 > ('A' - 1)) && (*s1 < ('Z' + 1)))
			*s1 += 'a' - 'A';
		s1++;
	}
	return s;
}
