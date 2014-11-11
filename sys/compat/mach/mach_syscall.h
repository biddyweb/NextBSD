/*
 * System call numbers.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 * created from	FreeBSD
 */

#define	MACH_SYS__kernelrpc_mach_vm_allocate_trap	10
#define	MACH_SYS__kernelrpc_mach_vm_deallocate_trap	12
#define	MACH_SYS__kernelrpc_mach_vm_protect_trap	14
#define	MACH_SYS__kernelrpc_mach_vm_map_trap	15
#define	MACH_SYS__kernelrpc_mach_port_allocate_trap	16
#define	MACH_SYS__kernelrpc_mach_port_destroy_trap	17
#define	MACH_SYS__kernelrpc_mach_port_deallocate_trap	18
#define	MACH_SYS__kernelrpc_mach_port_mod_refs_trap	19
#define	MACH_SYS__kernelrpc_mach_port_move_member_trap	20
#define	MACH_SYS__kernelrpc_mach_port_insert_right_trap	21
#define	MACH_SYS__kernelrpc_mach_port_insert_member_trap	22
#define	MACH_SYS__kernelrpc_mach_port_extract_member_trap	23
#define	MACH_SYS__kernelrpc_mach_port_construct_trap	24
#define	MACH_SYS__kernelrpc_mach_port_destruct_trap	25
#define	MACH_SYS_mach_reply_port	26
#define	MACH_SYS_mach_thread_self_trap	27
#define	MACH_SYS_mach_task_self_trap	28
#define	MACH_SYS_mach_host_self_trap	29
#define	MACH_SYS_mach_msg_trap	31
#define	MACH_SYS_mach_msg_overwrite_trap	32
#define	MACH_SYS_mach_semaphore_signal_trap	33
#define	MACH_SYS_mach_semaphore_signal_all_trap	34
#define	MACH_SYS_mach_semaphore_signal_thread_trap	35
#define	MACH_SYS_mach_semaphore_wait_trap	36
#define	MACH_SYS_mach_semaphore_wait_signal_trap	37
#define	MACH_SYS_mach_semaphore_timedwait_trap	38
#define	MACH_SYS_mach_semaphore_timedwait_signal_trap	39
#define	MACH_SYS__kernelrpc_mach_port_guard_trap	41
#define	MACH_SYS__kernelrpc_mach_port_unguard_trap	42
				/* 43 is obsolete { */
#define	MACH_SYS_mach_task_name_for_pid	44
#define	MACH_SYS_mach_task_for_pid	45
#define	MACH_SYS_mach_pid_for_task	46
#define	MACH_SYS_mach_macx_swapon	48
#define	MACH_SYS_mach_macx_swapoff	49
#define	MACH_SYS_mach_macx_triggers	51
#define	MACH_SYS_mach_macx_backing_store_suspend	52
#define	MACH_SYS_mach_macx_backing_store_recovery	53
#define	MACH_SYS_mach_swtch_pri	59
#define	MACH_SYS_mach_swtch	60
#define	MACH_SYS_mach_thread_switch	61
#define	MACH_SYS_mach_clock_sleep_trap	62
#define	MACH_SYS_mach_timebase_info	89
#define	MACH_SYS_mach_wait_until	90
#define	MACH_SYS_mk_timer_create	91
#define	MACH_SYS_mk_timer_destroy	92
#define	MACH_SYS_mk_timer_arm	93
#define	MACH_SYS_mk_timer_cancel	94
#define	MACH_SYS_MAXSYSCALL	128
