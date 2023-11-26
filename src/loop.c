#include <stdio.h>
#include "test.h"

void main_loop(void)
{  
    printf("e -- end\n");
    char key;
    scanf("%c",&key);
    if (key == 'e')
    {
        set_loop_brake(true);
    }
    // disp param
    print_param();
}
