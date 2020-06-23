#include <stdio.h>
#include <stdlib.h>


int main()
{
    int ret = 0;

    /* THE standard print mechanism for C.  This prints
     * to whats called "stdout" or "standard out", which
     * by default, prints to your terminal, or shell.
     *
     * The "\n" is a newline which causes the output to
     * jump to the beginning of the next line.
     */
    printf("hello, world\n");       // Print "hello, world" to the terminal

    return ret;
}


/*
 * -----------------------------------------------
 * More advanced compile from the command line
 * 
 * g++ -Wall -Wextra -O0 -g ./01_add_a_printf.c -o 01_add_printf
 *
 * Options added since in the call above:
 *     -Wall                Show more warnings
 *     -Wextra              Show even more warnings
 *     -O0                  Set optimization to 0, habit I'm in when I plan to use the debugger
 *     -g                   Enable symbols to use with debugging
 *     -o 01_add_printf     Instead of creating a.out, specify the name of the output (hence -o for output)
 */
