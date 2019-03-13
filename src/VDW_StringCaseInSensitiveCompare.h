#ifndef VDW_STRING_INSENSITIVE_STRING_COMPARE_H
#define VDW_STRING_INSENSITIVE_STRING_COMPARE_H

#include <ctype.h>

// Compares two strings case in-sensitively
// 	returns 0 if match, returns non-zero no match
// 	if a or b are null, returns -1
int strcicmp(char const *a, char const *b);

#endif