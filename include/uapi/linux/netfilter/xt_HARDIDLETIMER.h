/* SPDX-License-Identifier: GPL-2.0-only WITH Linux-syscall-note */
/* linux/include/linux/netfilter/xt_HARDIDLETIMER.h
 *
 * Header file for Xtables timer target module.
 *
 * Copyright (c) 2014, 2017, 2019 The Linux Foundation. All rights reserved.
 *
 * Copyright (C) 2004, 2010 Nokia Corporation
 *
 * Written by Timo Teras <ext-timo.teras@nokia.com>
 *
 * Converted to x_tables and forward-ported to 2.6.34
 * by Luciano Coelho <luciano.coelho@nokia.com>
 *
 * Contact: Luciano Coelho <luciano.coelho@nokia.com>
 */

#ifndef _XT_HARDIDLETIMER_H
#define _XT_HARDIDLETIMER_H

#include <linux/types.h>

#define MAX_HARDIDLETIMER_LABEL_SIZE 28
#define NLMSG_MAX_SIZE 64

#define NL_EVENT_TYPE_INACTIVE 0
#define NL_EVENT_TYPE_ACTIVE 1

struct hardidletimer_tg_info {
	__u32 timeout;

	char label[MAX_HARDIDLETIMER_LABEL_SIZE];

	/* Use netlink messages for notification in addition to sysfs */
	__u8 send_nl_msg;

	/* for kernel module internal use only */
	struct hardidletimer_tg *timer __attribute__((aligned(8)));
};

#endif
