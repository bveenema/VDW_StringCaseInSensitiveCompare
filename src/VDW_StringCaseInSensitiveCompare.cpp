#include "VDW_StringCaseInSensitiveCompare.h"

int strcicmp(char const *a, char const *b)
{
  if(a && b){
    for (;; a++, b++) {
      int d = tolower((unsigned char)*a) - tolower((unsigned char)*b);
      if (d != 0 || !*a)
          return d;
    }
    return 0;
  }
  return -1;
}