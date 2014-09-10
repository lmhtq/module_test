#include <linux/module.h>
#include <linux/init.h>
MODULE_LICENSE("GPL");

static int simplest_init(void)
{
	printk(KERN_INFO"Hello World! And I am the simplest kernel module.\n");
	return 0;
}

static void simplest_exit(void)
{
	printk(KERN_INFO"Bye World! And I am the simplest kernel module.\n");
}

module_init(simplest_init);
module_exit(simplest_exit);