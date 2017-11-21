#ifndef DOTNET_INTEROP_H_
#define DOTNET_INTEROP_H_
#include "jemalloc\jemalloc.h"
#ifdef __cplusplus
extern "C" {
#endif
JEMALLOC_EXPORT void JEMALLOC_NOTHROW je_set_malloc_conf(const char *name);
JEMALLOC_EXPORT const char* JEMALLOC_NOTHROW je_get_malloc_conf();
typedef void(*je_malloc_message_ptr)(void *, const char *);
JEMALLOC_EXPORT je_malloc_message_ptr je_get_malloc_message_ptr();
JEMALLOC_EXPORT void je_set_malloc_message_ptr(je_malloc_message_ptr p);
#ifdef __cplusplus
}
#endif
#endif /* DOTNET_INTEROP_H_ */