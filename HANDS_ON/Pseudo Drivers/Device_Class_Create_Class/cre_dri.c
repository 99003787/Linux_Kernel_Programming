#include <linux/fs.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
dev_t pdevid;
int nofdev=1;
static int psuedo_init(void)
{
int ret;
ret=alloc_chrdev_region(&pdevid, 0, nofdev, "pseudo_sample");
if(ret) {
printk("Pseudo: Failed to register driver\n");
return -EINVAL;
}
printk("Successfully registered,major=%d,minor=%d\n",
MAJOR(pdevid), MINOR(pdevid));
printk("Pseudo Driver Sample..welcome\n");
return 0;
}
static void psuedo_exit(void) {
unregister_chrdev_region(pdevid, nofdev);
printk("Pseudo Driver Sample unregistered..Bye\n");
}
module_init(psuedo_init);
module_exit(psuedo_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("sravan kumar");
MODULE_DESCRIPTION("A Simple device creation Module");
