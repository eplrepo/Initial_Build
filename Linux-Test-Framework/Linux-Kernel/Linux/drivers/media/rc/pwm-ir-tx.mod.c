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
	{ 0x934c6be5, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x24218f92, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x534dd61c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9ade2551, __VMLINUX_SYMBOL_STR(devm_rc_register_device) },
	{ 0xfa91e9d2, __VMLINUX_SYMBOL_STR(devm_rc_allocate_device) },
	{ 0x7705e2f9, __VMLINUX_SYMBOL_STR(devm_pwm_get) },
	{ 0x16396722, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xae829df1, __VMLINUX_SYMBOL_STR(pwm_apply_state) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x7adeb8d4, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cpwm-ir-tx");
MODULE_ALIAS("of:N*T*Cpwm-ir-txC*");

MODULE_INFO(srcversion, "0E7007E48C27718A45A2748");