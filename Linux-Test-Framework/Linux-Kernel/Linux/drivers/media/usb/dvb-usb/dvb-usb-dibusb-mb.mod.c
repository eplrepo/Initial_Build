#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x13e75575, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xb47559e0, __VMLINUX_SYMBOL_STR(rc_map_dibusb_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa3a26751, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0xbfad0ca9, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0x273ad463, __VMLINUX_SYMBOL_STR(dibusb_rc_query) },
	{ 0xf26e7600, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xea3a6060, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0x66e2e466, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x82b04bfc, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4236a820, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x7b9b40c, __VMLINUX_SYMBOL_STR(dibusb_power_ctrl) },
	{ 0xd41d8004, __VMLINUX_SYMBOL_STR(dibusb_streaming_ctrl) },
	{ 0x9c74279b, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xad844ddb, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0x6897ade, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe06960ad, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0x18d8a80d, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb";

MODULE_ALIAS("usb:v14AAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185BpD000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185BpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BB8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BB9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap17DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap17DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0FA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0FA1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BB8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BB9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1025p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1025p005Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p3201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p3202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pA333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pA334d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p701Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p701Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB2Ap17DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "219082261B406D465F0736E");