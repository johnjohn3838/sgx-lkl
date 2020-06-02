#include <sys/syscall.h>
#include "lkl/syscall-overrides-futex.h"
#include "lkl/posix-host.h"
#include "enclave/enclave_mem.h"

void register_lkl_syscall_overrides()
{
    lkl_replace_syscall(SYS_sysinfo, syscall_SYS_sysinfo);
}
