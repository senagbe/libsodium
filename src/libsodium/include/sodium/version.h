
#ifndef sodium_version_H
#define sodium_version_H

#include "export.h"

#define SODIUM_VERSION_STRING "1.1"

#define SODIUM_LIBRARY_VERSION_MAJOR 1
#define SODIUM_LIBRARY_VERSION_MINOR 1

#ifdef __cplusplus
extern "C" {
#endif

SODIUM_EXPORT
const char *sodium_version_string(void);

SODIUM_EXPORT
int         sodium_library_version_major(void);

SODIUM_EXPORT
int         sodium_library_version_minor(void);

#ifdef __cplusplus
}
#endif

#endif
