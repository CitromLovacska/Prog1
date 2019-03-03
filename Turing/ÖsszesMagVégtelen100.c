#include <unistd.h>

int main()
{
	int a,b,c;
	if(!(a=fork()))
	{
		for(;;);
	}
	if(!(b=fork()))
	{
		for(;;);
	}
	if(!(c=fork()))
	{
		for(;;);
	}
	for(;;);
}
