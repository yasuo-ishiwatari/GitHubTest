#include <stdio.h>
#include "test.h"

int main(void)
{
    // main comment
    printf("Start main ...\n");

    // call print sub function
    print_sub();
    // print param
    print_param();


    while(1)
    {
        if (main_loop() == LOOP_END)
        {
            break;
        }
    }

    return 0;
}
