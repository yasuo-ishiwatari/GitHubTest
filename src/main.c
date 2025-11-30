#include <stdio.h>
#include "test.h"
#include "test_param.h"

int main(void)
{
    // main comment
    printf("Start main ...\n");

    // call print sub function
    print_sub();
    // print param
    print_param();

    while(loop_brake == false)
    {
        main_loop();
    }

    printf("commit-1\n");

    printf("connit-2 on test4");
    
    printf("connit-3 on test5");
   

    return 0;
}
