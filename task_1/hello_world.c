#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

static int __init hello_world_init(void) {
  printk(KERN_DEBUG "Hello World!\n");
  return 0;
}

static void __exit hello_world_exit(void) {
  printk(KERN_DEBUG "Exiting Hello World Module.\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);
