#ifndef ANCILLARY_IOUYAP_H_
#define ANCILLARY_IOUYAP_H_

/* Not everyone has UNIX_PATH_MAX */
#ifndef UNIX_PATH_MAX
struct sockaddr_un sizecheck;
#define UNIX_PATH_MAX sizeof(sizecheck.sun_path)
#endif

/* Not everyone has IFF_MULTI_QUEUE */
#ifndef IFF_MULTI_QUEUE
#define IFF_MULTI_QUEUE 0x0100
#endif


#endif