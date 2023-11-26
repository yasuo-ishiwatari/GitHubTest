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
    printf("int param = %d\n",param1);
    if (loop_brake)
    {
        printf("loop brake = true\n");
    }
    else
    {
        printf("loop brake = false\n");
    }
    
}

void set_param1(int prm)
{
    param1 = prm;
}

void set_loop_brake(bool fg)
{
    loop_brake = fg;
}
