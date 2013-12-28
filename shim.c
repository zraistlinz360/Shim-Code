#include <linux/init.h>
#include <linux/module.h>//
#include <net/tcp.h>//

int tcp_register_interface(struct tcp_congestion_ops *ca)
{
	return tcp_register_congestion_control(ca);
}
EXPORT_SYMBOL(tcp_register_interface);

void tcp_unregister_interface(struct tcp_congestion_ops *ca)
{	
	tcp_unregister_congestion_control(ca);
}
EXPORT_SYMBOL(tcp_unregister_interface);

MODULE_AUTHOR("TCP Engines");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TCP INTERFACE");
