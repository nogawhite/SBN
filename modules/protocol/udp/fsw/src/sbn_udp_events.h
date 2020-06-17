#ifndef _sbn_udp_events_h
#define _sbn_udp_events_h

#include "sbn_types.h"

extern CFE_EVS_EventID_t SBN_UDP_FIRST_EID; /* defined at module init time */

#define SBN_UDP_SOCK_EID       SBN_UDP_FIRST_EID + 1 /* skip 0th */
#define SBN_UDP_CONFIG_EID     SBN_UDP_FIRST_EID + 2
#define SBN_UDP_DEBUG_EID      SBN_UDP_FIRST_EID + 3

#endif /* _sbn_udp_events_h */
