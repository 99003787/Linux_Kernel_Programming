#include <unistd.h>
#include <stdio.h>
#define __CR_testcall 399
int main()
{
	int ret;
        ret=syscall( __CR_testcall,60,70,80,90);
	printf("%d",ret);
	if(ret<0)
	perror("testcall");
	return 0;
}
