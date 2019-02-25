#include <stdio.h>
#include <signal.h>

void jelkezelo (int sig)
{
	printf (" Jel elkapva. %d\n", sig);
}

int main ()
{
	if (signal (SIGINT, SIG_IGN) != SIG_IGN)
	{
	signal (SIGINT, jelkezelo);
	}
	while (1);
	return 0;
}
