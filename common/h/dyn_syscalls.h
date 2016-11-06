/* This file was autogenerated from syscalls/generateSyscallInformation.py */
#if !defined(DYN_SYSCALLS_H_)
#define DYN_SYSCALLS_H_

namespace Dyninst {
namespace Syscall {
enum {
  // Linux/Arch_ppc64/unistd.h.20130604
  dyn_restart_syscall,
  dyn_exit,
  dyn_fork,
  dyn_read,
  dyn_write,
  dyn_open,
  dyn_close,
  dyn_waitpid,
  dyn_creat,
  dyn_link,
  dyn_unlink,
  dyn_execve,
  dyn_chdir,
  dyn_time,
  dyn_mknod,
  dyn_chmod,
  dyn_lchown,
  dyn_break,
  dyn_oldstat,
  dyn_lseek,
  dyn_getpid,
  dyn_mount,
  dyn_umount,
  dyn_setuid,
  dyn_getuid,
  dyn_stime,
  dyn_ptrace,
  dyn_alarm,
  dyn_oldfstat,
  dyn_pause,
  dyn_utime,
  dyn_stty,
  dyn_gtty,
  dyn_access,
  dyn_nice,
  dyn_ftime,
  dyn_sync,
  dyn_kill,
  dyn_rename,
  dyn_mkdir,
  dyn_rmdir,
  dyn_dup,
  dyn_pipe,
  dyn_times,
  dyn_prof,
  dyn_brk,
  dyn_setgid,
  dyn_getgid,
  dyn_signal,
  dyn_geteuid,
  dyn_getegid,
  dyn_acct,
  dyn_umount2,
  dyn_lock,
  dyn_ioctl,
  dyn_fcntl,
  dyn_mpx,
  dyn_setpgid,
  dyn_ulimit,
  dyn_oldolduname,
  dyn_umask,
  dyn_chroot,
  dyn_ustat,
  dyn_dup2,
  dyn_getppid,
  dyn_getpgrp,
  dyn_setsid,
  dyn_sigaction,
  dyn_sgetmask,
  dyn_ssetmask,
  dyn_setreuid,
  dyn_setregid,
  dyn_sigsuspend,
  dyn_sigpending,
  dyn_sethostname,
  dyn_setrlimit,
  dyn_getrlimit,
  dyn_getrusage,
  dyn_gettimeofday,
  dyn_settimeofday,
  dyn_getgroups,
  dyn_setgroups,
  dyn_select,
  dyn_symlink,
  dyn_oldlstat,
  dyn_readlink,
  dyn_uselib,
  dyn_swapon,
  dyn_reboot,
  dyn_readdir,
  dyn_mmap,
  dyn_munmap,
  dyn_truncate,
  dyn_ftruncate,
  dyn_fchmod,
  dyn_fchown,
  dyn_getpriority,
  dyn_setpriority,
  dyn_profil,
  dyn_statfs,
  dyn_fstatfs,
  dyn_ioperm,
  dyn_socketcall,
  dyn_syslog,
  dyn_setitimer,
  dyn_getitimer,
  dyn_stat,
  dyn_lstat,
  dyn_fstat,
  dyn_olduname,
  dyn_iopl,
  dyn_vhangup,
  dyn_idle,
  dyn_vm86,
  dyn_wait4,
  dyn_swapoff,
  dyn_sysinfo,
  dyn_ipc,
  dyn_fsync,
  dyn_sigreturn,
  dyn_clone,
  dyn_setdomainname,
  dyn_uname,
  dyn_modify_ldt,
  dyn_adjtimex,
  dyn_mprotect,
  dyn_sigprocmask,
  dyn_create_module,
  dyn_init_module,
  dyn_delete_module,
  dyn_get_kernel_syms,
  dyn_quotactl,
  dyn_getpgid,
  dyn_fchdir,
  dyn_bdflush,
  dyn_sysfs,
  dyn_personality,
  dyn_afs_syscall,
  dyn_setfsuid,
  dyn_setfsgid,
  dyn__llseek,
  dyn_getdents,
  dyn__newselect,
  dyn_flock,
  dyn_msync,
  dyn_readv,
  dyn_writev,
  dyn_getsid,
  dyn_fdatasync,
  dyn__sysctl,
  dyn_mlock,
  dyn_munlock,
  dyn_mlockall,
  dyn_munlockall,
  dyn_sched_setparam,
  dyn_sched_getparam,
  dyn_sched_setscheduler,
  dyn_sched_getscheduler,
  dyn_sched_yield,
  dyn_sched_get_priority_max,
  dyn_sched_get_priority_min,
  dyn_sched_rr_get_interval,
  dyn_nanosleep,
  dyn_mremap,
  dyn_setresuid,
  dyn_getresuid,
  dyn_query_module,
  dyn_poll,
  dyn_nfsservctl,
  dyn_setresgid,
  dyn_getresgid,
  dyn_prctl,
  dyn_rt_sigreturn,
  dyn_rt_sigaction,
  dyn_rt_sigprocmask,
  dyn_rt_sigpending,
  dyn_rt_sigtimedwait,
  dyn_rt_sigqueueinfo,
  dyn_rt_sigsuspend,
  dyn_pread64,
  dyn_pwrite64,
  dyn_chown,
  dyn_getcwd,
  dyn_capget,
  dyn_capset,
  dyn_sigaltstack,
  dyn_sendfile,
  dyn_getpmsg,
  dyn_putpmsg,
  dyn_vfork,
  dyn_ugetrlimit,
  dyn_readahead,
  dyn_pciconfig_read,
  dyn_pciconfig_write,
  dyn_pciconfig_iobase,
  dyn_multiplexer,
  dyn_getdents64,
  dyn_pivot_root,
  dyn_madvise,
  dyn_mincore,
  dyn_gettid,
  dyn_tkill,
  dyn_setxattr,
  dyn_lsetxattr,
  dyn_fsetxattr,
  dyn_getxattr,
  dyn_lgetxattr,
  dyn_fgetxattr,
  dyn_listxattr,
  dyn_llistxattr,
  dyn_flistxattr,
  dyn_removexattr,
  dyn_lremovexattr,
  dyn_fremovexattr,
  dyn_futex,
  dyn_sched_setaffinity,
  dyn_sched_getaffinity,
  dyn_tuxcall,
  dyn_io_setup,
  dyn_io_destroy,
  dyn_io_getevents,
  dyn_io_submit,
  dyn_io_cancel,
  dyn_set_tid_address,
  dyn_fadvise64,
  dyn_exit_group,
  dyn_lookup_dcookie,
  dyn_epoll_create,
  dyn_epoll_ctl,
  dyn_epoll_wait,
  dyn_remap_file_pages,
  dyn_timer_create,
  dyn_timer_settime,
  dyn_timer_gettime,
  dyn_timer_getoverrun,
  dyn_timer_delete,
  dyn_clock_settime,
  dyn_clock_gettime,
  dyn_clock_getres,
  dyn_clock_nanosleep,
  dyn_swapcontext,
  dyn_tgkill,
  dyn_utimes,
  dyn_statfs64,
  dyn_fstatfs64,
  dyn_rtas,
  dyn_sys_debug_setcontext,
  dyn_migrate_pages,
  dyn_mbind,
  dyn_get_mempolicy,
  dyn_set_mempolicy,
  dyn_mq_open,
  dyn_mq_unlink,
  dyn_mq_timedsend,
  dyn_mq_timedreceive,
  dyn_mq_notify,
  dyn_mq_getsetattr,
  dyn_kexec_load,
  dyn_add_key,
  dyn_request_key,
  dyn_keyctl,
  dyn_waitid,
  dyn_ioprio_set,
  dyn_ioprio_get,
  dyn_inotify_init,
  dyn_inotify_add_watch,
  dyn_inotify_rm_watch,
  dyn_spu_run,
  dyn_spu_create,
  dyn_pselect6,
  dyn_ppoll,
  dyn_unshare,
  dyn_splice,
  dyn_tee,
  dyn_vmsplice,
  dyn_openat,
  dyn_mkdirat,
  dyn_mknodat,
  dyn_fchownat,
  dyn_futimesat,
  dyn_newfstatat,
  dyn_unlinkat,
  dyn_renameat,
  dyn_linkat,
  dyn_symlinkat,
  dyn_readlinkat,
  dyn_fchmodat,
  dyn_faccessat,
  dyn_get_robust_list,
  dyn_set_robust_list,
  dyn_move_pages,
  dyn_getcpu,
  dyn_epoll_pwait,
  dyn_utimensat,
  dyn_signalfd,
  dyn_timerfd_create,
  dyn_eventfd,
  dyn_sync_file_range2,
  dyn_fallocate,
  dyn_subpage_prot,
  dyn_timerfd_settime,
  dyn_timerfd_gettime,
  dyn_signalfd4,
  dyn_eventfd2,
  dyn_epoll_create1,
  dyn_dup3,
  dyn_pipe2,
  dyn_inotify_init1,
  // Linux/Arch_ppc32/unistd.h.20130604
  dyn_mmap2,
  dyn_truncate64,
  dyn_ftruncate64,
  dyn_stat64,
  dyn_lstat64,
  dyn_fstat64,
  dyn_fcntl64,
  dyn_sendfile64,
  dyn_fadvise64_64,
  dyn_fstatat64,
  // Linux/Arch_x86/unistd_32.h.20130603
  dyn_vm86old,
  dyn_lchown32,
  dyn_getuid32,
  dyn_getgid32,
  dyn_geteuid32,
  dyn_getegid32,
  dyn_setreuid32,
  dyn_setregid32,
  dyn_getgroups32,
  dyn_setgroups32,
  dyn_fchown32,
  dyn_setresuid32,
  dyn_getresuid32,
  dyn_setresgid32,
  dyn_getresgid32,
  dyn_chown32,
  dyn_setuid32,
  dyn_setgid32,
  dyn_setfsuid32,
  dyn_setfsgid32,
  dyn_madvise1,
  dyn_set_thread_area,
  dyn_get_thread_area,
  dyn_vserver,
  dyn_sync_file_range,
  dyn_preadv,
  dyn_pwritev,
  dyn_rt_tgsigqueueinfo,
  dyn_perf_event_open,
  dyn_recvmmsg,
  dyn_clock_adjtime,
  dyn_syncfs,
  dyn_sendmmsg,
  dyn_process_vm_readv,
  dyn_process_vm_writev,
  // Linux/Arch_x86_64/unistd_64.h.20130603
  dyn_shmget,
  dyn_shmat,
  dyn_shmctl,
  dyn_socket,
  dyn_connect,
  dyn_accept,
  dyn_sendto,
  dyn_recvfrom,
  dyn_sendmsg,
  dyn_recvmsg,
  dyn_shutdown,
  dyn_bind,
  dyn_listen,
  dyn_getsockname,
  dyn_getpeername,
  dyn_socketpair,
  dyn_setsockopt,
  dyn_getsockopt,
  dyn_semget,
  dyn_semop,
  dyn_semctl,
  dyn_shmdt,
  dyn_msgget,
  dyn_msgsnd,
  dyn_msgrcv,
  dyn_msgctl,
  dyn_arch_prctl,
  dyn_security,
  dyn_epoll_ctl_old,
  dyn_epoll_wait_old,
  dyn_semtimedop,
  dyn_accept4,
  dyn_fanotify_init,
  dyn_fanotify_mark,
  dyn_prlimit64,
  dyn_name_to_handle_at,
  dyn_open_by_handle_at,
  dyn_set_ns,
  dyn_get_cpu,
};
}
}
#endif
