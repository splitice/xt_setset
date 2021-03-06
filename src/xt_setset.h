#include <linux/netfilter/xt_set.h>

struct xt_setset_info_target {
	struct xt_set_info add_set;
	struct xt_set_info del_set;
	__u32 flags;
	__u32 timeout;
    __u32 ssflags;
	__u32 probability;
	__u32 gt;
	__u8 flag;
#ifdef __KERNEL__
	atomic_long_t cooldown;
#else
	long cooldown;
#endif
};


enum {
	SS_MATCH = 1,
	SS_INV = 2,
	SS_NOCREATE = 4,
	SS_FLAG = 8
};