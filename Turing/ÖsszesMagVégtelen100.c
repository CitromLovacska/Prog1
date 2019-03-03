#include <unistd.h>

int main()
{
	int a1,a2,a3;
	if(!(a1=fork()))
	{
		for(;;);
	}
	if(!(a2=fork()))
	{
		for(;;);
	}
	if(!(a3=fork()))
	{
		for(;;);
	}
	for(;;);
}
