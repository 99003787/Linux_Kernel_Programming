#include<linux/kernel.h>
#include<linux/syscalls.h>
SYSCALL_DEFINE7(mysyscallparam,int,s,int,t,int,u,int,v)
{
	printk("This is Test call x=%d y=%d" ,s,t,u,v;
	return s,t,u,v;
}
