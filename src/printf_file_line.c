#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int main (int argc, char * argv[])
{ 
    for (int i = 0; i < 10; i++)
    {
        time_t t = time (NULL);
        struct tm * tp = localtime(&t);
        
        char * ascii_time = asctime(tp);
        *(strchr (ascii_time, '\n')) = '\0';
    
        printf("[%s] %s: %s: %u: %s\n", ascii_time, __FILE__, __func__, __LINE__, "SomeLogString"); 
        
        sleep(1);
    }

    return 0;
}
