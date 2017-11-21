#define JEMALLOC_DOTNET_INTEROP_C_
#include "dotnet_interop.h"

JEMALLOC_EXPORT void JEMALLOC_NOTHROW je_set_malloc_conf(const char *name)
{
    je_malloc_conf = name;
}

JEMALLOC_EXPORT const char* JEMALLOC_NOTHROW je_get_malloc_conf()
{
    return je_malloc_conf;
}

JEMALLOC_EXPORT je_malloc_message_ptr JEMALLOC_NOTHROW je_get_malloc_message_ptr()
{
    return je_malloc_message;
}

JEMALLOC_EXPORT void JEMALLOC_NOTHROW je_set_malloc_message_ptr(je_malloc_message_ptr p)
{
    je_malloc_message = p;
}