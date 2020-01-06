

#ifndef _CLOG_H_
#define _CLOG_H_

/*
 *  This magic constant is used to identify a valid circular log file.
 *  syslogd will ignore any circular log file that doesn't have this constant.
 */

const char MAGIC_CONST[4] = "CLOG";


struct clog_footer {
	uint32_t cf_magic;
	uint32_t cf_wrap;
	uint32_t cf_next;
	uint32_t cf_max;
	uint32_t cf_lock;
};


#endif  /* _CLOG_H_ */
	

