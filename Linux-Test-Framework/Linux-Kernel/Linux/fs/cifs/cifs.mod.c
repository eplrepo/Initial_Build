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
	{ 0x6f3952e7, __VMLINUX_SYMBOL_STR(crypto_alloc_skcipher) },
	{ 0xad5f92b4, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdf593d15, __VMLINUX_SYMBOL_STR(__fscache_acquire_cookie) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x90e32429, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x102fb6c2, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xa8109599, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x7f660e5a, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xa675804c, __VMLINUX_SYMBOL_STR(utf8s_to_utf16s) },
	{ 0x3e57a69c, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{ 0x22b0ae1a, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0xe439a287, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xf3e8c2c1, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x74ae2835, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x77268a6b, __VMLINUX_SYMBOL_STR(__fscache_wait_on_page_write) },
	{ 0x5c05dfa1, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x6b805816, __VMLINUX_SYMBOL_STR(try_wait_for_completion) },
	{ 0xfbeae5c7, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x95dc1b95, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1d5b82cb, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xc2216417, __VMLINUX_SYMBOL_STR(key_invalidate) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x23ac376d, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0xaaaf4e44, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xf92ed216, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x36e33cdb, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xf4390962, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xc7ec6c27, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x815649e, __VMLINUX_SYMBOL_STR(__generic_file_write_iter) },
	{ 0xddb422af, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0xbaf2fd9f, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0x497d23ba, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x980fa851, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0xb8b043f2, __VMLINUX_SYMBOL_STR(kfree_link) },
	{ 0xc4cdce55, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfffae983, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x78084a20, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x194eecc3, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xccad1a5d, __VMLINUX_SYMBOL_STR(truncate_inode_pages_range) },
	{ 0xd5690dc3, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xdffd2dd8, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xb578698b, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xfacfcb06, __VMLINUX_SYMBOL_STR(lookup_one_len_unlocked) },
	{ 0x7f525cb7, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x7c9d7258, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x4e6d24c3, __VMLINUX_SYMBOL_STR(get_random_u32) },
	{ 0xd77f126b, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x1f95fdd4, __VMLINUX_SYMBOL_STR(sock_recvmsg) },
	{ 0xf13a6c95, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xffd40cb0, __VMLINUX_SYMBOL_STR(__fscache_write_page) },
	{ 0x36849e0f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xd5b03b51, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x346ce609, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xa97fc061, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6833b73d, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x93a5f065, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe2f7e60a, __VMLINUX_SYMBOL_STR(filemap_fdatawait_range) },
	{ 0xfd792e2a, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7cba0812, __VMLINUX_SYMBOL_STR(__fscache_register_netfs) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x8a0f4230, __VMLINUX_SYMBOL_STR(rename_lock) },
	{ 0x70a44bd, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x1824c50, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0xb83c133, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28118cb6, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0x564411a4, __VMLINUX_SYMBOL_STR(super_setup_bdi) },
	{ 0x6c1ce5ce, __VMLINUX_SYMBOL_STR(strcspn) },
	{ 0xeafe7a58, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x953e1b9e, __VMLINUX_SYMBOL_STR(ktime_get_real_seconds) },
	{ 0x39a701c6, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x5c480b34, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9a789277, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x1820da81, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xc5903d94, __VMLINUX_SYMBOL_STR(__fscache_uncache_page) },
	{ 0xdfb56af9, __VMLINUX_SYMBOL_STR(copy_page_from_iter) },
	{ 0xbcd2422, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x27168320, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa3131f6, __VMLINUX_SYMBOL_STR(strnchr) },
	{ 0xb5155cfb, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xcb2893ef, __VMLINUX_SYMBOL_STR(lru_cache_add_file) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x67d487a2, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xb3687850, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x5e1d2f9a, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x73f261ac, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x305a3e4e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xa8344bad, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xd790e760, __VMLINUX_SYMBOL_STR(key_revoke) },
	{ 0xa32c89b4, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xc65e700a, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x625e6bc, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x77cfe13e, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xf4a9e9e7, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x3f560aef, __VMLINUX_SYMBOL_STR(__fscache_read_or_alloc_page) },
	{ 0xa8383ef1, __VMLINUX_SYMBOL_STR(__fscache_uncache_all_inode_pages) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb15c6a85, __VMLINUX_SYMBOL_STR(finish_no_open) },
	{ 0x87ea185d, __VMLINUX_SYMBOL_STR(wait_for_completion_killable) },
	{ 0x2e053047, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x900c673d, __VMLINUX_SYMBOL_STR(copy_page_to_iter) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc3af8863, __VMLINUX_SYMBOL_STR(iov_iter_get_pages) },
	{ 0x817d1dbf, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x8ccaa01c, __VMLINUX_SYMBOL_STR(sock_sendmsg) },
	{ 0xd4d4e2f1, __VMLINUX_SYMBOL_STR(generic_writepages) },
	{ 0xce6c1684, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x8b211f01, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0xbf5cc4cb, __VMLINUX_SYMBOL_STR(iov_iter_kvec) },
	{ 0x64db9a5, __VMLINUX_SYMBOL_STR(mark_mounts_for_expiry) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc8b4d526, __VMLINUX_SYMBOL_STR(__fscache_maybe_release_page) },
	{ 0x5f66a728, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xd8477f69, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7c228d48, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9571e650, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x55555e79, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x165b69b2, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0x22f5786d, __VMLINUX_SYMBOL_STR(unlock_two_nondirectories) },
	{ 0x71a80537, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0x7e8d1bc5, __VMLINUX_SYMBOL_STR(user_describe) },
	{ 0xb1c7f4e2, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xa9f28c50, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0xb927fce, __VMLINUX_SYMBOL_STR(mempool_resize) },
	{ 0x52328124, __VMLINUX_SYMBOL_STR(key_type_logon) },
	{ 0x82c983c2, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x3a144c1d, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xd033d1e9, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x3e3ec986, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x75b9f0e4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xaf6d7a1f, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x6333006e, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x203f9f3f, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0x51ef33b8, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0x4f6041ef, __VMLINUX_SYMBOL_STR(dns_query) },
	{ 0x702ddd32, __VMLINUX_SYMBOL_STR(__fscache_unregister_netfs) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xb2682405, __VMLINUX_SYMBOL_STR(utf8_to_utf32) },
	{ 0x2b2aad10, __VMLINUX_SYMBOL_STR(file_write_and_wait_range) },
	{ 0x3fe8e644, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x997d395a, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x71304953, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x9a4cb0e0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbda2195, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xa5d15443, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0xc188670f, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0xdca99cf5, __VMLINUX_SYMBOL_STR(__filemap_set_wb_err) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x47663070, __VMLINUX_SYMBOL_STR(generic_setlease) },
	{ 0xa728e6f0, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xa814c582, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x684654de, __VMLINUX_SYMBOL_STR(find_get_pages_tag) },
	{ 0xaa6f383, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x58d2273e, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xaccabc6a, __VMLINUX_SYMBOL_STR(in4_pton) },
	{ 0xe1dff2d, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xa88c2173, __VMLINUX_SYMBOL_STR(__d_lookup_done) },
	{ 0xb363791b, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x49be2b8b, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x20dec8ca, __VMLINUX_SYMBOL_STR(deactivate_super) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf15901de, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x4b07f76d, __VMLINUX_SYMBOL_STR(lock_two_nondirectories) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0xb2419b9f, __VMLINUX_SYMBOL_STR(locks_lock_inode_wait) },
	{ 0xa4095ab3, __VMLINUX_SYMBOL_STR(force_sig) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x3b46719f, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x550b7b2e, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0xf4bfa21, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x1e563e66, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x62d30d8f, __VMLINUX_SYMBOL_STR(keyring_alloc) },
	{ 0x76dea657, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x7f722c3d, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0x4c890c25, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x10ed43f0, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x87ac11d6, __VMLINUX_SYMBOL_STR(kstrtobool_from_user) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x73ad200d, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3fa6b28c, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd7905610, __VMLINUX_SYMBOL_STR(__fscache_relinquish_cookie) },
	{ 0x2492d879, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xa5b69865, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0x4b8cb8b5, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x1c655cca, __VMLINUX_SYMBOL_STR(add_to_page_cache_locked) },
	{ 0x8d414410, __VMLINUX_SYMBOL_STR(d_hash_and_lookup) },
	{ 0x1984d421, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd73c7ebb, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xc9fea2, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xf661ccd, __VMLINUX_SYMBOL_STR(posix_unblock_lock) },
	{ 0x6d36d466, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x344cb83a, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x77c90c58, __VMLINUX_SYMBOL_STR(finish_open) },
	{ 0x16854af2, __VMLINUX_SYMBOL_STR(posix_lock_file) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7c2ddb95, __VMLINUX_SYMBOL_STR(__fscache_readpages_cancel) },
	{ 0xf0901f99, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x6068c786, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x15726cd2, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x49bbe1ae, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xed775c78, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xa20d944, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0x8046f2f8, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0xa12520d6, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x21f032fe, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x16ebd870, __VMLINUX_SYMBOL_STR(vfs_submount) },
	{ 0xd6acb2c1, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x4cb96dc2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x4cd615d5, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xefc3b616, __VMLINUX_SYMBOL_STR(__break_lease) },
	{ 0x22d325d, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x2a628db, __VMLINUX_SYMBOL_STR(proc_create) },
	{ 0x3d02e3ba, __VMLINUX_SYMBOL_STR(mnt_set_expiry) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xa37e1a, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xaac2114e, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x4de985a6, __VMLINUX_SYMBOL_STR(__fscache_read_or_alloc_pages) },
	{ 0xe7d71645, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xf1e2057a, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xd840c793, __VMLINUX_SYMBOL_STR(_copy_to_iter) },
	{ 0x655e5b8, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xc7c5b76f, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x8d09056, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x6644b92e, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x73cb4511, __VMLINUX_SYMBOL_STR(d_alloc_parallel) },
	{ 0x1a952a83, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xda28b622, __VMLINUX_SYMBOL_STR(__sock_create) },
	{ 0xcd45afaf, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x200cefc9, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xcaf3b277, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0x891d420f, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0xe5311652, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xf1fc7dd9, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
	{ 0xd5267f72, __VMLINUX_SYMBOL_STR(posix_test_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BC4287FC58DF48217631201");