#include <linux/module.h>
#include <linux/init.h>
MODULE_LICENSE("GPL");

static int __init simplest_init(void)
{
	printk("Hello World! And I am the simplest kernel module.\n");
	return 0;
}

static void __exit simplest_exit(void)
{
	printk("Bye World! And I am the simplest kernel module.\n");
}

module_init(simplest_init);
module_exit(simplest_exit);