#ifndef _CAP_DEFS_H_
#define _CAP_DEFS_H_


#define MAX_RX_QUEUE_PER_PORT 16
#define MAX_TX_QUEUE_PER_PORT 16

#define MAX_RX_QUEUE_PER_LCORE  (RTE_MAX_ETHPORTS*MAX_RX_QUEUE_PER_PORT)



#define NB_MBUF   8192

#define MAX_PKT_BURST 32
#define BURST_TX_DRAIN_US 100 /* TX drain every ~100us */

/*
 * Configurable number of RX/TX ring descriptors
 */
#define RX_DESC_DEFAULT 128
#define TX_DESC_DEFAULT 512


#endif

