#include <stdio.h>
#include "test.h"
#include "test_param.h"

void print_sub(void)
{
    // test print
    printf("test print ...\n");
}

void print_param(void)
{
    printf("int param = %d\n",int_param);
    if (bool_param)
    {
        printf("bool param = true\n");
    }
    else
    {
        printf("bool param = false\n");
    }
    
}
