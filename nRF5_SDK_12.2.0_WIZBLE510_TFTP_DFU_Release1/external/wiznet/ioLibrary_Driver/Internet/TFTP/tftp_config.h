
#ifndef __COMMON_H__
#define __COMMON_H__

//#include"nrf_log_ctrl.h"
//#incldue "nrf_log_internal.h"

#define MAJOR_VER		101
#define MINOR_VER		0
#define MAINTENANCE_VER	1

#define SOCK_DATA		0
#define SOCK_CONFIG		1
#define SOCK_TFTP		2
#define SOCK_DHCP		3

#define INFO_DBG		0x01
#define ERROR_DBG		0x02
#define DEBUG_DBG		0x04
#define IPC_DBG			0x08

#define F_STORAGE

#if 0
#define DBG_PRINT(level, format, args...)		{ \
											if(dbg_level & level) \
												printf(format, ##args); \
										} 
#endif
                    
#if 1
#define DBG_PRINT(level, format, args...)		{ \
												NRF_LOG_INTERNAL_DEBUG(format, ##args); \
										} 
#endif
                    
#define NORMAL_MODE		0
#define TFTP_MODE		1

extern int dbg_level;

#endif
