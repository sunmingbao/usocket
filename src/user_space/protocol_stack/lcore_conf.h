#ifndef _CAP_DEFS_H_
#define _CAP_DEFS_H_

#include <stdint.h>
#include "rte_memory.h"
#include "cap_defs.h"

struct rx_queue 
{
	uint8_t port_id;
	uint8_t queue_id;
} __rte_cache_aligned;



struct lcore_config 
{
	uint16_t n_rx_queue;
	struct rx_queue rx_queue_list[MAX_RX_QUEUE_PER_LCORE];
	uint16_t tx_queue_id[RTE_MAX_ETHPORTS];
	struct odp_mbuf_table tx_mbufs[RTE_MAX_ETHPORTS];
} __rte_cache_aligned;

extern struct lcore_config gt_lcore_conf;

#endif
