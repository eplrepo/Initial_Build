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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1a63d5ea, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xac437f7b, __VMLINUX_SYMBOL_STR(snd_interval_ratnum) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x24218f92, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x8428cb8a, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x534dd61c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeb9461ea, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x90d57597, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x3d776c16, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x7ec5844a, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0x7095faf8, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x25bac302, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0x2e9f0358, __VMLINUX_SYMBOL_STR(snd_soc_limit_volume) },
	{ 0x934c6be5, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x16396722, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x566ea6f, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplus");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusC*");

MODULE_INFO(srcversion, "123D9A91862494D340A3260");