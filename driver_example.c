#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init driver_example_init(void)
{
    printk("Init function\n");
    return 0;
}

static void __exit driver_example_exit(void)
{
    printk("Exit function\n");
}

module_init(driver_example_init);
module_exit(driver_example_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jonathan Gonzaga");
MODULE_DESCRIPTION("Driver example for Raspberry Pi 3");
MODULE_VERSION("1.0");
