#include "path_resolver.h"

#ifdef __unix__
#define _GNU_SOURCE
#endif /* __unix__ */

#include <stdlib.h>

char *get_absolute_path(const char *relative_path) {
#if defined(__unix__) || defined(__APPLE__)
  return realpath(relative_path, NULL);
#elif defined(_WIN32)
  return _fullpath(NULL, relative_path, _MAX_PATH);
#endif
}
