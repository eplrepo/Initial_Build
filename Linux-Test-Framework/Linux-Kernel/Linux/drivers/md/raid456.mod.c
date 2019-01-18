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
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x4d3c153f, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0xa3f86ddf, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x53326531, __VMLINUX_SYMBOL_STR(mempool_alloc_pages) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xcfe0785a, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x90e32429, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xa8109599, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x75d87f97, __VMLINUX_SYMBOL_STR(__cpuhp_remove_state) },
	{ 0x28482544, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xc4f83bf1, __VMLINUX_SYMBOL_STR(async_raid6_datap_recov) },
	{ 0xb5c9d50b, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xc90407b2, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x4a07d4d4, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x95dc1b95, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x151f4898, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0x70752a38, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x36040282, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0xad73041f, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xb97075c2, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xe6646b46, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0x36ba63a3, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_remap) },
	{ 0x1c20f9b6, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x1f414826, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x5c0cc537, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xf13a6c95, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xacf7679, __VMLINUX_SYMBOL_STR(dma_issue_pending_all) },
	{ 0x325142bb, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xd5b03b51, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x8484c4a3, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x28afa7ad, __VMLINUX_SYMBOL_STR(async_syndrome_val) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc283695a, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x93a5f065, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xff4579e1, __VMLINUX_SYMBOL_STR(blk_queue_max_write_zeroes_sectors) },
	{ 0x28e2cb20, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7a2e807f, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x1820da81, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xa45ce34f, __VMLINUX_SYMBOL_STR(md_write_inc) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x7f23a6b3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x4e810d22, __VMLINUX_SYMBOL_STR(cpumask_next) },
	{ 0x2ab9a0a4, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xd4d7a32, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x17de3d5, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xc368ae24, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x46b24028, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd4cb6873, __VMLINUX_SYMBOL_STR(raid6_call) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdefa346c, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x41a026b1, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0x3ee589e2, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6c49fc55, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdcab5c07, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xff771bd, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x706c4c74, __VMLINUX_SYMBOL_STR(md_update_sb) },
	{ 0xd51852ab, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x34b3727c, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0x1789652f, __VMLINUX_SYMBOL_STR(async_raid6_2data_recov) },
	{ 0xa53012, __VMLINUX_SYMBOL_STR(bio_clone_fast) },
	{ 0xe278e9c6, __VMLINUX_SYMBOL_STR(async_trigger_callback) },
	{ 0x8450b494, __VMLINUX_SYMBOL_STR(__cpuhp_state_add_instance) },
	{ 0x9e4d251, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xd53b5cc8, __VMLINUX_SYMBOL_STR(blkdev_issue_zeroout) },
	{ 0x818c01dc, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xb869ebfe, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x82e60172, __VMLINUX_SYMBOL_STR(__tracepoint_block_unplug) },
	{ 0x98e06e0b, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xd985dc99, __VMLINUX_SYMBOL_STR(mempool_free_pages) },
	{ 0x7c228d48, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x40358929, __VMLINUX_SYMBOL_STR(async_memcpy) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xd2e9487e, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xe299b8ed, __VMLINUX_SYMBOL_STR(__cpuhp_setup_state) },
	{ 0xeff73571, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x938999db, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x5443913b, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x67bf9f54, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xfa496411, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0xf0cad007, __VMLINUX_SYMBOL_STR(kthread_unpark) },
	{ 0x40439a23, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xbbaec3ef, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xa5177fe2, __VMLINUX_SYMBOL_STR(async_xor_val) },
	{ 0x9a4cb0e0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9a84cce3, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x425dc127, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0xe8ad0731, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xa35ff0cb, __VMLINUX_SYMBOL_STR(radix_tree_replace_slot) },
	{ 0xf7a71c, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xbda2195, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xddb1cd7, __VMLINUX_SYMBOL_STR(llist_reverse_order) },
	{ 0x2e50e113, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x7958f0b5, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x650e4a99, __VMLINUX_SYMBOL_STR(__trace_note_message) },
	{ 0x95b6c658, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x3cfa8ed7, __VMLINUX_SYMBOL_STR(radix_tree_lookup_slot) },
	{ 0xcf3528ec, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xe2510397, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x35c0dec1, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xe1dff2d, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x51cb7df0, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9fd3a319, __VMLINUX_SYMBOL_STR(__cpuhp_state_remove_instance) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xcf3d349c, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x2fb2c9f0, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xb61cab7b, __VMLINUX_SYMBOL_STR(__radix_tree_insert) },
	{ 0x9a2379af, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x4c890c25, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x10ed43f0, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x55f5d724, __VMLINUX_SYMBOL_STR(kthread_park) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x73ad200d, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd0ab4b6f, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x78909096, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x4e7fe847, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0x2f470b4a, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x287d73f4, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6f5696fb, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9c643fab, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xe878546b, __VMLINUX_SYMBOL_STR(__cpu_present_mask) },
	{ 0xd4b07b71, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb86d6479, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x722613d8, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1837ffd5, __VMLINUX_SYMBOL_STR(mddev_init_writes_pending) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x1e83ff34, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x9b59862b, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x1a952a83, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x76605447, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
	{ 0x337a2a75, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0xa1250461, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_raid6_recov,md-mod,async_pq,raid6_pq,async_tx,async_memcpy,async_xor";


MODULE_INFO(srcversion, "2103705F1BD2D232087A50F");