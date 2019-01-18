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
	{ 0x1e6e4c, __VMLINUX_SYMBOL_STR(xfrm4_prepare_output) },
	{ 0xee5ece71, __VMLINUX_SYMBOL_STR(xfrm_prepare_input) },
	{ 0xa81b7c6d, __VMLINUX_SYMBOL_STR(xfrm_unregister_mode) },
	{ 0xb181998f, __VMLINUX_SYMBOL_STR(xfrm_register_mode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf4c95eee, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x27abb53d, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0x46a499a3, __VMLINUX_SYMBOL_STR(skb_mac_gso_segment) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7c5b837a, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F79BDB71B07DA958A734B92");