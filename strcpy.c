#include <stdio.h>
#include <assert.h>
#include "strcpy.h"



char *strcpy(char *strDest,const char* strSrc)
{
    assert((strDest!=NULL)&&(strSrc!=NULL));
    char* address = strDest;
    while((*strDest++==*strSrc++)!='\0')
        NULL;
    return address;
}



