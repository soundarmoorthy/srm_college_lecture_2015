#include <unistd.h>
#include <stdio.h>

void main()
{
    while(1)
    {
        printf("\n\nstart sleep");
        sleep(2);
        printf("\nsleeped for a while");
        long i=1;
	printf("\n\nstart work");
        while(++i <= 1147483647)
        {
        } 
        printf("\nworked for a while");
    }
}
