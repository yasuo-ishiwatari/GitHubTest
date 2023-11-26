#include <stdio.h>
#include "test.h"

int main_loop(void)
{  
    int ret = LOOP_CONTINUE;

    printf("e -- end\n");
    char key;
    scanf("%c",&key);
    if (key == 'e')
    {
        return(LOOP_END);
    }

    return(ret);
}
