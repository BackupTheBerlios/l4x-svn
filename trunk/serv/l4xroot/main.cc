#include <l4io.h>
#include <l4/kdebug.h>

int main (void)
{
    printf ("Hello world, this is L4X rootserver.\n");

    enter_kdebug();

    for (;;);
    return 0;
}
