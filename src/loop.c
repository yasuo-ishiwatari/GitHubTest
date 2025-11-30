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
        return;
    }
    // set param
    printf("param1 = ");
    int param11;
    scanf("%d",&param11);
    // disp param
    print_param();
  
    char dummy;
    // scanf(...);
    scanf("%c",&dummy);    //前に押された'\n'がはいる

    printf("connit-7 on test9");


}
