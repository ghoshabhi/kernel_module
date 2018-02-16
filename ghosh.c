/* Author: Abhishek Ghosh  */

#undef __KERNEL__
#define __KERNEL__

#undef MODULE
#define MODULE

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init ghosh_init(void)
{
    printk("LOADING ghosh_module, written by Abhishek Ghosh(tu7736) !!");
    return 0;
}

static void __exit ghosh_cleanup(void)
{
    printk(KERN_INFO, "UNLOADING ghosh_module, written by Abhishek GHosh(tu7736) !!");
}

module_init(ghosh_init);
module_exit(ghosh_cleanup);
