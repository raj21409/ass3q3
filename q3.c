#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>


static int __init process_info_init(void)
{
    
    struct task_struct *task = current;

   
    printk(KERN_INFO "Process name: %s\n", task->comm);
    printk(KERN_INFO "Process ID: %d\n", task->pid);
    printk(KERN_INFO "Process state: %ld\n", task->state);
    printk(KERN_INFO "Process priority: %d\n", task->prio);

    return 0;
}


static void __exit process_info_exit(void)
{
    
}

module_init(process_info_init);
module_exit(process_info_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("John Doe");
MODULE_DESCRIPTION("A kernel module to print information about a process");
