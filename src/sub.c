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
    printf("param1 = %d\n",param1);
    if (loop_brake)
    {
        printf("bool param = true\n");
    }
    else
    {
        printf("bool param = false\n");
    }
    
}

void set_int_param(int prm)
{
    param1 = prm;
}

void set_loop_brake(bool fg)
{
    loop_brake = fg;
}
