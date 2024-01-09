#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	printf("Hello SIET!\n PID = %d\n",getpid());
	return 0;
}
