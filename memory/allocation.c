
#include  <malloc.h>
#include <unistd.h>

static void* pointers[2048];
void main()
{
     int i=0;
     while(1)
     {
        pointers[i++] =  malloc(1024);
        sleep(0.5f);
     }
}
