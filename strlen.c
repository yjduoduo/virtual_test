#include <assert.h>
#include <stdio.h>
#include "strlen.h"

int strlen(const char *str)
{
    assert(str != NULL);
    int len = 0;
    while((*str++) != '\0')
    {
        len++;
    }
    return len;
}
