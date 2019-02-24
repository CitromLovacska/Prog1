#include <stdio.h>
#include <unistd.h>

int main ()
{
	for ( ; ; )
	{
	sleep (1);
	printf("Ez egy végtelen ciklus.\n");
	}
	return 0;
}
