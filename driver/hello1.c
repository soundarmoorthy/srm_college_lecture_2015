#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/interrupt.h>
#include <asm/io.h>
#include <asm/irq_vectors.h>

MODULE_LICENSE("Dual BSD/GPL");

irq_handler_t irq_handler(int irq, void *dev_id, struct pt_regs *regs)
{
    static unsigned char scancode;
    scancode = inb(0x60);
    printk("\n You pressed %d", scancode);
    return (irq_handler_t) IRQ_HANDLED;
}

static int hello1_init(void) {
  printk("<1> Hello SRM, I am registeredd\n");
  return request_irq(1, (irq_handler_t)irq_handler, IRQF_SHARED, "test_keyboard_irq_handler", (void*)(irq_handler));
}

static void hello1_exit(void) {
  printk("<1> Bye Bye SRM\n");
}

module_init(hello1_init);
module_exit(hello1_exit);
