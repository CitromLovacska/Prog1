#include <stdio.h>
#include <omp.h>

int main ()
{
	#pragma omp parallel
	{
	for ( ; ; )
		{
		printf("Ez egy végtelen ciklus.\n");
		}
	}
	return 0;
}
