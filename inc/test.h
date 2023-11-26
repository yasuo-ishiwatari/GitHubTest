#ifndef __TEST__
#define __TEST__

#include <stdbool.h>

#define LOOP_CONTINUE 0
#define LOOP_END -1

// sub function
void print_sub(void);
void print_param(void);
void set_int_param(int prm);
void set_bool_param(bool prm);
int main_loop(void);

#endif  // __TEST__
