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
	{ 0x90e32429, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x102fb6c2, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xa8109599, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x7f660e5a, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x3e57a69c, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xe439a287, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xf82cdcb5, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x74ae2835, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x5c05dfa1, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x6f7f1a6f, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x95dc1b95, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1d5b82cb, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xaaaf4e44, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x95ac56ad, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0x980fa851, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x1d8e2e9c, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x4e68e9be, __VMLINUX_SYMBOL_STR(rb_next_postorder) },
	{ 0x78084a20, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xb4a9855a, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x194eecc3, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xe5785f57, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xd9eb8ddc, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xb578698b, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x5e866d85, __VMLINUX_SYMBOL_STR(prandom_bytes) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x7c9d7258, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xd77f126b, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x9b0463ee, __VMLINUX_SYMBOL_STR(ubi_open_volume) },
	{ 0xf13a6c95, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xee91879b, __VMLINUX_SYMBOL_STR(rb_first_postorder) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x346ce609, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6833b73d, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x1824c50, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0xb83c133, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x2c346f30, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x60ceba45, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x27168320, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xd1ae5f77, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb5155cfb, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x7f23a6b3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x67d487a2, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x348dd463, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0x5e1d2f9a, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x305a3e4e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1c66a3, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x967ca529, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe6932195, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4a316791, __VMLINUX_SYMBOL_STR(ubi_leb_map) },
	{ 0x77cfe13e, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xb03c827f, __VMLINUX_SYMBOL_STR(ubi_open_volume_nm) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x2e053047, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf14c5dcc, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6197abcf, __VMLINUX_SYMBOL_STR(write_inode_now) },
	{ 0x50c10b84, __VMLINUX_SYMBOL_STR(ubi_leb_change) },
	{ 0xce6c1684, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x413fddab, __VMLINUX_SYMBOL_STR(ubi_leb_write) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x5f66a728, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x8ffdb3b8, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x7c228d48, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9571e650, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x5cfdd22d, __VMLINUX_SYMBOL_STR(ubi_get_device_info) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xe1f6ec3f, __VMLINUX_SYMBOL_STR(ubi_leb_read) },
	{ 0x3a144c1d, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xd033d1e9, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x3e3ec986, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x75b9f0e4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x32ca2387, __VMLINUX_SYMBOL_STR(migrate_page_move_mapping) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x9cfad0aa, __VMLINUX_SYMBOL_STR(ubi_leb_unmap) },
	{ 0x2b2aad10, __VMLINUX_SYMBOL_STR(file_write_and_wait_range) },
	{ 0x3fe8e644, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x71304953, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x97ea65ee, __VMLINUX_SYMBOL_STR(ubi_close_volume) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x9f55723, __VMLINUX_SYMBOL_STR(xattr_full_name) },
	{ 0x9a4cb0e0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9d0df00e, __VMLINUX_SYMBOL_STR(ilookup) },
	{ 0xf7a71c, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xa5d15443, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0xb57de5c1, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0xa728e6f0, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xa814c582, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xb363791b, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x49be2b8b, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x3b46719f, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf4bfa21, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xa30c4596, __VMLINUX_SYMBOL_STR(ubi_get_volume_info) },
	{ 0xc565d44a, __VMLINUX_SYMBOL_STR(migrate_page_states) },
	{ 0x76dea657, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0x4c890c25, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x41814cb8, __VMLINUX_SYMBOL_STR(dirty_writeback_interval) },
	{ 0x73ad200d, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x702467d3, __VMLINUX_SYMBOL_STR(d_tmpfile) },
	{ 0x3fa6b28c, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xefb8fc9f, __VMLINUX_SYMBOL_STR(ubi_open_volume_path) },
	{ 0xa5b69865, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x42801d20, __VMLINUX_SYMBOL_STR(ubi_sync) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd73c7ebb, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x1936ddf5, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0x344cb83a, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x28d6861d, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8b4eeaad, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x15726cd2, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x9c643fab, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xce58dc69, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xbe3ecd7d, __VMLINUX_SYMBOL_STR(ubi_is_mapped) },
	{ 0x8046f2f8, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xa12520d6, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xd6acb2c1, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x4cb96dc2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6d3cd3d5, __VMLINUX_SYMBOL_STR(writeback_inodes_sb) },
	{ 0x4cd615d5, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4a7aa211, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x22d325d, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7706f926, __VMLINUX_SYMBOL_STR(empty_aops) },
	{ 0xa37e1a, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xaac2114e, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0xf1e2057a, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x655e5b8, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xc7c5b76f, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x8d09056, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x1a952a83, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xcd45afaf, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xbd25d179, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0xcaf3b277, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0x2d0ed18b, __VMLINUX_SYMBOL_STR(migrate_page_copy) },
	{ 0x891d420f, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x362f3b0d, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xda8456b5, __VMLINUX_SYMBOL_STR(super_setup_bdi_name) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ubi";


MODULE_INFO(srcversion, "F75E6E70D36342FE6863CF2");