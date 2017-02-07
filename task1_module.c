#include <linux/module.h>
#include <linux/kernel.h>

#define AUTHOR "Gabriel Reus Rodríguez"
#define DESCRIPTION "Eudyptula Task01"
#define LICENSE "GPL"
#define VERSION "0.1"

int inicio(void)
{

	printk(KERN_INFO "Hello World my id is: 7049f76c2121.\n");
	return 0;
}

void salida(void)
{
	printk(KERN_INFO "Bye World my id is: 7049f76c2121.\n");
}

module_init(inicio);
module_exit(salida);

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESCRIPTION);
MODULE_VERSION(VERSION);
