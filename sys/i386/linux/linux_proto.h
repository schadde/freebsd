/*
 * System call prototypes.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	Id: syscalls.master,v 1.5 1997/04/09 15:34:09 bde Exp 
 */

#ifndef _LINUX_SYSPROTO_H_
#define	_LINUX_SYSPROTO_H_

#include <sys/signal.h>

struct	linux_setup_args {
	int dummy;
};
struct	linux_fork_args {
	int dummy;
};
struct	linux_open_args {
	char * path;
	int flags;
	int mode;
};
struct	linux_waitpid_args {
	int pid;
	int * status;
	int options;
};
struct	linux_creat_args {
	char * path;
	int mode;
};
struct	linux_unlink_args {
	char * path;
};
struct	linux_execve_args {
	char * path;
	char ** argp;
	char ** envp;
};
struct	linux_chdir_args {
	char * path;
};
struct	linux_time_args {
	linux_time_t * tm;
};
struct	linux_mknod_args {
	char * path;
	int mode;
	int dev;
};
struct	linux_chmod_args {
	char * path;
	int mode;
};
struct	linux_chown_args {
	char * path;
	int uid;
	int gid;
};
struct	linux_break_args {
	char * nsize;
};
struct	linux_stat_args {
	char * path;
	struct ostat * up;
};
struct	linux_lseek_args {
	int fdes;
	long off;
	int whence;
};
struct	linux_mount_args {
	int dummy;
};
struct	linux_umount_args {
	int dummy;
};
struct	linux_stime_args {
	int dummy;
};
struct	linux_ptrace_args {
	int dummy;
};
struct	linux_alarm_args {
	unsigned int secs;
};
struct	linux_fstat_args {
	int fd;
	struct ostat * up;
};
struct	linux_pause_args {
	int dummy;
};
struct	linux_utime_args {
	char * fname;
	struct linux_utimbuf * times;
};
struct	linux_stty_args {
	int dummy;
};
struct	linux_gtty_args {
	int dummy;
};
struct	linux_access_args {
	char * path;
	int flags;
};
struct	linux_nice_args {
	int dummy;
};
struct	linux_ftime_args {
	int dummy;
};
struct	linux_kill_args {
	int pid;
	int signum;
};
struct	linux_rename_args {
	char * from;
	char * to;
};
struct	linux_mkdir_args {
	char * path;
	int mode;
};
struct	linux_rmdir_args {
	char * path;
};
struct	linux_pipe_args {
	int * pipefds;
};
struct	linux_times_args {
	struct linux_times_argv * buf;
};
struct	linux_prof_args {
	int dummy;
};
struct	linux_brk_args {
	char * dsend;
};
struct	linux_signal_args {
	int sig;
	linux_handler_t handler;
};
struct	linux_phys_args {
	int dummy;
};
struct	linux_lock_args {
	int dummy;
};
struct	linux_ioctl_args {
	int fd;
	u_long cmd;
	int arg;
};
struct	linux_fcntl_args {
	int fd;
	int cmd;
	int arg;
};
struct	linux_mpx_args {
	int dummy;
};
struct	linux_ulimit_args {
	int dummy;
};
struct	linux_olduname_args {
	struct linux_oldold_utsname * up;
};
struct	linux_ustat_args {
	int dummy;
};
struct	linux_sigaction_args {
	int sig;
	struct linux_sigaction * nsa;
	struct linux_sigaction * osa;
};
struct	linux_siggetmask_args {
	int dummy;
};
struct	linux_sigsetmask_args {
	linux_sigset_t mask;
};
struct	linux_sigsuspend_args {
	int restart;
	linux_sigset_t oldmask;
	linux_sigset_t mask;
};
struct	linux_sigpending_args {
	linux_sigset_t * mask;
};
struct	linux_select_args {
	struct linux_select_argv * ptr;
};
struct	linux_symlink_args {
	char * path;
	char * to;
};
struct	linux_readlink_args {
	char * name;
	char * buf;
	int count;
};
struct	linux_uselib_args {
	char * library;
};
struct	linux_readdir_args {
	int fd;
	struct linux_dirent * dent;
	unsigned int count;
};
struct	linux_mmap_args {
	struct linux_mmap_argv * ptr;
};
struct	linux_truncate_args {
	char * path;
	long length;
};
struct	linux_statfs_args {
	char * path;
	struct linux_statfs_buf * buf;
};
struct	linux_fstatfs_args {
	int fd;
	struct linux_statfs_buf * buf;
};
struct	linux_ioperm_args {
	unsigned int lo;
	unsigned int hi;
	int val;
};
struct	linux_socketcall_args {
	int what;
	void * args;
};
struct	linux_ksyslog_args {
	int what;
};
struct	linux_setitimer_args {
	u_int which;
	struct itimerval * itv;
	struct itimerval * oitv;
};
struct	linux_getitimer_args {
	u_int which;
	struct itimerval * itv;
};
struct	linux_newstat_args {
	char * path;
	struct linux_newstat * buf;
};
struct	linux_newlstat_args {
	char * path;
	struct linux_newstat * buf;
};
struct	linux_newfstat_args {
	int fd;
	struct linux_newstat * buf;
};
struct	linux_uname_args {
	struct linux_old_utsname * up;
};
struct	linux_iopl_args {
	int level;
};
struct	linux_vhangup_args {
	int dummy;
};
struct	linux_idle_args {
	int dummy;
};
struct	linux_vm86_args {
	int dummy;
};
struct	linux_wait4_args {
	int pid;
	int * status;
	int options;
	struct rusage * rusage;
};
struct	linux_swapoff_args {
	int dummy;
};
struct	linux_sysinfo_args {
	int dummy;
};
struct	linux_ipc_args {
	int what;
	int arg1;
	int arg2;
	int arg3;
	caddr_t ptr;
};
struct	linux_sigreturn_args {
	struct linux_sigcontext * scp;
};
struct	linux_clone_args {
	int dummy;
};
struct	linux_newuname_args {
	struct linux_newuname_t * buf;
};
struct	linux_modify_ldt_args {
	int func;
	void * ptr;
	size_t bytecount;
};
struct	linux_adjtimex_args {
	int dummy;
};
struct	linux_sigprocmask_args {
	int how;
	linux_sigset_t * mask;
	linux_sigset_t * omask;
};
struct	linux_create_module_args {
	int dummy;
};
struct	linux_init_module_args {
	int dummy;
};
struct	linux_delete_module_args {
	int dummy;
};
struct	linux_get_kernel_syms_args {
	int dummy;
};
struct	linux_quotactl_args {
	int dummy;
};
struct	linux_getpgid_args {
	int pid;
};
struct	linux_bdflush_args {
	int dummy;
};
struct	linux_personality_args {
	int per;
};
struct	linux_llseek_args {
	int fd;
	u_int32_t ohigh;
	u_int32_t olow;
	caddr_t res;
	int whence;
};
struct	linux_getdents_args {
	int fd;
	void * dent;
	unsigned count;
};
struct	linux_newselect_args {
	int nfds;
	fd_set * readfds;
	fd_set * writefds;
	fd_set * exceptfds;
	struct timeval * timeout;
};
struct	linux_msync_args {
	caddr_t addr;
	int len;
	int fl;
};
int	linux_setup __P((struct proc *, struct linux_setup_args *, int []));
int	linux_fork __P((struct proc *, struct linux_fork_args *, int []));
int	linux_open __P((struct proc *, struct linux_open_args *, int []));
int	linux_waitpid __P((struct proc *, struct linux_waitpid_args *, int []));
int	linux_creat __P((struct proc *, struct linux_creat_args *, int []));
int	linux_unlink __P((struct proc *, struct linux_unlink_args *, int []));
int	linux_execve __P((struct proc *, struct linux_execve_args *, int []));
int	linux_chdir __P((struct proc *, struct linux_chdir_args *, int []));
int	linux_time __P((struct proc *, struct linux_time_args *, int []));
int	linux_mknod __P((struct proc *, struct linux_mknod_args *, int []));
int	linux_chmod __P((struct proc *, struct linux_chmod_args *, int []));
int	linux_chown __P((struct proc *, struct linux_chown_args *, int []));
int	linux_break __P((struct proc *, struct linux_break_args *, int []));
int	linux_stat __P((struct proc *, struct linux_stat_args *, int []));
int	linux_lseek __P((struct proc *, struct linux_lseek_args *, int []));
int	linux_mount __P((struct proc *, struct linux_mount_args *, int []));
int	linux_umount __P((struct proc *, struct linux_umount_args *, int []));
int	linux_stime __P((struct proc *, struct linux_stime_args *, int []));
int	linux_ptrace __P((struct proc *, struct linux_ptrace_args *, int []));
int	linux_alarm __P((struct proc *, struct linux_alarm_args *, int []));
int	linux_fstat __P((struct proc *, struct linux_fstat_args *, int []));
int	linux_pause __P((struct proc *, struct linux_pause_args *, int []));
int	linux_utime __P((struct proc *, struct linux_utime_args *, int []));
int	linux_stty __P((struct proc *, struct linux_stty_args *, int []));
int	linux_gtty __P((struct proc *, struct linux_gtty_args *, int []));
int	linux_access __P((struct proc *, struct linux_access_args *, int []));
int	linux_nice __P((struct proc *, struct linux_nice_args *, int []));
int	linux_ftime __P((struct proc *, struct linux_ftime_args *, int []));
int	linux_kill __P((struct proc *, struct linux_kill_args *, int []));
int	linux_rename __P((struct proc *, struct linux_rename_args *, int []));
int	linux_mkdir __P((struct proc *, struct linux_mkdir_args *, int []));
int	linux_rmdir __P((struct proc *, struct linux_rmdir_args *, int []));
int	linux_pipe __P((struct proc *, struct linux_pipe_args *, int []));
int	linux_times __P((struct proc *, struct linux_times_args *, int []));
int	linux_prof __P((struct proc *, struct linux_prof_args *, int []));
int	linux_brk __P((struct proc *, struct linux_brk_args *, int []));
int	linux_signal __P((struct proc *, struct linux_signal_args *, int []));
int	linux_phys __P((struct proc *, struct linux_phys_args *, int []));
int	linux_lock __P((struct proc *, struct linux_lock_args *, int []));
int	linux_ioctl __P((struct proc *, struct linux_ioctl_args *, int []));
int	linux_fcntl __P((struct proc *, struct linux_fcntl_args *, int []));
int	linux_mpx __P((struct proc *, struct linux_mpx_args *, int []));
int	linux_ulimit __P((struct proc *, struct linux_ulimit_args *, int []));
int	linux_olduname __P((struct proc *, struct linux_olduname_args *, int []));
int	linux_ustat __P((struct proc *, struct linux_ustat_args *, int []));
int	linux_sigaction __P((struct proc *, struct linux_sigaction_args *, int []));
int	linux_siggetmask __P((struct proc *, struct linux_siggetmask_args *, int []));
int	linux_sigsetmask __P((struct proc *, struct linux_sigsetmask_args *, int []));
int	linux_sigsuspend __P((struct proc *, struct linux_sigsuspend_args *, int []));
int	linux_sigpending __P((struct proc *, struct linux_sigpending_args *, int []));
int	linux_select __P((struct proc *, struct linux_select_args *, int []));
int	linux_symlink __P((struct proc *, struct linux_symlink_args *, int []));
int	linux_readlink __P((struct proc *, struct linux_readlink_args *, int []));
int	linux_uselib __P((struct proc *, struct linux_uselib_args *, int []));
int	linux_readdir __P((struct proc *, struct linux_readdir_args *, int []));
int	linux_mmap __P((struct proc *, struct linux_mmap_args *, int []));
int	linux_truncate __P((struct proc *, struct linux_truncate_args *, int []));
int	linux_statfs __P((struct proc *, struct linux_statfs_args *, int []));
int	linux_fstatfs __P((struct proc *, struct linux_fstatfs_args *, int []));
int	linux_ioperm __P((struct proc *, struct linux_ioperm_args *, int []));
int	linux_socketcall __P((struct proc *, struct linux_socketcall_args *, int []));
int	linux_ksyslog __P((struct proc *, struct linux_ksyslog_args *, int []));
int	linux_setitimer __P((struct proc *, struct linux_setitimer_args *, int []));
int	linux_getitimer __P((struct proc *, struct linux_getitimer_args *, int []));
int	linux_newstat __P((struct proc *, struct linux_newstat_args *, int []));
int	linux_newlstat __P((struct proc *, struct linux_newlstat_args *, int []));
int	linux_newfstat __P((struct proc *, struct linux_newfstat_args *, int []));
int	linux_uname __P((struct proc *, struct linux_uname_args *, int []));
int	linux_iopl __P((struct proc *, struct linux_iopl_args *, int []));
int	linux_vhangup __P((struct proc *, struct linux_vhangup_args *, int []));
int	linux_idle __P((struct proc *, struct linux_idle_args *, int []));
int	linux_vm86 __P((struct proc *, struct linux_vm86_args *, int []));
int	linux_wait4 __P((struct proc *, struct linux_wait4_args *, int []));
int	linux_swapoff __P((struct proc *, struct linux_swapoff_args *, int []));
int	linux_sysinfo __P((struct proc *, struct linux_sysinfo_args *, int []));
int	linux_ipc __P((struct proc *, struct linux_ipc_args *, int []));
int	linux_sigreturn __P((struct proc *, struct linux_sigreturn_args *, int []));
int	linux_clone __P((struct proc *, struct linux_clone_args *, int []));
int	linux_newuname __P((struct proc *, struct linux_newuname_args *, int []));
int	linux_modify_ldt __P((struct proc *, struct linux_modify_ldt_args *, int []));
int	linux_adjtimex __P((struct proc *, struct linux_adjtimex_args *, int []));
int	linux_sigprocmask __P((struct proc *, struct linux_sigprocmask_args *, int []));
int	linux_create_module __P((struct proc *, struct linux_create_module_args *, int []));
int	linux_init_module __P((struct proc *, struct linux_init_module_args *, int []));
int	linux_delete_module __P((struct proc *, struct linux_delete_module_args *, int []));
int	linux_get_kernel_syms __P((struct proc *, struct linux_get_kernel_syms_args *, int []));
int	linux_quotactl __P((struct proc *, struct linux_quotactl_args *, int []));
int	linux_getpgid __P((struct proc *, struct linux_getpgid_args *, int []));
int	linux_bdflush __P((struct proc *, struct linux_bdflush_args *, int []));
int	linux_personality __P((struct proc *, struct linux_personality_args *, int []));
int	linux_llseek __P((struct proc *, struct linux_llseek_args *, int []));
int	linux_getdents __P((struct proc *, struct linux_getdents_args *, int []));
int	linux_newselect __P((struct proc *, struct linux_newselect_args *, int []));
int	linux_msync __P((struct proc *, struct linux_msync_args *, int []));

#ifdef COMPAT_43


#endif /* COMPAT_43 */

#endif /* !_LINUX_SYSPROTO_H_ */
