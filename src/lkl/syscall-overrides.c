#include <sys/syscall.h>
#include "lkl/syscall-overrides-futex.h"
#include "lkl/syscall-overrides-sysinfo.h"
#include "lkl/posix-host.h"

void register_lkl_syscall_overrides()
{
    lkl_replace_syscall(__lkl__NR_sysinfo, syscall_sysinfo_override);
}
