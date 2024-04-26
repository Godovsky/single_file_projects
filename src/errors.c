#include <stdio.h>
#include <string.h>

int main (int argc, char * argv[])
{
    for (int i = 0; i < 255; i++)
    {
        printf("%*d: %s\n", 4, i, strerror(i));
    }
    
    
    return 0;
}
