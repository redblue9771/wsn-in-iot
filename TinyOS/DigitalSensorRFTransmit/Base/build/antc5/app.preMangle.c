#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 8 "/opt/atos/tos/chips/cc2530/mcs51/keil_stdint.h"
typedef signed char int8_t;
typedef short int16_t;



typedef long int32_t;


typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short uint16_t;



typedef unsigned long uint32_t;


typedef unsigned long long int uint64_t;
# 19 "/opt/atos/tos/chips/cc2530/mcs51/stdint.h"
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int_least32_t;



__extension__ 
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned long uint_least32_t;



__extension__ 
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__ 
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__ 
typedef unsigned long long int uint_fast64_t;
# 79 "/opt/atos/tos/chips/cc2530/mcs51/stdint.h" 3
typedef int intptr_t;


typedef unsigned int uintptr_t;








__extension__ 
typedef long long int intmax_t;
__extension__ 
typedef unsigned long long int uintmax_t;
# 231 "/usr/include/inttypes.h"
#line 228
typedef struct __nesc_unnamed4242 {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source);




static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value);





static __inline uint8_t __nesc_ntoh_leuint8(const void *source);




static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value);





static __inline int8_t __nesc_ntoh_int8(const void *source);
#line 257
static __inline int8_t __nesc_hton_int8(void *target, int8_t value);
#line 276
static __inline uint16_t __nesc_ntoh_leuint16(const void *source);




static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value);
#line 385
typedef struct { char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 26 "/usr/include/machine/_types.h"
typedef signed char __int8_t;
typedef unsigned char __uint8_t;








typedef signed short __int16_t;
typedef unsigned short __uint16_t;








typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
# 58 "/usr/include/machine/_types.h" 3
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#line 76
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
#line 99
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
# 14 "/usr/include/sys/lock.h"
typedef void *_LOCK_T;
# 14 "/usr/include/sys/_types.h"
typedef long _off_t;
__extension__ 
#line 15
typedef long long _off64_t;


typedef int _ssize_t;
# 354 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3
typedef unsigned int wint_t;
# 35 "/usr/include/sys/_types.h"
#line 27
typedef struct __nesc_unnamed4243 {

  int __count;
  union __nesc_unnamed4244 {

    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;

typedef _LOCK_T _flock_t;


typedef void *_iconv_t;
# 151 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3
typedef int ptrdiff_t;
#line 213
typedef unsigned int size_t;
#line 325
typedef short unsigned int wchar_t;
# 19 "/usr/include/machine/types.h"
typedef long int __off_t;
typedef int __pid_t;

__extension__ 
#line 22
typedef long long int __loff_t;
# 92 "/usr/include/sys/types.h"
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;



typedef unsigned short ushort;
typedef unsigned int uint;



typedef unsigned long clock_t;




typedef long time_t;




struct timespec {
  time_t tv_sec;
  long tv_nsec;
};

struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};


typedef long daddr_t;
typedef char *caddr_t;
# 180 "/usr/include/sys/types.h" 3
typedef int pid_t;



typedef _ssize_t ssize_t;
#line 203
typedef unsigned short nlink_t;
#line 225
typedef long fd_mask;









#line 233
typedef struct _types_fd_set {
  fd_mask fds_bits[(64 + (sizeof(fd_mask ) * 8 - 1)) / (sizeof(fd_mask ) * 8)];
} _types_fd_set;
#line 256
typedef unsigned long clockid_t;




typedef unsigned long timer_t;



typedef unsigned long useconds_t;
typedef long suseconds_t;
# 26 "/usr/include/cygwin/types.h"
typedef struct timespec timespec_t;




typedef struct timespec timestruc_t;





typedef _off64_t off_t;





typedef __loff_t loff_t;



typedef short __dev16_t;
typedef unsigned long __dev32_t;

typedef __dev32_t dev_t;







typedef long blksize_t;




typedef long __blkcnt32_t;
typedef long long __blkcnt64_t;

typedef __blkcnt64_t blkcnt_t;







typedef unsigned long fsblkcnt_t;




typedef unsigned long fsfilcnt_t;




typedef unsigned short __uid16_t;
typedef unsigned long __uid32_t;

typedef __uid32_t uid_t;







typedef unsigned short __gid16_t;
typedef unsigned long __gid32_t;

typedef __gid32_t gid_t;







typedef unsigned long __ino32_t;
typedef unsigned long long __ino64_t;

typedef __ino64_t ino_t;








typedef unsigned long id_t;
# 140 "/usr/include/cygwin/types.h" 3
struct flock {
  short l_type;
  short l_whence;
  off_t l_start;
  off_t l_len;

  pid_t l_pid;
};







typedef long long key_t;







typedef unsigned long vm_offset_t;




typedef unsigned long vm_size_t;




typedef void *vm_object_t;




typedef unsigned char u_int8_t;



typedef __uint16_t u_int16_t;



typedef __uint32_t u_int32_t;



typedef __uint64_t u_int64_t;




typedef __int32_t register_t;




typedef char *addr_t;




typedef unsigned mode_t;





typedef struct __pthread_t {
#line 211
  char __dummy;
} *
#line 211
pthread_t;
typedef struct __pthread_mutex_t {
#line 212
  char __dummy;
} *
#line 212
pthread_mutex_t;

typedef struct __pthread_key_t {
#line 214
  char __dummy;
} *
#line 214
pthread_key_t;
typedef struct __pthread_attr_t {
#line 215
  char __dummy;
} *
#line 215
pthread_attr_t;
typedef struct __pthread_mutexattr_t {
#line 216
  char __dummy;
} *
#line 216
pthread_mutexattr_t;
typedef struct __pthread_condattr_t {
#line 217
  char __dummy;
} *
#line 217
pthread_condattr_t;
typedef struct __pthread_cond_t {
#line 218
  char __dummy;
} *
#line 218
pthread_cond_t;







#line 221
typedef struct __nesc_unnamed4245 {

  pthread_mutex_t mutex;
  int state;
} 
pthread_once_t;
typedef struct __pthread_rwlock_t {
#line 227
  char __dummy;
} *
#line 227
pthread_rwlock_t;
typedef struct __pthread_rwlockattr_t {
#line 228
  char __dummy;
} *
#line 228
pthread_rwlockattr_t;
# 30 "/opt/atos/tos/chips/cc2530/mcs51/stdio.h"
extern int sprintf(char *, const char *, ...);
# 7 "/opt/atos/tos/chips/cc2530/mcs51/string.h"
extern void *memcpy(void *s1, void *s2, int n);

extern void *memset(void *s, char val, int n);
# 19 "/usr/include/sys/reent.h"
typedef unsigned long __ULong;
# 40 "/usr/include/sys/reent.h" 3
struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
  void *_fnargs[32];
  void *_dso_handle[32];

  __ULong _fntypes;


  __ULong _is_cxa;
};









struct _atexit {
  struct _atexit *_next;
  int _ind;

  void (*_fns[32])(void );
  struct _on_exit_args _on_exit_args;
};









struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;



typedef _off64_t _fpos64_t;
#line 166
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void *_cookie;

  _ssize_t __attribute((__cdecl__)) (*_read)(void *_cookie, char *_buf, int _n);
  _ssize_t __attribute((__cdecl__)) (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t __attribute((__cdecl__)) (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int __attribute((__cdecl__)) (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;


  struct _reent *_data;



  _flock_t _lock;
};



struct __sFILE64 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;

  struct _reent *_data;


  void *_cookie;

  _ssize_t __attribute((__cdecl__)) (*_read)(void *_cookie, char *_buf, int _n);
  _ssize_t __attribute((__cdecl__)) (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t __attribute((__cdecl__)) (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int __attribute((__cdecl__)) (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _flags2;

  _off64_t _offset;
  _fpos64_t __attribute((__cdecl__)) (*_seek64)(void *_cookie, _fpos64_t _offset, int _whence);


  _flock_t _lock;
};

typedef struct __sFILE64 __FILE;




struct _glue {

  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
#line 290
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
#line 565
struct _reent {

  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void __attribute((__cdecl__)) (*__cleanup)(struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4246 {

    struct __nesc_unnamed4247 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
      _mbstate_t _mblen_state;
      _mbstate_t _mbtowc_state;
      _mbstate_t _wctomb_state;
      char _l64a_buf[8];
      char _signal_buf[24];
      int _getdate_err;
      _mbstate_t _mbrlen_state;
      _mbstate_t _mbrtowc_state;
      _mbstate_t _mbsrtowcs_state;
      _mbstate_t _wcrtomb_state;
      _mbstate_t _wcsrtombs_state;
    } _reent;



    struct __nesc_unnamed4248 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int );




  struct _glue __sglue;
  __FILE __sf[3];
};
#line 799
struct _reent;
struct _reent;









struct _reent;
# 32 "/usr/include/stdlib.h"
#line 28
typedef struct __nesc_unnamed4249 {

  int quot;
  int rem;
} div_t;





#line 34
typedef struct __nesc_unnamed4250 {

  long quot;
  long rem;
} ldiv_t;






#line 41
typedef struct __nesc_unnamed4251 {

  long long int quot;
  long long int rem;
} lldiv_t;
# 11 "/usr/include/math.h"
union __dmath {

  __ULong i[2];
  double d;
};

union __fmath {

  __ULong i[1];
  float f;
};

union __ldmath {

  __ULong i[4];
  long double ld;
};
# 111 "/usr/include/math.h" 3
typedef float float_t;
typedef double double_t;
#line 344
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 399
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 20 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4252 {
#line 21
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;





struct __nesc_attr_atmostonce {
};
#line 31
struct __nesc_attr_atleastonce {
};
#line 32
struct __nesc_attr_exactlyonce {
};
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4253 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4254 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 21 "/opt/atos/tos/chips/cc2530/ioCC2530.h"
enum __nesc_unnamed4255 {
  CC2530_IEN0_EA = 0x7, 
  CC2530_IEN0_STIE = 0x5, 
  CC2530_IEN0_ENCIE = 0x4, 
  CC2530_IEN0_URX1IE = 0x3, 
  CC2530_IEN0_URX0IE = 0x2, 
  CC2530_IEN0_ADCIE = 0x1, 
  CC2530_IEN0_RFERRIE = 0x0
};





enum __nesc_unnamed4256 {
  CC2530_IEN2_WDTIE = 0x5, 
  CC2530_IEN2_P1IE = 0x4, 
  CC2530_IEN2_UTX1IE = 0x3, 
  CC2530_IEN2_UTX0IE = 0x2, 
  CC2530_IEN2_P2IE = 0x1, 
  CC2530_IEN2_RFIE = 0x0
};





enum __nesc_unnamed4257 {
  CC2530_IRCON_STIF = 0x7, 
  CC2530_IRCON_P0IF = 0x5, 
  CC2530_IRCON_T4IF = 0x4, 
  CC2530_IRCON_T3IF = 0x3, 
  CC2530_IRCON_T2IF = 0x2, 
  CC2530_IRCON_T1IF = 0x1, 
  CC2530_IRCON_DMAIF = 0x0
};





enum __nesc_unnamed4258 {
  CC2530_IRCON2_WDTIF = 0x4, 
  CC2530_IRCON2_P1IF = 0x3, 
  CC2530_IRCON2_UTX1IF = 0x2, 
  CC2530_IRCON2_UTX0IF = 0x1, 
  CC2530_IRCON2_P2IF = 0x0
};





enum __nesc_unnamed4259 {
  CC2530_RFIM_RREG_PD = 0x7, 
  CC2530_RFIM_TXDONE = 0x6, 
  CC2530_RFIM_FIFOP = 0x5, 
  CC2530_RFIM_SFD = 0x4, 
  CC2530_RFIM_CCA = 0x3, 
  CC2530_RFIM_CSP_WT = 0x2, 
  CC2530_RFIM_CSP_STOP = 0x1, 
  CC2530_RFIM_CSP_INT = 0x0
};





enum __nesc_unnamed4260 {
  CC2530_RFIF_RREG_ON = 0x7, 
  CC2530_RFIF_TXDONE = 0x6, 
  CC2530_RFIF_FIFOP = 0x5, 
  CC2530_RFIF_SFD = 0x4, 
  CC2530_RFIF_CCA = 0x3, 
  CC2530_RFIF_CSP_WT = 0x2, 
  CC2530_RFIF_CSP_STOP = 0x1, 
  CC2530_RFIF_CSP_INT = 0x0
};




typedef uint32_t uint32_t_xdata;
typedef uint16_t uint16_t_xdata;
typedef uint8_t uint8_t_xdata;

typedef uint32_t uint32_t_code;
typedef uint16_t uint16_t_code;
typedef uint8_t uint8_t_code;
#line 189
uint8_t volatile U0CSR __attribute((sfrAT0x86)) ;
uint8_t volatile PCON __attribute((sfrAT0x87)) ;




uint8_t volatile RFERRIF __attribute((sbitAT0x89)) ;

uint8_t volatile URX0IF __attribute((sbitAT0x8B)) ;



uint8_t volatile URX1IF __attribute((sbitAT0x8F)) ;

uint8_t volatile P0IFG __attribute((sfrAT0x89)) ;
uint8_t volatile P1IFG __attribute((sfrAT0x8A)) ;










uint8_t volatile P1_2 __attribute((sbitAT0x92)) ;
uint8_t volatile P1_3 __attribute((sbitAT0x93)) ;





uint8_t volatile RFIRQF1 __attribute((sfrAT0x91)) ;
#line 242
uint8_t volatile IEN2 __attribute((sfrAT0x9A)) ;
uint8_t volatile S1CON __attribute((sfrAT0x9B)) ;


uint8_t volatile SLEEPSTA __attribute((sfrAT0x9D)) ;
uint8_t volatile CLKCONSTA __attribute((sfrAT0x9E)) ;
#line 271
uint8_t volatile RFERRIE __attribute((sbitAT0xA8)) ;

uint8_t volatile URX0IE __attribute((sbitAT0xAA)) ;




uint8_t volatile EA __attribute((sbitAT0xAF)) ;







uint8_t volatile T1STAT __attribute((sfrAT0xAF)) ;





uint8_t volatile ADCCON1 __attribute((sfrAT0xB4)) ;







uint8_t volatile T1IE __attribute((sbitAT0xB9)) ;










uint8_t volatile RNDL __attribute((sfrAT0xBC)) ;
uint8_t volatile RNDH __attribute((sfrAT0xBD)) ;
uint8_t volatile SLEEPCMD __attribute((sfrAT0xBE)) ;
uint8_t volatile RFERRF __attribute((sfrAT0xBF)) ;










uint8_t volatile P0IF __attribute((sbitAT0xC5)) ;

uint8_t volatile STIF __attribute((sbitAT0xC7)) ;

uint8_t volatile U0DBUF __attribute((sfrAT0xC1)) ;
uint8_t volatile U0BAUD __attribute((sfrAT0xC2)) ;

uint8_t volatile U0UCR __attribute((sfrAT0xC4)) ;
uint8_t volatile U0GCR __attribute((sfrAT0xC5)) ;
uint8_t volatile CLKCONCMD __attribute((sfrAT0xC6)) ;


uint8_t volatile CLKCON __attribute((sfrAT0xC6)) ;


uint8_t volatile WDCTL __attribute((sfrAT0xC9)) ;
#line 368
uint8_t volatile TIMIF __attribute((sfrAT0xD8)) ;









uint8_t volatile RFD __attribute((sfrAT0xD9)) ;
uint8_t volatile T1CC0L __attribute((sfrAT0xDA)) ;
uint8_t volatile T1CC0H __attribute((sfrAT0xDB)) ;
uint8_t volatile T1CC1L __attribute((sfrAT0xDC)) ;
uint8_t volatile T1CC1H __attribute((sfrAT0xDD)) ;
uint8_t volatile T1CC2L __attribute((sfrAT0xDE)) ;
uint8_t volatile T1CC2H __attribute((sfrAT0xDF)) ;


uint8_t volatile RFST __attribute((sfrAT0xE1)) ;
uint8_t volatile T1CNTL __attribute((sfrAT0xE2)) ;
uint8_t volatile T1CNTH __attribute((sfrAT0xE3)) ;
uint8_t volatile T1CTL __attribute((sfrAT0xE4)) ;
uint8_t volatile T1CCTL0 __attribute((sfrAT0xE5)) ;
uint8_t volatile T1CCTL1 __attribute((sfrAT0xE6)) ;
uint8_t volatile T1CCTL2 __attribute((sfrAT0xE7)) ;




uint8_t volatile UTX0IF __attribute((sbitAT0xE9)) ;
uint8_t volatile UTX1IF __attribute((sbitAT0xEA)) ;
uint8_t volatile P1IF __attribute((sbitAT0xEB)) ;





uint8_t volatile RFIRQF0 __attribute((sfrAT0xE9)) ;








uint8_t volatile PERCFG __attribute((sfrAT0xF1)) ;








uint8_t volatile P0_ALT __attribute((sfrAT0xF3)) ;
uint8_t volatile P1_ALT __attribute((sfrAT0xF4)) ;
#line 448
uint8_t volatile P1_DIR __attribute((sfrAT0xFE)) ;
# 4 "/opt/atos/tos/lib/atos/net/AtosMac/RfConstant.h"
enum rf_fcs_enums {
  RF_FCS_CRC_OK_MASK = 0x80, 
  RF_FCS_CORRELATION_MASK = 0x7F
};
# 39 "/opt/atos/tos/lib/atos/net/AtosMac/RfAck.h"
#line 10
typedef nx_struct _rf_ack_t {


  nx_uint8_t dsn;




  nx_uint16_t parent;
  nx_uint16_t parent_cost;
  nx_uint8_t hopcount;
  nx_uint8_t buffer_pressure;

  nx_bool forward_full;
  nx_bool receive_this_msg;
} __attribute__((packed)) 
#line 39
rf_ack_t;
# 24 "/opt/atos/tos/lib/atos/net/AtosMac/RfMessage.h"
#line 13
typedef nx_struct _rf_header_t {

  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
  nxle_uint8_t type;

  nxle_uint8_t security;
} __attribute__((packed)) rf_header_t;







#line 29
typedef nx_struct _rf_footer_t {

  nx_uint8_t i;
} __attribute__((packed)) rf_footer_t;
#line 51
#line 39
typedef nx_struct _rf_metadata_t {

  nx_int8_t rssi;
  nx_uint8_t lqi;
  nx_bool crc;
  nx_bool ack;

  nx_uint8_t resource_id;
  nx_uint8_t route_resource_id;


  rf_ack_t ack_msg;
} __attribute__((packed)) rf_metadata_t;
# 38 "/opt/atos/tos/lib/atos/net/AtosMac/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 16 "/opt/atos/tos/platforms/antc5/platform_message.h"
#line 13
typedef union message_header {
  rf_header_t header;
} 
message_header_t;



#line 18
typedef union TOSRadioFooter {
  rf_footer_t footer;
} message_footer_t;



#line 22
typedef union TOSRadioMetadata {
  rf_metadata_t meta;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[127 - (sizeof(rf_header_t ) - 1 + sizeof(uint16_t )) - 0 + sizeof(uint16_t )];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 13 "/opt/atos/tos/platforms/antc5/platform.h"
uint16_t TOS_IEEE_SADDR = TOS_AM_ADDRESS;
uint16_t TOS_IEEE_PANID = TOS_AM_GROUP;
# 5 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTask.h"
extern uint8_t TopTaskMgrP__m_task_flag[];
# 36 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4261 {
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2);
# 62 "/opt/atos/tos/chips/cc2530/mcs51/mcs51hardware.h"
typedef uint8_t __nesc_atomic_t;

static __inline void __nesc_disable_interrupt(void);
static __inline void __nesc_enable_interrupt(void);





__inline __nesc_atomic_t __nesc_atomic_start(void )  ;





__inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)  ;
#line 98
__nesc_atomic_t m_critical_state;
# 39 "/opt/atos/tos/chips/cc2530/timer/hardware/CC2530Timer.h"
enum __nesc_unnamed4262 {
  CC2530_SLEEP_OSC32K_CALDIS = 7, 
  CC2530_SLEEP_XOSC_STB = 6, 
  CC2530_SLEEP_HFRC_STB = 5, 
  CC2530_SLEEP_DIV = 3, 
  CC2530_SLEEP_OSC_PD = 2, 
  CC2530_SLEEP_MODE = 0, 
  CC2530_SLEEP_MODE_MASK = 3
};

enum __nesc_unnamed4263 {
  CC2530_SLEEP_POWERMODE_0 = 0, 
  CC2530_SLEEP_POWERMODE_1 = 1, 
  CC2530_SLEEP_POWERMODE_2 = 2, 
  CC2530_SLEEP_POWERMODE_3 = 3
};

enum __nesc_unnamed4264 {
  CC2530_CLKCON_OSC32K = 7, 
  CC2530_CLKCON_OSC = 6, 
  CC2530_CLKCON_TICKSPD = 3, 
  CC2530_CLKCON_CLKSPD = 0, 
  CC2530_CLKCON_TICKSPD_MASK = 0x38
};




enum cc2530_tick_spd_t {
  CC2530_TICKF_DIV_1 = 0x0 << CC2530_CLKCON_TICKSPD, 
  CC2530_TICKF_DIV_2 = 0x1 << CC2530_CLKCON_TICKSPD, 
  CC2530_TICKF_DIV_4 = 0x2 << CC2530_CLKCON_TICKSPD, 
  CC2530_TICKF_DIV_8 = 0x3 << CC2530_CLKCON_TICKSPD, 
  CC2530_TICKF_DIV_16 = 0x4 << CC2530_CLKCON_TICKSPD, 
  CC2530_TICKF_DIV_32 = 0x5 << CC2530_CLKCON_TICKSPD, 
  CC2530_TICKF_DIV_64 = 0x6 << CC2530_CLKCON_TICKSPD, 
  CC2530_TICKF_DIV_128 = 0x7 << CC2530_CLKCON_TICKSPD
};










enum __nesc_unnamed4265 {
  CC2530_T1CTL_DIV = 0x2, 
  CC2530_T1CTL_MODE = 0x0, 
  CC2530_T1CTL_MODE_MASK = 0x3, 
  CC2530_T1CTL_DIV_MASK = 0xc
};




enum __nesc_unnamed4266 {
  CC2530_T1STAT_OVFIF = 0x5, 
  CC2530_T1STAT_CH4IF = 0x4, 
  CC2530_T1STAT_CH3IF = 0x3, 
  CC2530_T1STAT_CH2IF = 0x2, 
  CC2530_T1STAT_CH1IF = 0x1, 
  CC2530_T1STAT_CH0IF = 0x0, 
  CC2530_T1STAT_IF_MASK = 0x1f
};





enum cc2530_timer1_mode_t {
  CC2530_TIMER1_MODE_OFF = 0x0 << CC2530_T1CTL_MODE, 
  CC2530_TIMER1_MODE_FREE = 0x1 << CC2530_T1CTL_MODE, 
  CC2530_TIMER1_MODE_MODULO = 0x2 << CC2530_T1CTL_MODE, 
  CC2530_TIMER1_MODE_UPDOWN = 0x3 << CC2530_T1CTL_MODE
};






enum cc2530_timer1_if_t {
  CC2530_T1_OVFIF = 1 << CC2530_T1STAT_OVFIF, 
  CC2530_T1_CH4IF = 1 << CC2530_T1STAT_CH2IF, 
  CC2530_T1_CH3IF = 1 << CC2530_T1STAT_CH1IF, 
  CC2530_T1_CH2IF = 1 << CC2530_T1STAT_CH2IF, 
  CC2530_T1_CH1IF = 1 << CC2530_T1STAT_CH1IF, 
  CC2530_T1_CH0IF = 1 << CC2530_T1STAT_CH0IF
};





enum cc2530_timer1_prescaler_t {
  CC2530_TIMER1_DIV_1 = 0x0 << CC2530_T1CTL_DIV, 
  CC2530_TIMER1_DIV_8 = 0x1 << CC2530_T1CTL_DIV, 
  CC2530_TIMER1_DIV_32 = 0x2 << CC2530_T1CTL_DIV, 
  CC2530_TIMER1_DIV_128 = 0x3 << CC2530_T1CTL_DIV
};





enum __nesc_unnamed4267 {
  CC2530_T1CCTLx_CPSEL = 0x7, 
  CC2530_T1CCTLx_IM = 0x6, 
  CC2530_T1CCTLx_CMP = 0x3, 
  CC2530_T1CCTLx_MODE = 0x2, 
  CC2530_T1CCTLx_CAP = 0x0
};










enum cc2530_timerMAC_mode_t {
  CC2530_TIMERMAC_MODE_IDLE = 0x0, 
  CC2530_TIMERMAC_MODE_RUN = 0x1
};





enum cc2530_timerMAC_T2CNF_t {
  CC2530_T2CNF_CMPIF = 0x7, 
  CC2530_T2CNF_PERIF = 0x6, 
  CC2530_T2CNF_OFCMPIF = 0x5, 
  CC2530_T2CNF_CMSEL = 0x3, 
  CC2530_T2CNF_SYNC = 0x1, 
  CC2530_T2CNF_RUN = 0x0
};






enum cc2530_timerMAC_T2PEROF2_t {
  CC2530_T2PEROF2_CMPIM = 0x7, 
  CC2530_T2PEROF2_PERIM = 0x6, 
  CC2530_T2PEROF2_OFCMPIM = 0x5
};

enum cc2530_timerMAC_if_t {
  CC2530_TMAC_CMPIF = 1 << CC2530_T2CNF_CMPIF, 
  CC2530_TMAC_PERIF = 1 << CC2530_T2CNF_PERIF, 
  CC2530_TMAC_OFCMPIF = 1 << CC2530_T2CNF_OFCMPIF
};

enum cc2530_timerMAC_interval_t {
  CC2530_TIMERWDT_32768 = 0, 
  CC2530_TIMERWDT_8192 = 1, 
  CC2530_TIMERWDT_512 = 2, 
  CC2530_TIMERWDT_64 = 3
};
#line 217
enum __nesc_unnamed4268 {
  CC2530_TIMIF_OVFIM = 0x6
};

enum cc2530_timer34_if_t {
  CC2530_TIMIF_T4CH1IF = 0x5, 
  CC2530_TIMIF_T4CH0IF = 0x4, 
  CC2530_TIMIF_T4OVFIF = 0x3, 
  CC2530_TIMIF_T3CH1IF = 0x2, 
  CC2530_TIMIF_T3CH0IF = 0x1, 
  CC2530_TIMIF_T3OVFIF = 0x0
};






enum cc2530_timer3_4_mode_t {
  CC2530_TIMER3_4_MODE_FREE = 0x0, 
  CC2530_TIMER3_4_MODE_DOWN = 0x1, 
  CC2530_TIMER3_4_MODE_MODULO = 0x2, 
  CC2530_TIMER3_4_MODE_UPDOWN = 0x3
};





enum __nesc_unnamed4269 {
  CC2530_T34CTL_DIV = 0x5, 
  CC2530_T34CTL_START = 0x4, 
  CC2530_T34CTL_OVFIM = 0x3, 
  CC2530_T34CTL_WDTIF = 0x3, 
  CC2530_T34CTL_CLR = 0x2, 
  CC2530_T34CTL_MODE = 0x0, 
  CC2530_T34CTL_MODE_MASK = 0x3, 
  CC2530_T34CTL_DIV_MASK = 0xe0
};





enum cc2530_timer3_4_prescaler_t {
  CC2530_TIMER3_4_DIV_1 = 0x0 << CC2530_T34CTL_DIV, 
  CC2530_TIMER3_4_DIV_2 = 0x1 << CC2530_T34CTL_DIV, 
  CC2530_TIMER3_4_DIV_4 = 0x2 << CC2530_T34CTL_DIV, 
  CC2530_TIMER3_4_DIV_8 = 0x3 << CC2530_T34CTL_DIV, 
  CC2530_TIMER3_4_DIV_16 = 0x4 << CC2530_T34CTL_DIV, 
  CC2530_TIMER3_4_DIV_32 = 0x5 << CC2530_T34CTL_DIV, 
  CC2530_TIMER3_4_DIV_64 = 0x6 << CC2530_T34CTL_DIV, 
  CC2530_TIMER3_4_DIV_128 = 0x7 << CC2530_T34CTL_DIV
};










enum __nesc_unnamed4270 {
  CC2530_WDCTL_CLR = 0x4, 
  CC2530_WDCTL_EN = 0x3, 
  CC2530_WDCTL_MODE = 0x2, 
  CC2530_WDCTL_INT = 0x0, 
  CC2530_WDCTL_INT_MASK = 0x3
};

enum cc2530_timerWDT_mode_t {
  CC2530_TIMERWDT_MODE_WDT = 0x0 << CC2530_WDCTL_MODE, 
  CC2530_TIMERWDT_MODE_TIMER = 0x1 << CC2530_WDCTL_MODE
};
# 6 "/opt/atos/tos/lib/atos/common/AtosError.h"
enum __nesc_unnamed4271 {


  ERR_RF_TX_GO_FAIL = 50, 


  ERR_MAC_CONGESTION_FAIL = 51, 
  ERR_MAC_SEND_RESOURCE_EXISTS = 52, 
  ERR_MAC_SEND_RESOURCE_FULL = 53, 

  ERR_MAC_NO_ACK = 54, 
  ERR_MAC_RETRY_MAX = 55, 


  ERR_ROUTE_SELECT_ROUTE_FAIL = 56, 
  ERR_ROUTE_SEND_P2P_FAIL = 57, 

  ERR_ROUTE_SEND_QUEUE_EXISTS = 58, 
  ERR_ROUTE_SEND_QUEUE_FULL = 59, 
  ERR_ROUTE_SEND_QUEUE_FAIL = 60, 

  ERR_ROUTE_FUNSION_ERROR = 61, 
  ERR_ROUTE_FUNSION_NO_ENOUGH = 62, 

  ERR_ROUTE_DISABLED = 63, 
  ERR_ROUTE_FORWARD_INVALID = 64
};
# 9 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
int uart_debug_level = 1000;
# 11 "/opt/atos/tos/chips/cc2530/mcs51/stdarg.h"
typedef char *va_list;
# 8 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static void uart0SetBaud(uint32_t baud);





static inline void uart0IntEnable(void);
#line 34
static inline void uart0PinMap(bool map);









static inline void uart0SetMode(void);





static inline void uart0Init(uint32_t baud);






static void uart0PutChar(char c);
# 28 "/opt/atos/tos/lib/atos/power/McuSleep.h"
typedef message_t message_t_xdata_pm0;
# 34 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
uint8_t uart_debug_buf[256];
uint8_t current_task_id = 255;




static inline void ATOS_DEBUG_UART_INIT(void);





static inline void ATOS_DEBUG_UART_PUTC(char c);








static void ATOS_DEBUG_UART_PRINT(void);
# 7 "/opt/atos/tos/lib/atos/kernel/AtosTask/AtosTask.h"
enum atostask_run_flag_t {

  ATOSTASK_RUN_FLAG_ALL = 1 << 0, 
  ATOSTASK_RUN_FLAG_SYNC = 1 << 1, 
  ATOSTASK_RUN_FLAG_UNSYNC = 1 << 2, 

  ATOSTASK_RUN_FLAG_STOPPED = 1 << 3
};

enum atostask_mgr_ctrl_t {

  ATOSTASK_CTRL_IS_ENABLED, 
  ATOSTASK_CTRL_ENABLE, 
  ATOSTASK_CTRL_DISABLE, 

  ATOSTASK_CTRL_IS_STARTED, 
  ATOSTASK_CTRL_START, 
  ATOSTASK_CTRL_STOP, 

  ATOSTASK_CTRL_IS_RUNNING
};
# 29 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4272 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4273 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4274 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 13 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMac.h"
#line 9
typedef struct _rf_rmac_header_t {

  uint8_t dsn;
  uint8_t ack_req;
} rf_rmac_header_t;


uint8_t rf_rmac_dsn = 1;
# 11 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.h"
enum __nesc_unnamed4275 {

  ANSTD_DATA_TYPE_NODE_STATUS_UP = 0x21, 
  ANSTD_DATA_TYPE_DISCOVERY = 0x22, 
  ANSTD_DATA_TYPE_SETIEEE = 0x23, 
  ANSTD_DATA_TYPE_REBOOT = 0x24, 
  ANSTD_DATA_TYPE_TRACE = 0x25, 
  ANSTD_DATA_TYPE_TRACE_ACK = 0x26
};




#line 21
typedef struct _anstd_header_t {

  uint8_t data_type;
} anstd_header_t;
#line 40
#line 26
typedef struct _anstd_node_status_t {

  uint8_t data_type;
  uint8_t device_type;
  uint8_t industry_code;
  uint8_t application_code;
  uint16_t program_id;
  uint16_t program_version;
  uint8_t ieee[8];
  uint8_t node_type;
  uint8_t node_status;
  uint8_t rf_channel;
  uint8_t battery;
  uint8_t signal_strength;
} anstd_node_status_t;









#line 43
typedef struct _anstd_discovery_t {

  uint8_t data_type;
  uint8_t device_type;
  uint8_t rf_channel;
  uint16_t node_group;
  uint16_t node_id;
} anstd_discovery_t;








#line 53
typedef struct _anstd_setieee_t {

  uint8_t data_type;
  uint16_t node_group;
  uint16_t node_id;
  uint8_t ieee[8];
} anstd_setieee_t;








#line 62
typedef struct _anstd_reboot_t {

  uint8_t data_type;
  uint16_t node_group;
  uint16_t node_id;
  uint8_t delay_time;
} anstd_reboot_t;







#line 71
typedef struct _anstd_trace_item_t {

  uint16_t node_id;
  int8_t forward_rssi;
  int8_t backward_rssi;
} anstd_trace_item_t;








#line 77
typedef struct _anstd_trace_t {

  uint8_t data_type;
  uint8_t trace_dsn;
  uint16_t node_group;
  uint8_t total_count;
  uint8_t traced_count;
  anstd_trace_item_t items[1];
} anstd_trace_t;



typedef anstd_trace_t anstd_trace_ack_t;
# 7 "/opt/atos/tos/lib/atos/atp/atpcmd/app/AtpCmdPacketCommon.h"
enum __nesc_unnamed4276 {

  ATP_CMD_MAX_RECEIVE_PACKET = 128
};

enum __nesc_unnamed4277 {

  ATP_CMD_SOF_ID_1 = 0x37, 
  ATP_CMD_SOF_ID_2 = 0xA9, 

  ATP_CMD_STATE_SOF_1 = 0, 
  ATP_CMD_STATE_SOF_2 = 1, 
  ATP_CMD_STATE_HEADER = 2, 
  ATP_CMD_STATE_HCS = 3, 
  ATP_CMD_STATE_DATA = 4, 
  ATP_CMD_STATE_PCS = 5
};
#line 42
#line 35
typedef struct _atp_cmd_packet {

  uint8_t cmd;
  uint16_t len;
  uint8_t hcs;
  uint8_t data[ATP_CMD_MAX_RECEIVE_PACKET];
  uint8_t pcs;
} atp_cmd_packet_t;






enum __nesc_unnamed4278 {

  ATP_CMD_HEADER_SIZE_ALL = sizeof(uint8_t ) + sizeof(uint16_t ) + sizeof(uint8_t ), 
  ATP_CMD_HEADER_SIZE = sizeof(uint8_t ) + sizeof(uint16_t ), 
  ATP_CMD_HEADER_CMD_SIZE = sizeof(uint8_t ), 
  ATP_CMD_HEADER_LEN_SIZE = sizeof(uint16_t ), 
  ATP_CMD_HEADER_HCS_SIZE = sizeof(uint8_t )
};
# 15 "/opt/atos/tos/lib/atos/atp/atpapp/AtpAppPacket.h"
#line 10
typedef struct _atp_app_packet_header_t {

  uint8_t industry_code;
  uint8_t application_code;
  uint8_t data_type;
} atp_app_packet_header_t;
# 8 "/opt/atos/tos/lib/atos/atp/atpcmd/AtpCmdStd.h"
enum __nesc_unnamed4279 {

  ATP_STD_CMD = 0xf0, 
  ATP_STD_INDUSTRY_CODE = 0xff, 
  ATP_STD_APPLICATION_CODE = 0x01
};

enum __nesc_unnamed4280 {

  ATP_STD_DATA_TYPE_PING = 0x01, 
  ATP_STD_DATA_TYPE_PING_ACK = 0x81, 
  ATP_STD_DATA_TYPE_DISCOVERY = 0x02, 
  ATP_STD_DATA_TYPE_DISCOVERY_ACK = 0x82, 
  ATP_STD_DATA_TYPE_SET_IEEE_ADDR = 0x03, 
  ATP_STD_DATA_TYPE_REBOOT = 0x04
};

enum __nesc_unnamed4281 {

  ATP_STD_EQUIPMENT_TYPE_PC = 0x01, 
  ATP_STD_EQUIPMENT_TYPE_GATEWAY = 0x02, 
  ATP_STD_EQUIPMENT_TYPE_NODE = 0x03
};




#line 32
typedef struct _atp_std_general_info_t_ {

  uint8_t equipment_type;
} as_general_info_t;







#line 37
typedef struct _atp_std_gateway_info_t_ {

  uint8_t industry_code;
  uint8_t application_code;
  uint8_t ieee_addr[8];
  uint8_t radio_channel;
} as_gateway_info_t;










#line 45
typedef struct _atp_std_node_info_t_ {

  uint8_t industry_code;
  uint8_t application_code;
  uint8_t ieee_addr[8];
  uint8_t node_type;
  uint8_t radio_channel;
  uint8_t battery_capacity;
  uint8_t radio_quality;
} as_node_info_t;




#line 56
typedef struct _atp_std_ping_extra_t_ {

  uint8_t config;
} as_ping_extra_t;





#line 61
typedef struct _atp_std_discovery_extra_t_ {

  uint8_t radio_channel;
  uint16_t addr_area;
} as_discovery_extra_t;




#line 67
typedef struct _atp_std_ieee_addr_extra_t_ {

  uint8_t ieee_addr[8];
} as_ieee_addr_extra_t;
typedef TMilli RealMainP$FakeTimer$precision_tag;
enum HplCC2530Timer1C$__nesc_unnamed4282 {
  HplCC2530Timer1C$TOP_TASK_ID = 0U
};
typedef T32khz /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$frequency;
typedef /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$frequency /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm2$precision_tag;
typedef uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm2$size_type;
typedef /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$frequency /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$precision_tag;
typedef uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$size_type;
typedef /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$frequency /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$precision_tag;
typedef uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$size_type;
typedef /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$frequency /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$precision_tag;
typedef uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$size_type;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom*/Alarm32khz16C$0$__nesc_unnamed4283 {
  Alarm32khz16C$0$ALARM_ID = 0U
};
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
enum HalCC2530Uart0IsrC$__nesc_unnamed4284 {
  HalCC2530Uart0IsrC$RX_TOP_TASK_ID = 1U
};
enum HalCC2530Uart0IsrC$__nesc_unnamed4285 {
  HalCC2530Uart0IsrC$TX_TOP_TASK_ID = 2U
};
typedef TMilli /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$precision_tag;
typedef TMilli /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$precision_tag;
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC*/AMResourceC$0$__nesc_unnamed4286 {
  AMResourceC$0$AM_RESOURCE_ID = 0U
};
enum AMResourceCenterC$__nesc_unnamed4287 {
  AMResourceCenterC$AM_RESOURCE_COUNT = 4U
};
typedef message_t */*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$t;
typedef message_t */*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t;
typedef /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$t;
typedef T32khz RfMacBaseCsmaP$BackoffTimer$precision_tag;
typedef uint32_t RfMacBaseCsmaP$BackoffTimer$size_type;
enum RfHardwareRxC$__nesc_unnamed4288 {
  RfHardwareRxC$TOP_TASK_ID = 3U
};
enum /*RfMacBaseCsmaC.Alarm32khz32C.Alarm32khz16C*/Alarm32khz16C$1$__nesc_unnamed4289 {
  Alarm32khz16C$1$ALARM_ID = 1U
};
typedef T32khz /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_precision_tag;
typedef uint32_t /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type;
typedef T32khz /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$from_precision_tag;
typedef uint16_t /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$from_size_type;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_precision_tag /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$precision_tag;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$size_type;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$from_precision_tag /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$precision_tag;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$from_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$size_type;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_precision_tag /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Counter$precision_tag;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Counter$size_type;
typedef T32khz /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_precision_tag;
typedef uint32_t /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_size_type;
typedef T32khz /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$from_precision_tag;
typedef uint16_t /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$from_size_type;
typedef uint16_t /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$upper_count_type;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$from_precision_tag /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$precision_tag;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$from_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$size_type;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_precision_tag /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$Counter$precision_tag;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$Counter$size_type;
typedef TMilli AtosNetStdP$RebootTimer$precision_tag;
typedef TMilli /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$precision_tag;
typedef TMilli /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$precision_tag;
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC*/AMResourceC$2$__nesc_unnamed4290 {
  AMResourceC$2$AM_RESOURCE_ID = 1U
};
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC*/AMResourceC$3$__nesc_unnamed4291 {
  AMResourceC$3$AM_RESOURCE_ID = 2U
};
enum DsnFilterCenterC$__nesc_unnamed4292 {
  DsnFilterCenterC$DSN_FILTER_COUNT = 1U
};
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC*/AMResourceC$1$__nesc_unnamed4293 {
  AMResourceC$1$AM_RESOURCE_ID = 3U
};
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void DigBaseP$Boot$booted(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void DigBaseP$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void DigBaseP$showMenu$runTask(void);
#line 64
static  void DigBaseP$sendData$runTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *DigBaseP$Receive$receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void DigBaseP$UartStream$receivedByte(uint8_t arg_0x7eb73860);
#line 99
static   void DigBaseP$UartStream$receiveDone(uint8_t *arg_0x7eb72540, uint16_t arg_0x7eb726d0, error_t arg_0x7eb72858);
#line 57
static   void DigBaseP$UartStream$sendDone(uint8_t *arg_0x7eb747c8, uint16_t arg_0x7eb74958, error_t arg_0x7eb74ae0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
static  void WatchDogP$WatchDog$resetCpu(void);
# 58 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   void FlashIEEEP$ActiveMessageAddress$changed(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t FlashIEEEP$Init$init(void);
# 8 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
static  void FlashIEEEP$FlashIEEE$WriteIEEE(uint8_t *arg_0x7ea50510);
#line 5
static  uint16_t FlashIEEEP$FlashIEEE$GetShortAddress(void);

static  void FlashIEEEP$FlashIEEE$GetIEEE(uint8_t *arg_0x7ea50068);



static  void FlashIEEEP$FlashIEEE$WriteToAM(void);
#line 4
static  uint16_t FlashIEEEP$FlashIEEE$GetPANID(void);





static  void FlashIEEEP$FlashIEEE$WriteToRegister(void);
# 44 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);




static   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
#line 43
static   void ActiveMessageAddressC$ActiveMessageAddress$setAddress(am_group_t arg_0x7ea35030, am_addr_t arg_0x7ea351c0);
# 3 "/opt/atos/tos/chips/cc2530/flash/HalFlash.nc"
static  error_t HalFlashP$HalFlash$read(uint8_t *arg_0x7ea32330, uint32_t arg_0x7ea324c0, uint16_t arg_0x7ea32650);



static  error_t HalFlashP$HalFlash$erase(uint32_t arg_0x7ea30338);
#line 5
static  error_t HalFlashP$HalFlash$write(uint32_t arg_0x7ea32af8, uint8_t *arg_0x7ea32ca0, uint16_t arg_0x7ea32e30);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HalFlashP$Init$init(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void RealMainP$FakeTimer$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void RealMainP$fakeTask$runTask(void);
#line 56
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ec64200);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ec64200);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP$Scheduler$init(void);
#line 61
static  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 54
static  bool SchedulerBasicP$Scheduler$runNextTask(void);
# 6 "/opt/atos/tos/lib/atos/utils/ModuleReset.nc"
static  error_t McuSleepP$ModuleReset$default$reset(uint8_t arg_0x7ebe5310);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepP$McuSleep$sleep(void);
# 8 "/opt/atos/tos/lib/atos/power/McuSleepControl.nc"
static  void McuSleepP$McuSleepControl$default$beforeSleep(void);

static  void McuSleepP$McuSleepControl$default$afterWakeup(void);
# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgr.nc"
static  bool TopTaskMgrP$TopTaskMgr$hasTasks(void);
static  void TopTaskMgrP$TopTaskMgr$runTasks(void);
# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void TopTaskMgrP$TopTaskHandler$default$handler(
# 6 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
uint8_t arg_0x7ebb1360);
# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$INT_TIM1$fired(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm2$default$fired(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$CaptureChannel2$default$captured(uint16_t arg_0x7e921bc8);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$startAt(/*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$size_type arg_0x7e952c28, /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$size_type arg_0x7e952db8);
#line 62
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$stop(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Init$init(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$size_type /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$get(void);






static   bool /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$isOverflowPending(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$startAt(/*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$size_type arg_0x7e952c28, /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$size_type arg_0x7e952db8);
#line 62
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$stop(void);
# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$TopTaskHandler$handler(void);
# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void PlatformInterruptC$INT_UART1_TX$default$fired(void);
#line 4
static  void PlatformInterruptC$INT_UART1_RX$default$fired(void);
#line 4
static  void PlatformInterruptC$INT_ST$default$fired(void);
#line 4
static  void PlatformInterruptC$INT_P0$default$fired(void);
#line 4
static  void PlatformInterruptC$INT_P1$default$fired(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void);
#line 53
static   /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type arg_0x7e952c28, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type arg_0x7e952db8);
#line 105
static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop(void);




static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$firedTask$runTask(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x7e9a39b8, uint32_t arg_0x7e9a3b48);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 72
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030, 
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7e9a6788);








static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030, 
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7e9a6d58);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$UartStdControl$start(void);
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$Uart$get(uint8_t arg_0x7e7108d8);





static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$Uart$putDone(void);
# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$TxTaskHandler$handler(void);
# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$INT_UART0_TX$fired(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0StdControl$start(void);
# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$RxTaskHandler$handler(void);
# 41 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
static   error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0$put(uint8_t arg_0x7e710338);
# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$INT_UART0_RX$fired(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$SubAMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$resendTask$runTask(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AtosControl$start(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$SubAMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
#line 69
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDoneTask$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$fired(void);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AtosControl$start(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$ReceiveAck$receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMResource$sendDone(message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t AMResourceCenterP$AMResource$send(
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
uint8_t arg_0x7e5f3dd8, 
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
static  void AMResourceCenterP$AMResource$default$sendDone(
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
uint8_t arg_0x7e5f3dd8, 
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  void AMResourceCenterP$CoreSend$sendDone(message_t *arg_0x7e5e84c0, error_t arg_0x7e5e8648);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t AMResourceCenterP$AtosControl$start(void);
# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SubCoreSend$sendDone(message_t *arg_0x7e5e84c0, error_t arg_0x7e5e8648);
#line 7
static  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$CoreSend$send(message_t *arg_0x7e5e9998, uint8_t arg_0x7e5e9b20);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext$runTask(void);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$AtosControl$start(void);
# 32 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$head(void);
#line 49
static  error_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$enqueue(/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$t arg_0x7e5c8930);










static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$element(uint8_t arg_0x7e5c8ea8);






static  void /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$clear(void);
#line 24
static  uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$maxSize(void);
#line 65
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$remove(uint8_t arg_0x7e5c6990);
#line 40
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$dequeue(void);
#line 9
static  bool /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$empty(void);







static  uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$size(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void RfMacBaseCsmaP$BackoffTimer$fired(void);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  error_t RfMacBaseCsmaP$CoreSend$send(message_t *arg_0x7e5e9998, uint8_t arg_0x7e5e9b20);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void RfMacBaseCsmaP$signalDoneTask$runTask(void);
#line 64
static  void RfMacBaseCsmaP$doGo$runTask(void);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t RfMacBaseCsmaP$AtosControl$start(void);
#line 4
static  error_t RfHardwareP$AtosControl$start(void);
# 13 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
static  void RfPowerP$RfPower$oscOn(void);
#line 6
static  void RfPowerP$RfPower$radioOn(void);
#line 4
static  void RfPowerP$RfPower$reset(void);




static  void RfPowerP$RfPower$rxOn(void);
# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
static  void RfConfigP$RfConfig$flush(void);




static  uint8_t RfConfigP$RfConfig$getChannel(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RfConfigP$Init$init(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptRFErr$fired(void);
# 9 "/opt/tinyos-2.x/tos/interfaces/AtosScheduler.nc"
static  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$AtosScheduler$periodScheduler(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptFIFOP$fired(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$StdControl$start(void);
# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$TopTaskHandler$handler(void);
# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void RfInterruptsP$INT_RFERR$fired(void);
# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t RfInterruptsP$InterruptRFErr$enableRisingEdge(void);
# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void RfInterruptsP$INT_RF$fired(void);
# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t RfInterruptsP$InterruptFIFOP$enableRisingEdge(void);
# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareTx.nc"
static  error_t RfHardwareTxP$RfHardwareTx$txPrepare(uint8_t *arg_0x7e572c98, uint8_t arg_0x7e572e20);
static  error_t RfHardwareTxP$RfHardwareTx$txGo(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t RfHardwareTxP$StdControl$start(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$getNow(void);
#line 92
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$size_type arg_0x7e952c28, /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$size_type arg_0x7e952db8);
#line 55
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$start(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$size_type arg_0x7e953b10);






static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$stop(void);




static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$fired(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Counter$overflow(void);
#line 71
static   void /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$overflow(void);
#line 53
static   /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$Counter$size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$Counter$get(void);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t CC2530RandomLfsrP$Random$rand16(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2530RandomLfsrP$Init$init(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t RfPacketP$Packet$payloadLength(message_t *arg_0x7eb25e90);
#line 108
static  void *RfPacketP$Packet$getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
#line 95
static  uint8_t RfPacketP$Packet$maxPayloadLength(void);
#line 83
static  void RfPacketP$Packet$setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
# 58 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   void RfPacketP$ActiveMessageAddress$changed(void);
# 166 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_group_t RfPacketP$AMPacket$group(message_t *arg_0x7eb348b8);
#line 77
static  am_addr_t RfPacketP$AMPacket$source(message_t *arg_0x7eb42b90);
#line 57
static  am_addr_t RfPacketP$AMPacket$address(void);









static  am_addr_t RfPacketP$AMPacket$destination(message_t *arg_0x7eb425b0);
#line 110
static  void RfPacketP$AMPacket$setSource(message_t *arg_0x7eb40a20, am_addr_t arg_0x7eb40bb0);
#line 92
static  void RfPacketP$AMPacket$setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
#line 136
static  am_id_t RfPacketP$AMPacket$type(message_t *arg_0x7eb35aa0);
#line 125
static  bool RfPacketP$AMPacket$isForMe(message_t *arg_0x7eb35370);
#line 176
static  void RfPacketP$AMPacket$setGroup(message_t *arg_0x7eb32010, am_group_t arg_0x7eb321a0);







static  am_group_t RfPacketP$AMPacket$localGroup(void);
# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  uint8_t RfPacketP$PacketEx$packetHeaderSize(void);


static  bool RfPacketP$PacketEx$isValidPacket(message_t *arg_0x7e6b45f8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t RfReliableMacPacketP$Packet$payloadLength(message_t *arg_0x7eb25e90);
#line 108
static  void *RfReliableMacPacketP$Packet$getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
#line 95
static  uint8_t RfReliableMacPacketP$Packet$maxPayloadLength(void);
#line 83
static  void RfReliableMacPacketP$Packet$setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  uint8_t RfReliableMacPacketP$PacketEx$packetHeaderSize(void);
static  void *RfReliableMacPacketP$PacketEx$getPacketHeader(message_t *arg_0x7e6b4120);

static  bool RfReliableMacPacketP$PacketEx$isValidPacket(message_t *arg_0x7e6b45f8);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  uint8_t RfReliableMacAckP$RfReliableMacAck$fillAckMessage(message_t *arg_0x7e653b48, uint8_t arg_0x7e653cd8, message_t *arg_0x7e653e88, rf_ack_t *arg_0x7e652068);
static  void RfReliableMacAckP$RfReliableMacAck$receiveAckMessage(message_t *arg_0x7e652540, message_t *arg_0x7e6526f0, rf_ack_t *arg_0x7e6528a0);
# 4 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckEvent.nc"
static  uint8_t RfReliableMacAckP$RfReliableMacAckEvent$default$fillAckMessage(message_t *arg_0x7e3eab10, uint8_t arg_0x7e3eaca0, message_t *arg_0x7e3eae50, rf_ack_t *arg_0x7e3e7030);
static  void RfReliableMacAckP$RfReliableMacAckEvent$default$receiveAckMessage(message_t *arg_0x7e3e7508, message_t *arg_0x7e3e76b8, rf_ack_t *arg_0x7e3e7868);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$SubReceive$receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAckTask$runTask(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMSendAck$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AtosControl$start(void);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreReceive.nc"
static  void RfActiveMessageP$CoreReceive$receive(message_t *arg_0x7e393030);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *RfActiveMessageP$Snoop$default$receive(
# 8 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
uint8_t arg_0x7e398bb0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
#line 67
static  message_t *RfActiveMessageP$Receive$default$receive(
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
uint8_t arg_0x7e3983f8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t RfActiveMessageP$AtosControl$start(void);
# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareRx.nc"
static  void RfMacBaseReceiveP$RfHardwareRx$rxPacket(uint8_t *arg_0x7e5337e8, uint8_t arg_0x7e533970);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t AtosMacP$AtosControl$start(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void AtosNetStdP$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *AtosNetStdP$Receive$receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 17 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
static  void AtosNetStdP$AtosNetStd$default$receivedReboot(anstd_reboot_t *arg_0x7e2fc6a8);

static  void AtosNetStdP$AtosNetStd$default$receivedTraceAck(message_t *arg_0x7e2fa1f8, anstd_trace_ack_t *arg_0x7e2fa3b8);
#line 15
static  void AtosNetStdP$AtosNetStd$default$receivedDiscovery(anstd_discovery_t *arg_0x7e2fdd20);


static  void AtosNetStdP$AtosNetStd$default$receivedTrace(message_t *arg_0x7e2fcb58, anstd_trace_t *arg_0x7e2fcd08);
#line 6
static  error_t AtosNetStdP$AtosNetStd$sendNodeStatusUp(uint16_t arg_0x7e310d68);





static  void AtosNetStdP$AtosNetStd$default$beforeNodeStatusUp(anstd_node_status_t *arg_0x7e2fd1e0);

static  void AtosNetStdP$AtosNetStd$default$receivedNodeStatusUp(message_t *arg_0x7e2fd698, anstd_node_status_t *arg_0x7e2fd850);

static  void AtosNetStdP$AtosNetStd$default$receivedSetIEEE(anstd_setieee_t *arg_0x7e2fc1f8);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void AtosNetStdP$nodeStatusUpTask$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void AtosNetStdP$RebootTimer$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void AtosNetStdP$rebootTask$runTask(void);
#line 64
static  void AtosNetStdP$sendDoneCheck$runTask(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$SubAMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$resendTask$runTask(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AtosControl$start(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$SubAMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
#line 69
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDoneTask$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$fired(void);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AtosControl$start(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$ReceiveAck$receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMResource$sendDone(message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$SubReceive$receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAckTask$runTask(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMSendAck$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AtosControl$start(void);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMResource$sendDone(message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
static  bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$DsnFilter$filter(
# 5 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
uint8_t arg_0x7e21adc0, 
# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
uint16_t arg_0x7e3c9ba8, uint8_t arg_0x7e3c9d30);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$Init$init(void);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMResource$sendDone(message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t DigBaseP$UartStdControl$start(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t DigBaseP$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *DigBaseP$Packet$getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
#line 95
static  uint8_t DigBaseP$Packet$maxPayloadLength(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t DigBaseP$showMenu$postTask(void);
#line 56
static   error_t DigBaseP$sendData$postTask(void);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t DigBaseP$AtosControl$start(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t DigBaseP$AMPacket$address(void);
# 34 "DigBaseP.nc"
enum DigBaseP$__nesc_unnamed4294 {
#line 34
  DigBaseP$showMenu = 0U
};
#line 34
typedef int DigBaseP$__nesc_sillytask_showMenu[DigBaseP$showMenu];
#line 85
enum DigBaseP$__nesc_unnamed4295 {
#line 85
  DigBaseP$sendData = 1U
};
#line 85
typedef int DigBaseP$__nesc_sillytask_sendData[DigBaseP$sendData];
#line 20
enum DigBaseP$__nesc_unnamed4296 {

  DigBaseP$MAX_ADDRESS_LEN = 5, 
  DigBaseP$INPUT_ADDRESS = 0, 
  DigBaseP$INPUT_DATA = 1
};

message_t DigBaseP$m_msg;
uint8_t DigBaseP$m_len = 0;
char DigBaseP$m_address_str[DigBaseP$MAX_ADDRESS_LEN] = { 0 };
uint8_t DigBaseP$m_address_index = 0;
uint8_t DigBaseP$m_input_type = 0;
uint8_t DigBaseP$sensor_type = 0;

static inline  void DigBaseP$showMenu$runTask(void);
#line 52
static inline uint16_t DigBaseP$getDestAddress(void);
#line 85
static inline  void DigBaseP$sendData$runTask(void);
#line 114
static inline  void DigBaseP$AMSend$sendDone(message_t *msg, error_t success);










static inline   void DigBaseP$UartStream$receivedByte(uint8_t c);
#line 176
static inline  void DigBaseP$Boot$booted(void);
#line 195
static inline   void DigBaseP$UartStream$sendDone(uint8_t *buf, uint16_t len, error_t error);



static inline   void DigBaseP$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error);




static inline  message_t *DigBaseP$Receive$receive(message_t *msg, void *payload, uint8_t len);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$PlatformInit$init(void);
# 11 "/opt/atos/tos/platforms/antc5/boot/PlatformP.nc"
static error_t PlatformP$clockSelect32k(uint8_t source);
#line 29
static void PlatformP$clockSetMainSrc(uint8_t source);
#line 52
static inline  error_t PlatformP$Init$init(void);
# 8 "/opt/atos/tos/chips/cc2530/watchdog/WatchDogP.nc"
static  void WatchDogP$WatchDog$resetCpu(void);
# 3 "/opt/atos/tos/chips/cc2530/flash/HalFlash.nc"
static  error_t FlashIEEEP$HalFlash$read(uint8_t *arg_0x7ea32330, uint32_t arg_0x7ea324c0, uint16_t arg_0x7ea32650);



static  error_t FlashIEEEP$HalFlash$erase(uint32_t arg_0x7ea30338);
#line 5
static  error_t FlashIEEEP$HalFlash$write(uint32_t arg_0x7ea32af8, uint8_t *arg_0x7ea32ca0, uint16_t arg_0x7ea32e30);
# 43 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   void FlashIEEEP$ActiveMessageAddress$setAddress(am_group_t arg_0x7ea35030, am_addr_t arg_0x7ea351c0);
# 47 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
uint8_t FlashIEEEP$m_ieee[8];
uint8_t FlashIEEEP$m_ieee_flash[8];



static inline void FlashIEEEP$ieeeProtect(void);
#line 108
static void FlashIEEEP$readFromFlash(void);
#line 129
static inline  error_t FlashIEEEP$Init$init(void);
#line 144
static  uint16_t FlashIEEEP$FlashIEEE$GetPANID(void);





static  uint16_t FlashIEEEP$FlashIEEE$GetShortAddress(void);










static inline  void FlashIEEEP$FlashIEEE$GetIEEE(uint8_t *ieee);




static inline  void FlashIEEEP$FlashIEEE$WriteIEEE(uint8_t *ieee);
#line 193
static  void FlashIEEEP$FlashIEEE$WriteToRegister(void);
#line 217
static  void FlashIEEEP$FlashIEEE$WriteToAM(void);










static inline   void FlashIEEEP$ActiveMessageAddress$changed(void);
# 58 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   void ActiveMessageAddressC$ActiveMessageAddress$changed(void);
# 51 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);








static inline   void ActiveMessageAddressC$ActiveMessageAddress$setAddress(am_group_t myGroup, am_addr_t myAddr);
#line 82
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
#line 95
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 35 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
void HalFlashP$HalCC2530FlashRead(uint8_t *destination, uint32_t source, uint16_t length);
void HalFlashP$HalCC2530FlashWrite(uint32_t destination, uint8_t *source, uint16_t length);

static inline  error_t HalFlashP$Init$init(void);





static inline  error_t HalFlashP$HalFlash$read(uint8_t *destination, uint32_t source, uint16_t length);






static inline  error_t HalFlashP$HalFlash$write(uint32_t destination, uint8_t *source, uint16_t length);






static  error_t HalFlashP$HalFlash$erase(uint32_t address);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$SoftwareInit$init(void);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RealMainP$Boot$booted(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$PlatformInit$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t RealMainP$fakeTask$postTask(void);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void RealMainP$Scheduler$init(void);
#line 61
static  void RealMainP$Scheduler$taskLoop(void);
#line 54
static  bool RealMainP$Scheduler$runNextTask(void);
# 103 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
enum RealMainP$__nesc_unnamed4297 {
#line 103
  RealMainP$fakeTask = 2U
};
#line 103
typedef int RealMainP$__nesc_sillytask_fakeTask[RealMainP$fakeTask];
#line 56
int main(void)   ;
#line 103
static inline  void RealMainP$fakeTask$runTask(void);







static inline  void RealMainP$FakeTimer$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ec64200);
# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgr.nc"
static  bool SchedulerBasicP$TopTaskMgr$hasTasks(void);
static  void SchedulerBasicP$TopTaskMgr$runTasks(void);
# 9 "/opt/tinyos-2.x/tos/interfaces/AtosScheduler.nc"
static  void SchedulerBasicP$AtosScheduler$periodScheduler(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 54 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4298 {

  SchedulerBasicP$NUM_TASKS = 17U + 1, 
  SchedulerBasicP$NO_TASK = 255
};

uint8_t SchedulerBasicP$m_head = 0;
uint8_t SchedulerBasicP$m_tail = 0;
uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void);
#line 108
static inline bool SchedulerBasicP$isWaiting(uint8_t id);
#line 132
static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 181
static inline  void SchedulerBasicP$Scheduler$init(void);
#line 198
static  bool SchedulerBasicP$Scheduler$runNextTask(void);
#line 215
static inline  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 264
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 6 "/opt/atos/tos/lib/atos/utils/ModuleReset.nc"
static  error_t McuSleepP$ModuleReset$reset(uint8_t arg_0x7ebe5310);
# 8 "/opt/atos/tos/lib/atos/power/McuSleepControl.nc"
static  void McuSleepP$McuSleepControl$beforeSleep(void);

static  void McuSleepP$McuSleepControl$afterWakeup(void);
# 12 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
bool McuSleepP$m_need_sleep = FALSE;
#line 36
static inline   void McuSleepP$McuSleep$sleep(void);
#line 78
static inline   void McuSleepP$McuSleepControl$default$beforeSleep(void);


static inline   void McuSleepP$McuSleepControl$default$afterWakeup(void);


static inline   error_t McuSleepP$ModuleReset$default$reset(uint8_t reset_level);
# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void TopTaskMgrP$TopTaskHandler$handler(
# 6 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
uint8_t arg_0x7ebb1360);



enum TopTaskMgrP$__nesc_unnamed4299 {

  TopTaskMgrP$TOP_TASK_COUNT = 4U
};

 uint8_t TopTaskMgrP$m_task_flag[TopTaskMgrP$TOP_TASK_COUNT];






static  bool TopTaskMgrP$TopTaskMgr$hasTasks(void);
#line 40
static inline  void TopTaskMgrP$TopTaskMgr$runTasks(void);
#line 57
static inline   void TopTaskMgrP$TopTaskHandler$default$handler(uint8_t n);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm2$fired(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$CaptureChannel2$captured(uint16_t arg_0x7e921bc8);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$fired(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$fired(void);
# 38 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  error_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Init$init(void);
#line 78
static inline   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$stop(void);
#line 121
static inline   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$startAt(uint16_t t0, uint16_t dt);
#line 159
static inline   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$stop(void);
#line 200
static inline   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$startAt(uint16_t t0, uint16_t dt);
#line 316
static   uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$get(void);










static inline   bool /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$isOverflowPending(void);
#line 402
uint8_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag = 0x00;
static inline  void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$TopTaskHandler$handler(void);
#line 454
static inline  void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$INT_TIM1$fired(void);
#line 534
static inline    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm2$default$fired(void);

static inline    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$CaptureChannel2$default$captured(uint16_t time);
# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void PlatformInterruptC$INT_RFERR$fired(void);
#line 4
static  void PlatformInterruptC$INT_TIM1$fired(void);
#line 4
static  void PlatformInterruptC$INT_UART1_TX$fired(void);
#line 4
static  void PlatformInterruptC$INT_RF$fired(void);
#line 4
static  void PlatformInterruptC$INT_UART1_RX$fired(void);
#line 4
static  void PlatformInterruptC$INT_UART0_TX$fired(void);
#line 4
static  void PlatformInterruptC$INT_ST$fired(void);
#line 4
static  void PlatformInterruptC$INT_P0$fired(void);
#line 4
static  void PlatformInterruptC$INT_P1$fired(void);
#line 4
static  void PlatformInterruptC$INT_UART0_RX$fired(void);
# 22 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
void __vector_0(void)   __attribute((interrupt)) ;
#line 35
void __vector_16(void)   __attribute((interrupt)) ;
#line 55
void __vector_9(void)   __attribute((interrupt)) ;
#line 69
void __vector_2(void)   __attribute((interrupt)) ;
#line 81
void __vector_7(void)   __attribute((interrupt)) ;
#line 94
void __vector_3(void)   __attribute((interrupt)) ;






static inline   void PlatformInterruptC$INT_UART1_RX$default$fired(void);




void __vector_14(void)   __attribute((interrupt)) ;






static inline   void PlatformInterruptC$INT_UART1_TX$default$fired(void);





void __vector_5(void)   __attribute((interrupt)) ;






static inline   void PlatformInterruptC$INT_ST$default$fired(void);





void __vector_13(void)   __attribute((interrupt)) ;






void __vector_15(void)   __attribute((interrupt)) ;






static inline   void PlatformInterruptC$INT_P0$default$fired(void);





static inline   void PlatformInterruptC$INT_P1$default$fired(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$size_type /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get(void);






static   bool /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type /*CounterMilli32C.Transform*/TransformCounterC$0$m_upper = 0;

enum /*CounterMilli32C.Transform*/TransformCounterC$0$__nesc_unnamed4300 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 5, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type ) + 5, 



  TransformCounterC$0$OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get(void);
#line 125
static inline   void /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$fired(void);
#line 92
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e952c28, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e952db8);
#line 62
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$stop(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$__nesc_unnamed4301 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type ) - 1 - 5, 
  TransformAlarmC$0$MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow(void);




static inline   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm(void);









static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop(void);




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm(void);
#line 140
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type dt);
#line 155
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void);
#line 170
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e952c28, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e952db8);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$firedTask$postTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 81 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4302 {
#line 81
  AlarmToTimerC$0$firedTask = 3U
};
#line 81
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_firedTask[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$firedTask];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = 0;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = FALSE;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 73
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);







static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$firedTask$runTask(void);
#line 93
static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
#line 113
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);




static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void);
#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7e9a39b8, uint32_t arg_0x7e9a3b48);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030);
#line 59
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4303 {
#line 59
  VirtualizeTimerC$0$updateFromTimer = 4U
};
#line 59
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4304 {

  VirtualizeTimerC$0$NUM_TIMERS = 6U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4305 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];



static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 98
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
#line 152
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 174
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);








static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);








static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 232
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$UartStream$receivedByte(uint8_t arg_0x7eb73860);
#line 99
static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$UartStream$receiveDone(uint8_t *arg_0x7eb72540, uint16_t arg_0x7eb726d0, error_t arg_0x7eb72858);
#line 57
static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$UartStream$sendDone(uint8_t *arg_0x7eb747c8, uint16_t arg_0x7eb74958, error_t arg_0x7eb74ae0);
# 41 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
static   error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$Uart$put(uint8_t arg_0x7e710338);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$subUartStdControl$start(void);
# 13 "/opt/atos/tos/chips/cc2530/usart/HplCC2530UartGenericP.nc"
 uint8_t */*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_buf;
#line 13
 uint8_t */*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_buf;
 uint16_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_len;
#line 14
 uint16_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_len;
 uint16_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_pos;
#line 15
 uint16_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_pos;


static inline  error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$UartStdControl$start(void);
#line 70
static inline   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$Uart$get(uint8_t data);
#line 106
static inline   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$Uart$putDone(void);
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
static   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0$get(uint8_t arg_0x7e7108d8);





static   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0$putDone(void);
# 20 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
uint8_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_data[1 << 6] = { 0 };
#line 20
uint8_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_head = 0;
#line 20
uint8_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_tail = 0;

static inline error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$doUart0Init(uint32_t baud);







static inline  error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0StdControl$start(void);










static inline   error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0$put(uint8_t data);
#line 82
static inline  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$INT_UART0_RX$fired(void);







static inline  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$INT_UART0_TX$fired(void);
#line 104
static inline  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$RxTaskHandler$handler(void);
#line 121
static inline  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$TxTaskHandler$handler(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$SubAMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$PacketEx$getPacketHeader(message_t *arg_0x7e6b4120);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$resendTask$postTask(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$Packet$payloadLength(message_t *arg_0x7eb25e90);
#line 83
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$Packet$setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$SubAtosControl$start(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AMPacket$destination(message_t *arg_0x7eb425b0);
#line 92
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AMPacket$setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
# 48 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$__nesc_unnamed4306 {
#line 48
  RfReliableMacRetrySendP$0$resendTask = 5U
};
#line 48
typedef int /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$__nesc_sillytask_resendTask[/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$resendTask];
#line 19
uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_sending = FALSE;
message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_msg;
uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_retry_times = 0;


static void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$signalDone(message_t *msg, error_t result);
#line 43
static error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$doSend(message_t *msg);




static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$resendTask$runTask(void);
#line 74
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len);
#line 129
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$SubAMSend$sendDone(message_t *msg, error_t error);
#line 150
bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_started = FALSE;
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AtosControl$start(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$SubAMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMPacket$source(message_t *arg_0x7eb42b90);
#line 67
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMPacket$destination(message_t *arg_0x7eb425b0);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$PacketEx$getPacketHeader(message_t *arg_0x7e6b4120);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$startOneShot(uint32_t arg_0x7e9a6d58);




static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$stop(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$SubPacket$payloadLength(message_t *arg_0x7eb25e90);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$RfReliableMacAck$receiveAckMessage(message_t *arg_0x7e652540, message_t *arg_0x7e6526f0, rf_ack_t *arg_0x7e6528a0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDoneTask$postTask(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$startOneShot(uint32_t arg_0x7e9a6d58);




static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$stop(void);
# 31 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$__nesc_unnamed4307 {
#line 31
  RfReliableMacSendP$0$signalDoneTask = 6U
};
#line 31
typedef int /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$__nesc_sillytask_signalDoneTask[/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDoneTask];
#line 26
uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending = FALSE;
message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg;
error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_result;


static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDoneTask$runTask(void);
#line 51
static void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDone(message_t *msg, error_t result);
#line 71
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$fired(void);







static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$fired(void);









static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len);
#line 139
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$SubAMSend$sendDone(message_t *msg, error_t error);
#line 158
static inline  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$ReceiveAck$receive(message_t *ack_msg, void *payload, uint8_t len);
#line 203
bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_started = FALSE;
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AtosControl$start(void);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMResource$send(am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len);
#line 39
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMResource$sendDone(message_t *msg, error_t error);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void AMResourceCenterP$AMResource$sendDone(
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
uint8_t arg_0x7e5f3dd8, 
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void AMResourceCenterP$Packet$setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t AMResourceCenterP$SubAtosControl$start(void);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  error_t AMResourceCenterP$CoreSend$send(message_t *arg_0x7e5e9998, uint8_t arg_0x7e5e9b20);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t AMResourceCenterP$AMPacket$address(void);
#line 110
static  void AMResourceCenterP$AMPacket$setSource(message_t *arg_0x7eb40a20, am_addr_t arg_0x7eb40bb0);
#line 92
static  void AMResourceCenterP$AMPacket$setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
#line 176
static  void AMResourceCenterP$AMPacket$setGroup(message_t *arg_0x7eb32010, am_group_t arg_0x7eb321a0);







static  am_group_t AMResourceCenterP$AMPacket$localGroup(void);
# 17 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static  error_t AMResourceCenterP$AMResource$send(uint8_t resource_id, am_addr_t addr, message_t *msg, uint8_t len);
#line 70
static inline  void AMResourceCenterP$CoreSend$sendDone(message_t *msg, error_t result);





static   void AMResourceCenterP$AMResource$default$sendDone(uint8_t resource_id, message_t *msg, error_t error);





bool AMResourceCenterP$m_started = FALSE;
static inline  error_t AMResourceCenterP$AtosControl$start(void);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SubCoreSend$send(message_t *arg_0x7e5e9998, uint8_t arg_0x7e5e9b20);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$Random$rand16(void);
# 49 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
static  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$enqueue(/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$t arg_0x7e5c8930);










static  /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$element(uint8_t arg_0x7e5c8ea8);






static  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$clear(void);
#line 40
static  /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$dequeue(void);
#line 9
static  bool /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$empty(void);







static  uint8_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$size(void);
# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$CoreSend$sendDone(message_t *arg_0x7e5e84c0, error_t arg_0x7e5e8648);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext$postTask(void);
# 23 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
enum /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$__nesc_unnamed4308 {
#line 23
  RfMacBaseSendP$0$sendNext = 7U
};
#line 23
typedef int /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$__nesc_sillytask_sendNext[/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext];
#line 18
bool /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_sending = FALSE;

uint8_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_hardware_dsn = 0;


static inline  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext$runTask(void);
#line 74
static inline int /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$indexOfMessage(uint8_t resource_id);
#line 93
static inline error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$enqueueMessage(message_t *msg);
#line 117
static inline  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SubCoreSend$sendDone(message_t *msg, error_t result);
#line 139
static inline  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$CoreSend$send(message_t *msg, uint8_t len);
#line 185
bool /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_started = FALSE;
static inline  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$AtosControl$start(void);
# 10 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue[4];
uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$head = 0;
uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$tail = 0;
uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$size = 0;

static inline  bool /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$empty(void);







static inline  uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$size(void);







static inline  uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$maxSize(void);







static inline  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$head(void);







static inline  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$dequeue(void);
#line 63
static inline  error_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$enqueue(/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t newVal);
#line 82
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$element(uint8_t idx);
#line 96
static inline  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$remove(uint8_t idx);
#line 124
static inline  void /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$clear(void);
# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareTx.nc"
static  error_t RfMacBaseCsmaP$RfHardwareTx$txPrepare(uint8_t *arg_0x7e572c98, uint8_t arg_0x7e572e20);
static  error_t RfMacBaseCsmaP$RfHardwareTx$txGo(void);
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void RfMacBaseCsmaP$BackoffTimer$start(RfMacBaseCsmaP$BackoffTimer$size_type arg_0x7e953b10);






static   void RfMacBaseCsmaP$BackoffTimer$stop(void);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RfMacBaseCsmaP$Random$rand16(void);
# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  void RfMacBaseCsmaP$CoreSend$sendDone(message_t *arg_0x7e5e84c0, error_t arg_0x7e5e8648);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t RfMacBaseCsmaP$signalDoneTask$postTask(void);
#line 56
static   error_t RfMacBaseCsmaP$doGo$postTask(void);
# 7 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
static  void RfMacBaseCsmaP$FlashIEEE$GetIEEE(uint8_t *arg_0x7ea50068);
# 53 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
enum RfMacBaseCsmaP$__nesc_unnamed4309 {
#line 53
  RfMacBaseCsmaP$signalDoneTask = 8U
};
#line 53
typedef int RfMacBaseCsmaP$__nesc_sillytask_signalDoneTask[RfMacBaseCsmaP$signalDoneTask];
#line 105
enum RfMacBaseCsmaP$__nesc_unnamed4310 {
#line 105
  RfMacBaseCsmaP$doGo = 9U
};
#line 105
typedef int RfMacBaseCsmaP$__nesc_sillytask_doGo[RfMacBaseCsmaP$doGo];
#line 20
enum RfMacBaseCsmaP$__nesc_unnamed4311 {

  RfMacBaseCsmaP$RF_TIME_ACK_TURNAROUND = 7, 
  RfMacBaseCsmaP$RF_TIME_SYMBOL = 2, 
  RfMacBaseCsmaP$RF_BACKOFF_PERIOD = 20 / RfMacBaseCsmaP$RF_TIME_SYMBOL, 
  RfMacBaseCsmaP$RF_MIN_BACKOFF = 20 / RfMacBaseCsmaP$RF_TIME_SYMBOL, 
  RfMacBaseCsmaP$RF_CONGESTION_MAX = 100
};


enum RfMacBaseCsmaP$__nesc_unnamed4312 {

  RfMacBaseCsmaP$CSMA_STATE_SAMPLE_CCA, 
  RfMacBaseCsmaP$CSMA_STATE_BEGIN_SEND
};


uint8_t RfMacBaseCsmaP$m_test_ieee[8];


uint8_t RfMacBaseCsmaP$m_state = RfMacBaseCsmaP$CSMA_STATE_SAMPLE_CCA;
uint8_t RfMacBaseCsmaP$m_congestion_count = 0;
error_t RfMacBaseCsmaP$m_result;
message_t *RfMacBaseCsmaP$m_msg = (void *)0;
bool RfMacBaseCsmaP$m_cancel = FALSE;


uint8_t RfMacBaseCsmaP$m_congestion_delay = 0;
uint16_t RfMacBaseCsmaP$m_this_delay = 0;
uint8_t RfMacBaseCsmaP$m_this_random = 0;



static inline  void RfMacBaseCsmaP$signalDoneTask$runTask(void);










static void RfMacBaseCsmaP$signalDone(error_t result);










static inline uint32_t RfMacBaseCsmaP$initBackoffTimer(void);







static inline uint32_t RfMacBaseCsmaP$congestionBackoffTimer(void);







static inline void RfMacBaseCsmaP$congestion(void);
#line 105
static inline  void RfMacBaseCsmaP$doGo$runTask(void);
#line 135
static inline   void RfMacBaseCsmaP$BackoffTimer$fired(void);
#line 164
static inline  error_t RfMacBaseCsmaP$CoreSend$send(message_t *msg, uint8_t len);
#line 225
bool RfMacBaseCsmaP$m_started = FALSE;
static inline  error_t RfMacBaseCsmaP$AtosControl$start(void);
# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
static  void RfHardwareP$RfConfig$flush(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t RfHardwareP$RxControl$start(void);
#line 74
static  error_t RfHardwareP$TxControl$start(void);
# 13 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
static  void RfHardwareP$RfPower$oscOn(void);
#line 6
static  void RfHardwareP$RfPower$radioOn(void);
#line 4
static  void RfHardwareP$RfPower$reset(void);




static  void RfHardwareP$RfPower$rxOn(void);
# 19 "/opt/atos/tos/chips/rf2530/hardware/RfHardwareP.nc"
static inline  error_t RfHardwareP$AtosControl$start(void);
# 11 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static inline  void RfPowerP$RfPower$reset(void);




static inline  void RfPowerP$RfPower$radioOn(void);
#line 85
static inline  void RfPowerP$RfPower$rxOn(void);
#line 103
static inline  void RfPowerP$RfPower$oscOn(void);
# 17 "/opt/atos/tos/chips/rf2530/hardware/control/RfConfigP.nc"
uint8_t RfConfigP$m_channel;

uint8_t RfConfigP$m_tx_power;

bool RfConfigP$m_hw_auto_ack;

bool RfConfigP$m_address_recognition;


static inline void RfConfigP$writeChannel(void);







static inline void RfConfigP$writeFilter(void);
#line 52
static inline void RfConfigP$writeFIFOPThrehold(void);




static inline void RfConfigP$writeTxPower(void);







static inline void RfConfigP$RfConfigWrite(void);
#line 103
static inline  error_t RfConfigP$Init$init(void);
#line 135
static inline  void RfConfigP$RfConfig$flush(void);







static inline  uint8_t RfConfigP$RfConfig$getChannel(void);
# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptRFErr$enableRisingEdge(void);
# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareRx.nc"
static  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$RfHardwareRx$rxPacket(uint8_t *arg_0x7e5337e8, uint8_t arg_0x7e533970);
# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptFIFOP$enableRisingEdge(void);
# 23 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
uint8_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_data[1 << 8] = { 0 };
#line 23
uint8_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head = 0;
#line 23
uint8_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail = 0;









static inline  error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$StdControl$start(void);
#line 58
uint8_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf[sizeof(message_t )];


static bool /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$readRfBuf(uint8_t *data, uint8_t length);
#line 78
static inline void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$receiveNextPacket(void);
#line 141
static inline  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$TopTaskHandler$handler(void);
#line 153
static inline   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptFIFOP$fired(void);
#line 176
static inline   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptRFErr$fired(void);




static inline  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$AtosScheduler$periodScheduler(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void RfInterruptsP$InterruptRFErr$fired(void);
#line 57
static   void RfInterruptsP$InterruptFIFOP$fired(void);
# 36 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static inline   error_t RfInterruptsP$InterruptFIFOP$enableRisingEdge(void);
#line 59
static inline   error_t RfInterruptsP$InterruptRFErr$enableRisingEdge(void);
#line 80
static inline  void RfInterruptsP$INT_RFERR$fired(void);
#line 92
static inline  void RfInterruptsP$INT_RF$fired(void);
# 14 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareTxP.nc"
static inline void RfHardwareTxP$writeTxfifo(uint8_t *buf, uint8_t len);
#line 27
static inline  error_t RfHardwareTxP$StdControl$start(void);
#line 45
static inline  error_t RfHardwareTxP$RfHardwareTx$txPrepare(uint8_t *packet, uint8_t len);
#line 91
static inline  error_t RfHardwareTxP$RfHardwareTx$txGo(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$fired(void);
#line 92
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$size_type arg_0x7e952c28, /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$size_type arg_0x7e952db8);
#line 62
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$stop(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Counter$size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Counter$get(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_t0;
/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_dt;

enum /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$__nesc_unnamed4313 {

  TransformAlarmC$1$MAX_DELAY_LOG2 = 8 * sizeof(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$from_size_type ) - 1 - 0, 
  TransformAlarmC$1$MAX_DELAY = (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type )1 << /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$MAX_DELAY_LOG2
};

static inline   /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$getNow(void);
#line 91
static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$stop(void);




static void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$set_alarm(void);
#line 140
static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type t0, /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type dt);









static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$start(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type dt);




static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$fired(void);
#line 170
static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Counter$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$get(void);






static   bool /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$isOverflowPending(void);










static   void /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.TransformCounterC*/TransformCounterC$1$upper_count_type /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$m_upper = 0;

enum /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$__nesc_unnamed4314 {

  TransformCounterC$1$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$1$HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC$1$from_size_type ) - /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$LOW_SHIFT_RIGHT, 
  TransformCounterC$1$NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_size_type ) - 8 * sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC$1$from_size_type ) + 0, 



  TransformCounterC$1$OVERFLOW_MASK = /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$NUM_UPPER_BITS ? ((/*Counter32khz32C.TransformCounterC*/TransformCounterC$1$upper_count_type )2 << (/*Counter32khz32C.TransformCounterC*/TransformCounterC$1$NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$Counter$get(void);
#line 125
static inline   void /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$overflow(void);
# 10 "/opt/atos/tos/chips/cc2530/random/CC2530RandomLfsrP.nc"
static inline  error_t CC2530RandomLfsrP$Init$init(void);
#line 69
static   uint16_t CC2530RandomLfsrP$Random$rand16(void);
# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
static  void RfPacketP$WatchDog$resetCpu(void);
# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t RfPacketP$ActiveMessageAddress$amAddress(void);




static   am_group_t RfPacketP$ActiveMessageAddress$amGroup(void);
# 17 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
bool RfPacketP$m_address_saved = FALSE;

am_addr_t RfPacketP$m_addr = TOS_AM_ADDRESS;


bool RfPacketP$m_group_saved = FALSE;
am_group_t RfPacketP$m_group = TOS_AM_GROUP;


static  am_addr_t RfPacketP$AMPacket$address(void);
#line 49
static inline  am_addr_t RfPacketP$AMPacket$destination(message_t *amsg);




static inline  am_addr_t RfPacketP$AMPacket$source(message_t *amsg);




static inline  void RfPacketP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);




static inline  void RfPacketP$AMPacket$setSource(message_t *amsg, am_addr_t addr);




static inline  bool RfPacketP$AMPacket$isForMe(message_t *amsg);






static inline  am_id_t RfPacketP$AMPacket$type(message_t *amsg);









static inline  am_group_t RfPacketP$AMPacket$group(message_t *amsg);




static inline  void RfPacketP$AMPacket$setGroup(message_t *amsg, am_group_t grp);




static inline  am_group_t RfPacketP$AMPacket$localGroup(void);
#line 124
static inline  uint8_t RfPacketP$Packet$payloadLength(message_t *msg);




static inline  void RfPacketP$Packet$setPayloadLength(message_t *msg, uint8_t len);




static inline  uint8_t RfPacketP$Packet$maxPayloadLength(void);




static  void *RfPacketP$Packet$getPayload(message_t *msg, uint8_t *len);










static inline  uint8_t RfPacketP$PacketEx$packetHeaderSize(void);









static inline  bool RfPacketP$PacketEx$isValidPacket(message_t *msg);
#line 182
static inline   void RfPacketP$ActiveMessageAddress$changed(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t RfReliableMacPacketP$SubPacket$payloadLength(message_t *arg_0x7eb25e90);
#line 108
static  void *RfReliableMacPacketP$SubPacket$getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
#line 95
static  uint8_t RfReliableMacPacketP$SubPacket$maxPayloadLength(void);
#line 83
static  void RfReliableMacPacketP$SubPacket$setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
# 8 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  bool RfReliableMacPacketP$SubPacketEx$isValidPacket(message_t *arg_0x7e6b45f8);
# 20 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static inline  uint8_t RfReliableMacPacketP$Packet$payloadLength(message_t *msg);




static inline  void RfReliableMacPacketP$Packet$setPayloadLength(message_t *msg, uint8_t len);




static inline  uint8_t RfReliableMacPacketP$Packet$maxPayloadLength(void);




static  void *RfReliableMacPacketP$Packet$getPayload(message_t *msg, uint8_t *len);










static inline  uint8_t RfReliableMacPacketP$PacketEx$packetHeaderSize(void);




static inline  void *RfReliableMacPacketP$PacketEx$getPacketHeader(message_t *msg);




static  bool RfReliableMacPacketP$PacketEx$isValidPacket(message_t *msg);
# 4 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckEvent.nc"
static  uint8_t RfReliableMacAckP$RfReliableMacAckEvent$fillAckMessage(message_t *arg_0x7e3eab10, uint8_t arg_0x7e3eaca0, message_t *arg_0x7e3eae50, rf_ack_t *arg_0x7e3e7030);
static  void RfReliableMacAckP$RfReliableMacAckEvent$receiveAckMessage(message_t *arg_0x7e3e7508, message_t *arg_0x7e3e76b8, rf_ack_t *arg_0x7e3e7868);
# 11 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static inline uint8_t RfReliableMacAckP$fillAckMessageDefault(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack);









static  uint8_t RfReliableMacAckP$RfReliableMacAck$fillAckMessage(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack);










static inline  void RfReliableMacAckP$RfReliableMacAck$receiveAckMessage(message_t *send_msg, message_t *ack_msg, rf_ack_t *ack);




static inline   uint8_t RfReliableMacAckP$RfReliableMacAckEvent$default$fillAckMessage(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack);




static inline   void RfReliableMacAckP$RfReliableMacAckEvent$default$receiveAckMessage(message_t *send_msg, message_t *ack_msg, rf_ack_t *ack);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$PacketEx$getPacketHeader(message_t *arg_0x7e6b4120);

static  bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$PacketEx$isValidPacket(message_t *arg_0x7e6b45f8);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$RfReliableMacAck$fillAckMessage(message_t *arg_0x7e653b48, uint8_t arg_0x7e653cd8, message_t *arg_0x7e653e88, rf_ack_t *arg_0x7e652068);
# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
static  bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$DsnFilter$filter(uint16_t arg_0x7e3c9ba8, uint8_t arg_0x7e3c9d30);
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$SubPacket$getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAckTask$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$Receive$receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMSendAck$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 166 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_group_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$group(message_t *arg_0x7eb348b8);
#line 77
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$source(message_t *arg_0x7eb42b90);
#line 67
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$destination(message_t *arg_0x7eb425b0);
#line 92
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
#line 176
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$setGroup(message_t *arg_0x7eb32010, am_group_t arg_0x7eb321a0);
# 47 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$__nesc_unnamed4315 {
#line 47
  RfReliableMacReceiveP$0$sendAckTask = 10U
};
#line 47
typedef int /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$__nesc_sillytask_sendAckTask[/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAckTask];
#line 37
message_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_ack_msg;

static inline void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAck(message_t *msg);







static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAckTask$runTask(void);




static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMSendAck$sendDone(message_t *msg, error_t result);




static inline  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 100
bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_started = FALSE;
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AtosControl$start(void);
# 8 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  bool RfActiveMessageP$PacketEx$isValidPacket(message_t *arg_0x7e6b45f8);
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *RfActiveMessageP$Packet$getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *RfActiveMessageP$Snoop$receive(
# 8 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
uint8_t arg_0x7e398bb0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
#line 67
static  message_t *RfActiveMessageP$Receive$receive(
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
uint8_t arg_0x7e3983f8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_id_t RfActiveMessageP$AMPacket$type(message_t *arg_0x7eb35aa0);
#line 125
static  bool RfActiveMessageP$AMPacket$isForMe(message_t *arg_0x7eb35370);
# 20 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static inline  void RfActiveMessageP$CoreReceive$receive(message_t *msg);
#line 51
static inline   message_t *RfActiveMessageP$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len);
#line 67
static inline   message_t *RfActiveMessageP$Snoop$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len);






bool RfActiveMessageP$m_started = FALSE;
static inline  error_t RfActiveMessageP$AtosControl$start(void);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreReceive.nc"
static  void RfMacBaseReceiveP$CoreReceive$receive(message_t *arg_0x7e393030);
# 12 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseReceiveP.nc"
static inline  void RfMacBaseReceiveP$RfHardwareRx$rxPacket(uint8_t *buf, uint8_t len);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t AtosMacP$Random$rand16(void);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t AtosMacP$SubAtosControl$start(void);
#line 4
static  error_t AtosMacP$HardwareAtosControl$start(void);
# 15 "/opt/atos/tos/lib/atos/net/AtosMac/AtosMacP.nc"
bool AtosMacP$m_started = FALSE;

static inline  error_t AtosMacP$AtosControl$start(void);
# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
static  uint8_t AtosNetStdP$RfConfig$getChannel(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t AtosNetStdP$Packet$payloadLength(message_t *arg_0x7eb25e90);
#line 108
static  void *AtosNetStdP$Packet$getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t AtosNetStdP$AMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
static  void AtosNetStdP$WatchDog$resetCpu(void);
# 17 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
static  void AtosNetStdP$AtosNetStd$receivedReboot(anstd_reboot_t *arg_0x7e2fc6a8);

static  void AtosNetStdP$AtosNetStd$receivedTraceAck(message_t *arg_0x7e2fa1f8, anstd_trace_ack_t *arg_0x7e2fa3b8);
#line 15
static  void AtosNetStdP$AtosNetStd$receivedDiscovery(anstd_discovery_t *arg_0x7e2fdd20);


static  void AtosNetStdP$AtosNetStd$receivedTrace(message_t *arg_0x7e2fcb58, anstd_trace_t *arg_0x7e2fcd08);
#line 12
static  void AtosNetStdP$AtosNetStd$beforeNodeStatusUp(anstd_node_status_t *arg_0x7e2fd1e0);

static  void AtosNetStdP$AtosNetStd$receivedNodeStatusUp(message_t *arg_0x7e2fd698, anstd_node_status_t *arg_0x7e2fd850);

static  void AtosNetStdP$AtosNetStd$receivedSetIEEE(anstd_setieee_t *arg_0x7e2fc1f8);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AtosNetStdP$nodeStatusUpTask$postTask(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void AtosNetStdP$RebootTimer$startPeriodic(uint32_t arg_0x7e9a6788);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AtosNetStdP$rebootTask$postTask(void);
# 8 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
static  void AtosNetStdP$FlashIEEE$WriteIEEE(uint8_t *arg_0x7ea50510);
#line 7
static  void AtosNetStdP$FlashIEEE$GetIEEE(uint8_t *arg_0x7ea50068);
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t AtosNetStdP$AMPacket$source(message_t *arg_0x7eb42b90);
#line 57
static  am_addr_t AtosNetStdP$AMPacket$address(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AtosNetStdP$sendDoneCheck$postTask(void);
# 54 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
enum AtosNetStdP$__nesc_unnamed4316 {
#line 54
  AtosNetStdP$rebootTask = 11U
};
#line 54
typedef int AtosNetStdP$__nesc_sillytask_rebootTask[AtosNetStdP$rebootTask];




enum AtosNetStdP$__nesc_unnamed4317 {
#line 59
  AtosNetStdP$nodeStatusUpTask = 12U
};
#line 59
typedef int AtosNetStdP$__nesc_sillytask_nodeStatusUpTask[AtosNetStdP$nodeStatusUpTask];
#line 350
enum AtosNetStdP$__nesc_unnamed4318 {
#line 350
  AtosNetStdP$sendDoneCheck = 13U
};
#line 350
typedef int AtosNetStdP$__nesc_sillytask_sendDoneCheck[AtosNetStdP$sendDoneCheck];
#line 43
message_t AtosNetStdP$m_send_msg;
uint16_t AtosNetStdP$m_ack_addr = 0xFFFF;
uint8_t AtosNetStdP$m_node_status = 0;



static inline  void AtosNetStdP$RebootTimer$fired(void);




static inline  void AtosNetStdP$rebootTask$runTask(void);




static inline  void AtosNetStdP$nodeStatusUpTask$runTask(void);









static inline void AtosNetStdP$receiveNodeStatusUp(message_t *msg, anstd_node_status_t *status);





static inline void AtosNetStdP$receiveDiscovery(message_t *msg, anstd_discovery_t *discovery);








static inline void AtosNetStdP$receiveSetIEEE(message_t *msg, anstd_setieee_t *setieee);









static inline void AtosNetStdP$receiveReboot(message_t *msg, anstd_reboot_t *reboot);







static int AtosNetStdP$indexOfTraceItem(anstd_trace_t *trace, uint16_t node_id);
#line 116
static void AtosNetStdP$traceBackward(message_t *msg, anstd_trace_ack_t *trace_ack, int index);
#line 128
static inline void AtosNetStdP$traceEnd(message_t *msg, anstd_trace_t *trace, int index);





static inline void AtosNetStdP$traceForward(message_t *msg, anstd_trace_t *trace, int index);
#line 151
static inline void AtosNetStdP$receiveTrace(message_t *msg, anstd_trace_t *trace);
#line 177
static inline void AtosNetStdP$receiveTraceAck(message_t *msg, anstd_trace_ack_t *trace_ack);
#line 203
static inline  message_t *AtosNetStdP$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 241
static inline  error_t AtosNetStdP$AtosNetStd$sendNodeStatusUp(uint16_t address);
#line 350
static inline  void AtosNetStdP$sendDoneCheck$runTask(void);
#line 368
static inline  void AtosNetStdP$AMSend$sendDone(message_t *msg, error_t error);









static inline   void AtosNetStdP$AtosNetStd$default$beforeNodeStatusUp(anstd_node_status_t *status);



static inline   void AtosNetStdP$AtosNetStd$default$receivedNodeStatusUp(message_t *msg, anstd_node_status_t *status);



static inline   void AtosNetStdP$AtosNetStd$default$receivedDiscovery(anstd_discovery_t *discovery);



static inline   void AtosNetStdP$AtosNetStd$default$receivedSetIEEE(anstd_setieee_t *setieee);



static inline   void AtosNetStdP$AtosNetStd$default$receivedReboot(anstd_reboot_t *reboot);




static inline   void AtosNetStdP$AtosNetStd$default$receivedTrace(message_t *msg, anstd_trace_t *trace);



static inline   void AtosNetStdP$AtosNetStd$default$receivedTraceAck(message_t *msg, anstd_trace_t *trace_ack);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$SubAMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$PacketEx$getPacketHeader(message_t *arg_0x7e6b4120);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$resendTask$postTask(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$Packet$payloadLength(message_t *arg_0x7eb25e90);
#line 83
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$Packet$setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$SubAtosControl$start(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AMPacket$destination(message_t *arg_0x7eb425b0);
#line 92
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AMPacket$setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
# 48 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$__nesc_unnamed4319 {
#line 48
  RfReliableMacRetrySendP$1$resendTask = 14U
};
#line 48
typedef int /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$__nesc_sillytask_resendTask[/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$resendTask];
#line 19
uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_sending = FALSE;
message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_msg;
uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_retry_times = 0;


static void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$signalDone(message_t *msg, error_t result);
#line 43
static error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$doSend(message_t *msg);




static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$resendTask$runTask(void);
#line 74
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len);
#line 129
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$SubAMSend$sendDone(message_t *msg, error_t error);
#line 150
bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_started = FALSE;
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AtosControl$start(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$SubAMSend$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMPacket$source(message_t *arg_0x7eb42b90);
#line 67
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMPacket$destination(message_t *arg_0x7eb425b0);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$PacketEx$getPacketHeader(message_t *arg_0x7e6b4120);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$startOneShot(uint32_t arg_0x7e9a6d58);




static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$stop(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$SubPacket$payloadLength(message_t *arg_0x7eb25e90);
# 7 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$RfReliableMacAck$receiveAckMessage(message_t *arg_0x7e652540, message_t *arg_0x7e6526f0, rf_ack_t *arg_0x7e6528a0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDoneTask$postTask(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$startOneShot(uint32_t arg_0x7e9a6d58);




static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$stop(void);
# 31 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$__nesc_unnamed4320 {
#line 31
  RfReliableMacSendP$1$signalDoneTask = 15U
};
#line 31
typedef int /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$__nesc_sillytask_signalDoneTask[/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDoneTask];
#line 26
uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending = FALSE;
message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg;
error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_result;


static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDoneTask$runTask(void);
#line 51
static void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDone(message_t *msg, error_t result);
#line 71
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$fired(void);







static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$fired(void);









static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len);
#line 139
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$SubAMSend$sendDone(message_t *msg, error_t error);
#line 158
static inline  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$ReceiveAck$receive(message_t *ack_msg, void *payload, uint8_t len);
#line 203
bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_started = FALSE;
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AtosControl$start(void);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMResource$send(am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len);
#line 39
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMResource$sendDone(message_t *msg, error_t error);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$PacketEx$getPacketHeader(message_t *arg_0x7e6b4120);

static  bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$PacketEx$isValidPacket(message_t *arg_0x7e6b45f8);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$RfReliableMacAck$fillAckMessage(message_t *arg_0x7e653b48, uint8_t arg_0x7e653cd8, message_t *arg_0x7e653e88, rf_ack_t *arg_0x7e652068);
# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
static  bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$DsnFilter$filter(uint16_t arg_0x7e3c9ba8, uint8_t arg_0x7e3c9d30);
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$SubPacket$getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAckTask$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$Receive$receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMSendAck$send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
# 166 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_group_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$group(message_t *arg_0x7eb348b8);
#line 77
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$source(message_t *arg_0x7eb42b90);
#line 67
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$destination(message_t *arg_0x7eb425b0);
#line 92
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
#line 176
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$setGroup(message_t *arg_0x7eb32010, am_group_t arg_0x7eb321a0);
# 47 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$__nesc_unnamed4321 {
#line 47
  RfReliableMacReceiveP$1$sendAckTask = 16U
};
#line 47
typedef int /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$__nesc_sillytask_sendAckTask[/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAckTask];
#line 37
message_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_ack_msg;

static inline void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAck(message_t *msg);







static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAckTask$runTask(void);




static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMSendAck$sendDone(message_t *msg, error_t result);




static inline  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 100
bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_started = FALSE;
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AtosControl$start(void);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMResource$send(am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len);
#line 39
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMResource$sendDone(message_t *msg, error_t error);
# 9 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
uint8_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_index = 0;
uint16_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_address[100];
uint8_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_dsn[1][100];


static inline int /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$indexOfAddress(uint16_t addr);
#line 31
static inline int /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$findNextAddress(void);
#line 51
static bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$filterDsn(uint16_t addr, uint8_t field_id, uint8_t dsn);
#line 80
static inline  error_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$Init$init(void);
#line 92
static inline  bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$DsnFilter$filter(uint8_t field_id, uint16_t addr, uint8_t dsn);
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMResource$send(am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMSend$sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len);
#line 39
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMResource$sendDone(message_t *msg, error_t error);
# 71 "/opt/atos/tos/chips/cc2530/mcs51/mcs51hardware.h"
 __inline __nesc_atomic_t __nesc_atomic_start(void )
#line 71
{
  __nesc_atomic_t tmp = EA;

#line 73
  EA = 0;
  return tmp;
}

 __inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)
#line 77
{
  EA = oldSreg;
}

# 181 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline  void SchedulerBasicP$Scheduler$init(void)
{
  /* atomic removed: atomic calls only */
  {






    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = 0;
    SchedulerBasicP$m_tail = 0;
  }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
#define RealMainP$Scheduler$init(void) SchedulerBasicP$Scheduler$init()
# 129 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static inline  error_t FlashIEEEP$Init$init(void)
{
  /* atomic removed: atomic calls only */
  {


    FlashIEEEP$readFromFlash();

    FlashIEEEP$FlashIEEE$WriteToRegister();
    FlashIEEEP$FlashIEEE$WriteToAM();

    {
      unsigned char __nesc_temp = 
#line 140
      0;

#line 140
      return __nesc_temp;
    }
  }
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
#define PlatformP$PlatformInit$init(void) FlashIEEEP$Init$init()
# 44 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static inline void uart0SetMode(void)
{
  U0CSR |= 0x80u | 0x40u;
  U0UCR |= 0x2u | 0x80u;
}

#line 34
static inline void uart0PinMap(bool map)
{



  PERCFG &= ~0x1u;

  P0_ALT |= 0x0Cu;
}







static inline void uart0Init(uint32_t baud)
{
  uart0PinMap(TRUE);
  uart0SetBaud(baud);
  uart0SetMode();
}

# 40 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
static inline void ATOS_DEBUG_UART_INIT(void)
{
  {
#line 42
    uart0Init(9600);
  }
#line 42
  ;
}

# 52 "/opt/atos/tos/platforms/antc5/boot/PlatformP.nc"
static inline  error_t PlatformP$Init$init(void)
#line 52
{


  if (PlatformP$clockSelect32k(0) != 0) {
      PlatformP$clockSetMainSrc(1);
      if (PlatformP$clockSelect32k(0) != 0) {
        }
    }

  PlatformP$clockSetMainSrc(0);


  ATOS_DEBUG_UART_INIT();



  {
#line 68
    {
#line 68
      P1_DIR |= 1 << 2;
#line 68
      P1_ALT &= ~(1 << 2);
    }
#line 68
    ;
#line 68
    {
#line 68
      P1_DIR |= 1 << 3;
#line 68
      P1_ALT &= ~(1 << 3);
    }
#line 68
    ;
  }
#line 68
  ;

  PlatformP$PlatformInit$init();

  return 0;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
#define RealMainP$PlatformInit$init(void) PlatformP$Init$init()
# 51 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
static inline  error_t HalFlashP$HalFlash$write(uint32_t destination, uint8_t *source, uint16_t length)
{
  HalFlashP$HalCC2530FlashWrite(destination, source, length);

  return 0;
}

# 5 "/opt/atos/tos/chips/cc2530/flash/HalFlash.nc"
#define FlashIEEEP$HalFlash$write(arg_0x7ea32af8,arg_0x7ea32ca0,arg_0x7ea32e30) HalFlashP$HalFlash$write(arg_0x7ea32af8, arg_0x7ea32ca0, arg_0x7ea32e30)


#define FlashIEEEP$HalFlash$erase(arg_0x7ea30338) HalFlashP$HalFlash$erase(arg_0x7ea30338)
# 44 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
static inline  error_t HalFlashP$HalFlash$read(uint8_t *destination, uint32_t source, uint16_t length)
{
  HalFlashP$HalCC2530FlashRead(destination, source, length);

  return 0;
}

# 3 "/opt/atos/tos/chips/cc2530/flash/HalFlash.nc"
#define FlashIEEEP$HalFlash$read(arg_0x7ea32330,arg_0x7ea324c0,arg_0x7ea32650) HalFlashP$HalFlash$read(arg_0x7ea32330, arg_0x7ea324c0, arg_0x7ea32650)
# 52 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static inline void FlashIEEEP$ieeeProtect(void)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t i;
    uint8_t tmp[0x4];
    uint8_t tmp_ieee[sizeof FlashIEEEP$m_ieee_flash];




    for (i = 0; i < sizeof FlashIEEEP$m_ieee_flash; ++i) 
      {

        if (FlashIEEEP$m_ieee_flash[i] != 0xFF) 
          {
            break;
          }
      }

    if (i >= sizeof FlashIEEEP$m_ieee_flash) 
      {

        FlashIEEEP$HalFlash$read(FlashIEEEP$m_ieee_flash, 0xF800 + 0x4, sizeof FlashIEEEP$m_ieee_flash);
      }
    else 
      {

        FlashIEEEP$HalFlash$read(tmp_ieee, 0xF800 + 0x4, sizeof tmp_ieee);

        for (i = 0; i < sizeof tmp_ieee; ++i) 
          {


            if (tmp_ieee[i] != FlashIEEEP$m_ieee_flash[i]) 
              {
                break;
              }
          }

        if (i < sizeof tmp_ieee) 
          {

            FlashIEEEP$HalFlash$read(tmp, 0xF800, 0x4);
            FlashIEEEP$HalFlash$erase(0xF800);

            FlashIEEEP$HalFlash$write(0xF800, tmp, 0x4);
            FlashIEEEP$HalFlash$write(0xF800 + 0x4, FlashIEEEP$m_ieee_flash, sizeof FlashIEEEP$m_ieee_flash);
          }
      }
  }
}

#line 228
static inline   void FlashIEEEP$ActiveMessageAddress$changed(void)
{
}

# 182 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline   void RfPacketP$ActiveMessageAddress$changed(void)
{
  /* atomic removed: atomic calls only */
  {
    RfPacketP$m_address_saved = FALSE;
    RfPacketP$m_group_saved = FALSE;
  }
}

# 58 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   void ActiveMessageAddressC$ActiveMessageAddress$changed(void){
#line 58
  RfPacketP$ActiveMessageAddress$changed();
#line 58
  FlashIEEEP$ActiveMessageAddress$changed();
#line 58
}
#line 58
# 70 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   void ActiveMessageAddressC$ActiveMessageAddress$setAddress(am_group_t myGroup, am_addr_t myAddr)
#line 70
{
  /* atomic removed: atomic calls only */
#line 71
  {
    ActiveMessageAddressC$addr = myAddr;
    ActiveMessageAddressC$group = myGroup;
  }
  ActiveMessageAddressC$ActiveMessageAddress$changed();
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
#define FlashIEEEP$ActiveMessageAddress$setAddress(arg_0x7ea35030,arg_0x7ea351c0) ActiveMessageAddressC$ActiveMessageAddress$setAddress(arg_0x7ea35030, arg_0x7ea351c0)
# 54 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
#define RealMainP$Scheduler$runNextTask(void) SchedulerBasicP$Scheduler$runNextTask()
# 276 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_leuint16(const void *source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 49 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  am_addr_t RfPacketP$AMPacket$destination(message_t *amsg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->dest);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP$1$AMPacket$destination(arg_0x7eb425b0) RfPacketP$AMPacket$destination(arg_0x7eb425b0)
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

#line 240
static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
#define AMResourceP$2$AMResource$send(arg_0x7e609888,arg_0x7e609a38,arg_0x7e609bc0) AMResourceCenterP$AMResource$send(AMResourceC$3$AM_RESOURCE_ID, arg_0x7e609888, arg_0x7e609a38, arg_0x7e609bc0)
# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      __nesc_hton_uint8((unsigned char *)&((rf_metadata_t *)msg->metadata)->resource_id, 2);
      __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->type, 241);
    }
#line 17
    __nesc_atomic_end(__nesc_atomic); }

  return /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMResource$send(addr, msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacReceiveP$1$AMSendAck$send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) AMResourceP$2$AMSend$send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
# 39 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static inline void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAck(message_t *msg)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMSendAck$send(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$destination(msg), msg, sizeof(rf_ack_t )) != 0) 
    {
    }
}


static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAckTask$runTask(void)
{
  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAck(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_ack_msg);
}

# 129 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  void RfPacketP$Packet$setPayloadLength(message_t *msg, uint8_t len)
{
  __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length, len + (sizeof(rf_header_t ) - 1 + sizeof(uint16_t )));
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define AMResourceCenterP$Packet$setPayloadLength(arg_0x7eb24538,arg_0x7eb246c0) RfPacketP$Packet$setPayloadLength(arg_0x7eb24538, arg_0x7eb246c0)
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 91 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  void RfPacketP$AMPacket$setGroup(message_t *amsg, am_group_t grp)
{
  __nesc_hton_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->destpan, grp);
}

# 176 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AMResourceCenterP$AMPacket$setGroup(arg_0x7eb32010,arg_0x7eb321a0) RfPacketP$AMPacket$setGroup(arg_0x7eb32010, arg_0x7eb321a0)
# 82 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void)
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC$group;
  return myGroup;
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
#define RfPacketP$ActiveMessageAddress$amGroup(void) ActiveMessageAddressC$ActiveMessageAddress$amGroup()
# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
#define RfPacketP$WatchDog$resetCpu(void) WatchDogP$WatchDog$resetCpu()
# 96 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  am_group_t RfPacketP$AMPacket$localGroup(void)
{
  /* atomic removed: atomic calls only */
  {
    if (!RfPacketP$m_group_saved) 
      {
        RfPacketP$m_group = RfPacketP$ActiveMessageAddress$amGroup();
        RfPacketP$m_group_saved = TRUE;
      }


    if (RfPacketP$m_group != RfPacketP$ActiveMessageAddress$amGroup()) 
      {


        RfPacketP$WatchDog$resetCpu();
      }
  }


  return RfPacketP$ActiveMessageAddress$amGroup();
}

# 184 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AMResourceCenterP$AMPacket$localGroup(void) RfPacketP$AMPacket$localGroup()
# 59 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  void RfPacketP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
{
  __nesc_hton_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->dest, addr);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AMResourceCenterP$AMPacket$setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP$AMPacket$setDestination(arg_0x7eb40190, arg_0x7eb40320)
# 64 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  void RfPacketP$AMPacket$setSource(message_t *amsg, am_addr_t addr)
{
  __nesc_hton_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->src, addr);
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AMResourceCenterP$AMPacket$setSource(arg_0x7eb40a20,arg_0x7eb40bb0) RfPacketP$AMPacket$setSource(arg_0x7eb40a20, arg_0x7eb40bb0)
#line 57
#define AMResourceCenterP$AMPacket$address(void) RfPacketP$AMPacket$address()
# 61 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void)
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
#define RfPacketP$ActiveMessageAddress$amAddress(void) ActiveMessageAddressC$ActiveMessageAddress$amAddress()
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfMacBaseSendP$0$sendNext$postTask(void) SchedulerBasicP$TaskBasic$postTask(RfMacBaseSendP$0$sendNext)
# 31 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
static inline  uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$maxSize(void)
{
  /* atomic removed: atomic calls only */
  {
    {
      unsigned char __nesc_temp = 
#line 35
      4;

#line 35
      return __nesc_temp;
    }
  }
}

#line 23
static inline  uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$size(void)
{
  /* atomic removed: atomic calls only */
  {
    {
      unsigned char __nesc_temp = 
#line 27
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$size;

#line 27
      return __nesc_temp;
    }
  }
}

#line 63
static inline  error_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$enqueue(/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t newVal)
{
  /* atomic removed: atomic calls only */
  {
    if (/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$size() < /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$maxSize()) 
      {
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue[/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$tail] = newVal;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$tail++;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$tail %= 4;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$size++;
        {
          unsigned char __nesc_temp = 
#line 73
          0;

#line 73
          return __nesc_temp;
        }
      }
    else {
        {
          unsigned char __nesc_temp = 
#line 77
          FAIL;

#line 77
          return __nesc_temp;
        }
      }
  }
}

# 49 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
#define RfMacBaseSendP$0$SendQueue$enqueue(arg_0x7e5c8930) QueueExC$0$QueueEx$enqueue(arg_0x7e5c8930)
#line 60
#define RfMacBaseSendP$0$SendQueue$element(arg_0x7e5c8ea8) QueueExC$0$QueueEx$element(arg_0x7e5c8ea8)
#line 17
#define RfMacBaseSendP$0$SendQueue$size(void) QueueExC$0$QueueEx$size()
# 74 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
static inline int /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$indexOfMessage(uint8_t resource_id)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t i;
    uint8_t size = /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$size();

#line 80
    for (i = 0; i < size; ++i) 
      {
        message_t *msg = (message_t *)/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$element(i);

#line 83
        if (msg != (void *)0 && __nesc_ntoh_uint8((unsigned char *)&((rf_metadata_t *)msg->metadata)->resource_id) == resource_id) 
          {
            {
              int __nesc_temp = 
#line 85
              i;

#line 85
              return __nesc_temp;
            }
          }
      }
    {
      int __nesc_temp = 
#line 89
      -1;

#line 89
      return __nesc_temp;
    }
  }
}

#line 93
static inline error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$enqueueMessage(message_t *msg)
{
  /* atomic removed: atomic calls only */
  {
    if (/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$indexOfMessage(__nesc_ntoh_uint8((unsigned char *)&((rf_metadata_t *)msg->metadata)->resource_id)) >= 0) 
      {
        {
          unsigned char __nesc_temp = 
#line 99
          ERR_MAC_SEND_RESOURCE_EXISTS;

#line 99
          return __nesc_temp;
        }
      }


    if (/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$enqueue(msg) != 0) 
      {
        {
          unsigned char __nesc_temp = 
#line 106
          ERR_MAC_SEND_RESOURCE_FULL;

#line 106
          return __nesc_temp;
        }
      }

    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext$postTask();

    {
      unsigned char __nesc_temp = 
#line 112
      0;

#line 112
      return __nesc_temp;
    }
  }
}

#line 139
static inline  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$CoreSend$send(message_t *msg, uint8_t len)
{
  /* atomic removed: atomic calls only */

  {



    __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->dsn, ++/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_hardware_dsn);





    {
      unsigned char __nesc_temp = 
#line 153
      /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$enqueueMessage(msg);

#line 153
      return __nesc_temp;
    }
  }
}

# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
#define AMResourceCenterP$CoreSend$send(arg_0x7e5e9998,arg_0x7e5e9b20) RfMacBaseSendP$0$CoreSend$send(arg_0x7e5e9998, arg_0x7e5e9b20)
# 108 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{




  uint8_t i = SchedulerBasicP$m_head % SchedulerBasicP$NUM_TASKS;

  while (i != SchedulerBasicP$m_tail) 
    {
      if (SchedulerBasicP$m_next[i] == id) 
        {
          return TRUE;
        }

      i = (i + 1) % SchedulerBasicP$NUM_TASKS;
      SchedulerBasicP$m_tail = SchedulerBasicP$m_tail % SchedulerBasicP$NUM_TASKS;
    }

  return FALSE;
}



static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  /* atomic removed: atomic calls only */
#line 156
  {
    id = id % SchedulerBasicP$NUM_TASKS;

    if (!SchedulerBasicP$isWaiting(id)) 
      {
        if ((SchedulerBasicP$m_tail + 1) % SchedulerBasicP$NUM_TASKS == SchedulerBasicP$m_head) 
          {

            {
              unsigned char __nesc_temp = 
#line 164
              FALSE;

#line 164
              return __nesc_temp;
            }
          }
        SchedulerBasicP$m_tail = SchedulerBasicP$m_tail % SchedulerBasicP$NUM_TASKS;
        SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
        SchedulerBasicP$m_tail = (SchedulerBasicP$m_tail + 1) % SchedulerBasicP$NUM_TASKS;
        {
          unsigned char __nesc_temp = 
#line 170
          TRUE;

#line 170
          return __nesc_temp;
        }
      }
    else {
        {
          unsigned char __nesc_temp = 
#line 174
          FALSE;

#line 174
          return __nesc_temp;
        }
      }
  }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacRetrySendP$1$resendTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(RfReliableMacRetrySendP$1$resendTask)
# 129 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$SubAMSend$sendDone(message_t *msg, error_t error)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_sending) 
    {
      if (error == 0) 
        {
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$signalDone(msg, error);
        }
      else 
        {
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$resendTask$postTask();
        }
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacSendP$1$AMSend$sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacRetrySendP$1$SubAMSend$sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
# 31 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDoneTask$runTask(void)
{
  message_t *msg;
  error_t result;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending) 
        {
          {
#line 40
            __nesc_atomic_end(__nesc_atomic); 
#line 40
            return;
          }
        }
      msg = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg;
      result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_result;
    }
#line 45
    __nesc_atomic_end(__nesc_atomic); }

  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMSend$sendDone(msg, result);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending = FALSE;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define AtosNetStdP$sendDoneCheck$postTask(void) SchedulerBasicP$TaskBasic$postTask(AtosNetStdP$sendDoneCheck)
# 368 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline  void AtosNetStdP$AMSend$sendDone(message_t *msg, error_t error)
{
  if (error != 0) 
    {
      AtosNetStdP$sendDoneCheck$postTask();
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacRetrySendP$1$AMSend$sendDone(arg_0x7eb60eb8,arg_0x7eb55068) AtosNetStdP$AMSend$sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
# 48 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$resendTask$runTask(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_sending) 
        {
          {
#line 54
            __nesc_atomic_end(__nesc_atomic); 
#line 54
            return;
          }
        }
      if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_retry_times++ < 20) 
        {
          if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$doSend(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_msg) != 0) 
            {
              ;
              /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$resendTask$postTask();
            }
        }
      else 
        {

          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$signalDone(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_msg, ERR_MAC_RETRY_MAX);
        }
    }
#line 70
    __nesc_atomic_end(__nesc_atomic); }
}

# 257 "/usr/lib/ncc/nesc_nx.h"
static __inline int8_t __nesc_hton_int8(void *target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP$1$TimeoutTimer$startOneShot(arg_0x7e9a6d58) VirtualizeTimerC$0$Timer$startOneShot(4U, arg_0x7e9a6d58)
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_leuint8(const void *source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 124 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  uint8_t RfPacketP$Packet$payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length) - (sizeof(rf_header_t ) - 1 + sizeof(uint16_t ));
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacSendP$1$SubPacket$payloadLength(arg_0x7eb25e90) RfPacketP$Packet$payloadLength(arg_0x7eb25e90)
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
#define AMResourceP$1$AMResource$send(arg_0x7e609888,arg_0x7e609a38,arg_0x7e609bc0) AMResourceCenterP$AMResource$send(AMResourceC$2$AM_RESOURCE_ID, arg_0x7e609888, arg_0x7e609a38, arg_0x7e609bc0)
# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len)
{
  /* atomic removed: atomic calls only */
  {
    __nesc_hton_uint8((unsigned char *)&((rf_metadata_t *)msg->metadata)->resource_id, 1);
    __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->type, 240U);
  }

  return /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMResource$send(addr, msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacSendP$1$SubAMSend$send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) AMResourceP$1$AMSend$send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacPacketP$SubPacket$getPayload(arg_0x7eb23358,arg_0x7eb23500) RfPacketP$Packet$getPayload(arg_0x7eb23358, arg_0x7eb23500)
# 51 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static inline  void *RfReliableMacPacketP$PacketEx$getPacketHeader(message_t *msg)
{
  return RfReliableMacPacketP$SubPacket$getPayload(msg, (void *)0);
}

# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacSendP$1$PacketEx$getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP$PacketEx$getPacketHeader(arg_0x7e6b4120)
# 89 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t result;

  /* atomic removed: atomic calls only */
  {
    rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$PacketEx$getPacketHeader(msg);
    rf_metadata_t *metadata = (rf_metadata_t *)msg->metadata;



    if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending) 
      {
        {
          unsigned char __nesc_temp = 
#line 102
          FAIL;

#line 102
          return __nesc_temp;
        }
      }
    header->ack_req = addr != 0xFFFF;

    __nesc_hton_int8((unsigned char *)&metadata->ack, FALSE);

    result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$SubAMSend$send(addr, msg, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$SubPacket$payloadLength(msg));

    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$startOneShot(10000);

    if (result == 0) 
      {
        /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg = msg;
        /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending = TRUE;
      }

    {
      unsigned char __nesc_temp = 
#line 119
      result;

#line 119
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacRetrySendP$1$SubAMSend$send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) RfReliableMacSendP$1$AMSend$send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
# 46 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
static inline void ATOS_DEBUG_UART_PUTC(char c)
{
  if (c == '\n') 
    {
      {
#line 50
        uart0PutChar('\r');
      }
#line 50
      ;
    }
  {
#line 52
    uart0PutChar(c);
  }
#line 52
  ;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define VirtualizeTimerC$0$updateFromTimer$postTask(void) SchedulerBasicP$TaskBasic$postTask(VirtualizeTimerC$0$updateFromTimer)
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformCounterC$0$CounterFrom$get(void) HplCC2530Timer1P$0$Counter$get()
# 327 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static inline   bool /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$isOverflowPending(void)
{
  /* atomic removed: atomic calls only */
#line 329
  {
    unsigned char __nesc_temp = 
#line 329
    T1STAT & CC2530_T1_OVFIF;

#line 329
    return __nesc_temp;
  }
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformCounterC$0$CounterFrom$isOverflowPending(void) HplCC2530Timer1P$0$Counter$isOverflowPending()
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacRetrySendP$1$AMPacket$destination(arg_0x7eb425b0) RfPacketP$AMPacket$destination(arg_0x7eb425b0)
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacPacketP$SubPacket$payloadLength(arg_0x7eb25e90) RfPacketP$Packet$payloadLength(arg_0x7eb25e90)
# 20 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static inline  uint8_t RfReliableMacPacketP$Packet$payloadLength(message_t *msg)
{
  return RfReliableMacPacketP$SubPacket$payloadLength(msg) - sizeof(rf_rmac_header_t );
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacRetrySendP$1$Packet$payloadLength(arg_0x7eb25e90) RfReliableMacPacketP$Packet$payloadLength(arg_0x7eb25e90)
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AtosNetStdP$AMPacket$address(void) RfPacketP$AMPacket$address()
# 128 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline void AtosNetStdP$traceEnd(message_t *msg, anstd_trace_t *trace, int index)
{
  trace->data_type = ANSTD_DATA_TYPE_TRACE_ACK;
  AtosNetStdP$traceBackward(msg, (anstd_trace_ack_t *)trace, index);
}

# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define AtosNetStdP$Packet$getPayload(arg_0x7eb23358,arg_0x7eb23500) RfReliableMacPacketP$Packet$getPayload(arg_0x7eb23358, arg_0x7eb23500)
# 350 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline  void AtosNetStdP$sendDoneCheck$runTask(void)
{
  anstd_header_t *header = (anstd_header_t *)AtosNetStdP$Packet$getPayload(&AtosNetStdP$m_send_msg, (void *)0);

  if (header->data_type == ANSTD_DATA_TYPE_TRACE) 
    {
      anstd_trace_t *trace = (anstd_trace_t *)header;
      int index = AtosNetStdP$indexOfTraceItem(trace, AtosNetStdP$AMPacket$address());

#line 358
      AtosNetStdP$traceEnd(&AtosNetStdP$m_send_msg, trace, index);
    }
  else {
#line 360
    if (header->data_type == ANSTD_DATA_TYPE_TRACE_ACK) 
      {
        anstd_trace_ack_t *trace_ack = (anstd_trace_ack_t *)header;
        int index = AtosNetStdP$indexOfTraceItem(trace_ack, AtosNetStdP$AMPacket$address());

#line 364
        AtosNetStdP$traceBackward(&AtosNetStdP$m_send_msg, trace_ack, index);
      }
    }
}

# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacRetrySendP$1$PacketEx$getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP$PacketEx$getPacketHeader(arg_0x7e6b4120)
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacRetrySendP$1$AMPacket$setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP$AMPacket$setDestination(arg_0x7eb40190, arg_0x7eb40320)
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacPacketP$SubPacket$setPayloadLength(arg_0x7eb24538,arg_0x7eb246c0) RfPacketP$Packet$setPayloadLength(arg_0x7eb24538, arg_0x7eb246c0)
# 25 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static inline  void RfReliableMacPacketP$Packet$setPayloadLength(message_t *msg, uint8_t len)
{
  RfReliableMacPacketP$SubPacket$setPayloadLength(msg, len + sizeof(rf_rmac_header_t ));
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacRetrySendP$1$Packet$setPayloadLength(arg_0x7eb24538,arg_0x7eb246c0) RfReliableMacPacketP$Packet$setPayloadLength(arg_0x7eb24538, arg_0x7eb246c0)
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AtosNetStdP$AMSend$send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) RfReliableMacRetrySendP$1$AMSend$send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
# 378 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline   void AtosNetStdP$AtosNetStd$default$beforeNodeStatusUp(anstd_node_status_t *status)
{
}

# 12 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP$AtosNetStd$beforeNodeStatusUp(arg_0x7e2fd1e0) AtosNetStdP$AtosNetStd$default$beforeNodeStatusUp(arg_0x7e2fd1e0)
# 161 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static inline  void FlashIEEEP$FlashIEEE$GetIEEE(uint8_t *ieee)
{
  memcpy(ieee, FlashIEEEP$m_ieee, sizeof FlashIEEEP$m_ieee);
}

# 7 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
#define AtosNetStdP$FlashIEEE$GetIEEE(arg_0x7ea50068) FlashIEEEP$FlashIEEE$GetIEEE(arg_0x7ea50068)
# 143 "/opt/atos/tos/chips/rf2530/hardware/control/RfConfigP.nc"
static inline  uint8_t RfConfigP$RfConfig$getChannel(void)
{
  return RfConfigP$m_channel;
}

# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
#define AtosNetStdP$RfConfig$getChannel(void) RfConfigP$RfConfig$getChannel()
# 241 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline  error_t AtosNetStdP$AtosNetStd$sendNodeStatusUp(uint16_t address)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      anstd_node_status_t *status = (anstd_node_status_t *)AtosNetStdP$Packet$getPayload(&AtosNetStdP$m_send_msg, (void *)0);

#line 246
      status->data_type = ANSTD_DATA_TYPE_NODE_STATUS_UP;
      status->device_type = ATP_STD_EQUIPMENT_TYPE_NODE;
      status->industry_code = 0x00;
      status->application_code = 0x00;

      status->rf_channel = AtosNetStdP$RfConfig$getChannel();

      AtosNetStdP$FlashIEEE$GetIEEE(status->ieee);

      status->node_status = AtosNetStdP$m_node_status++;

      AtosNetStdP$AtosNetStd$beforeNodeStatusUp(status);

      if (AtosNetStdP$m_node_status == 0) 
        {
          AtosNetStdP$m_node_status = 1;
        }

      {
        unsigned char __nesc_temp = 
#line 264
        AtosNetStdP$AMSend$send(address, &AtosNetStdP$m_send_msg, sizeof(anstd_node_status_t ));

        {
#line 264
          __nesc_atomic_end(__nesc_atomic); 
#line 264
          return __nesc_temp;
        }
      }
    }
#line 267
    __nesc_atomic_end(__nesc_atomic); }
}

#line 59
static inline  void AtosNetStdP$nodeStatusUpTask$runTask(void)
{
  AtosNetStdP$AtosNetStd$sendNodeStatusUp(AtosNetStdP$m_ack_addr);
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformAlarmC$0$Counter$get(void) TransformCounterC$0$Counter$get()
# 76 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow(void)
{
  /* atomic removed: atomic calls only */
#line 78
  {
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type __nesc_temp = 
#line 78
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get();

#line 78
    return __nesc_temp;
  }
}

# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define AlarmToTimerC$0$Alarm$getNow(void) TransformAlarmC$0$Alarm$getNow()
# 118 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void)
{
  /* atomic removed: atomic calls only */
#line 120
  {
    unsigned long __nesc_temp = 
#line 120
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();

#line 120
    return __nesc_temp;
  }
}

# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define VirtualizeTimerC$0$TimerFrom$getNow(void) AlarmToTimerC$0$Timer$getNow()
# 174 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      {
#line 178
        {
#line 178
          if (1 >= uart_debug_level) {
#line 178
              {
#line 178
                sprintf(uart_debug_buf, "VirtualizeTimerC.Timer.startPeriodic dt=%ld\n", dt);
              }
#line 178
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 178
      ;
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
    }
#line 180
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define AtosNetStdP$RebootTimer$startPeriodic(arg_0x7e9a6788) VirtualizeTimerC$0$Timer$startPeriodic(5U, arg_0x7e9a6788)
# 54 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline  void AtosNetStdP$rebootTask$runTask(void)
{
  AtosNetStdP$RebootTimer$startPeriodic(500);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP$0$AMPacket$destination(arg_0x7eb425b0) RfPacketP$AMPacket$destination(arg_0x7eb425b0)
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
#define AMResourceP$3$AMResource$send(arg_0x7e609888,arg_0x7e609a38,arg_0x7e609bc0) AMResourceCenterP$AMResource$send(AMResourceC$1$AM_RESOURCE_ID, arg_0x7e609888, arg_0x7e609a38, arg_0x7e609bc0)
# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      __nesc_hton_uint8((unsigned char *)&((rf_metadata_t *)msg->metadata)->resource_id, 3);
      __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->type, 124);
    }
#line 17
    __nesc_atomic_end(__nesc_atomic); }

  return /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMResource$send(addr, msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacReceiveP$0$AMSendAck$send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) AMResourceP$3$AMSend$send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
# 39 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static inline void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAck(message_t *msg)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMSendAck$send(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$destination(msg), msg, sizeof(rf_ack_t )) != 0) 
    {
    }
}


static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAckTask$runTask(void)
{
  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAck(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_ack_msg);
}

# 91 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareTxP.nc"
static inline  error_t RfHardwareTxP$RfHardwareTx$txGo(void)
{
  uint32_t i = 0;
  error_t result = FAIL;


  RFST = 0xE9;


  while (i++ < 15000) 
    {
      if (RFIRQF1 & (1 << 1)) 
        {
          result = 0;
          break;
        }
    }


  do {
#line 110
      S1CON = 0x00;
#line 110
      RFIRQF1 = ~(1 << 1);
    }
  while (
#line 110
  110 == -1);

  return result;
}

# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareTx.nc"
#define RfMacBaseCsmaP$RfHardwareTx$txGo(void) RfHardwareTxP$RfHardwareTx$txGo()
# 105 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static inline  void RfMacBaseCsmaP$doGo$runTask(void)
{
  error_t result = RfMacBaseCsmaP$RfHardwareTx$txGo();

  if (RfMacBaseCsmaP$m_this_delay > 90) 
    {
      RfMacBaseCsmaP$m_congestion_delay = 90;
    }
  else 
    {
      if (RfMacBaseCsmaP$m_this_delay > RfMacBaseCsmaP$m_congestion_delay) 
        {
          RfMacBaseCsmaP$m_congestion_delay = (RfMacBaseCsmaP$m_this_delay + RfMacBaseCsmaP$m_congestion_delay) / 2;
        }
      else 
        {
          RfMacBaseCsmaP$m_congestion_delay = RfMacBaseCsmaP$m_this_delay;
        }
    }

  if (result != 0) 
    {
      RfMacBaseCsmaP$signalDone(result);
    }
  else 
    {
      RfMacBaseCsmaP$signalDone(0);
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfMacBaseCsmaP$signalDoneTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(RfMacBaseCsmaP$signalDoneTask)
# 70 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static inline  void AMResourceCenterP$CoreSend$sendDone(message_t *msg, error_t result)
{
  AMResourceCenterP$AMResource$sendDone(__nesc_ntoh_uint8((unsigned char *)&((rf_metadata_t *)msg->metadata)->resource_id), msg, result);
}

# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
#define RfMacBaseSendP$0$CoreSend$sendDone(arg_0x7e5e84c0,arg_0x7e5e8648) AMResourceCenterP$CoreSend$sendDone(arg_0x7e5e84c0, arg_0x7e5e8648)
# 117 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
static inline  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SubCoreSend$sendDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_sending) {
        {
#line 121
          __nesc_atomic_end(__nesc_atomic); 
#line 121
          return;
        }
        }
    }
#line 124
    __nesc_atomic_end(__nesc_atomic); }
  /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$CoreSend$sendDone(msg, result);

  if (result != 0) 
    {
      {
#line 129
        {
#line 129
          if (100 >= uart_debug_level) {
#line 129
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
                {
#line 129
                  sprintf(uart_debug_buf, "RfMacBaseSendP.SubCoreSend.sendDone result%d\n", (int )result);
                }
#line 130
                __nesc_atomic_end(__nesc_atomic); }
#line 129
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 129
      ;
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 133
    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_sending = FALSE;
#line 133
    __nesc_atomic_end(__nesc_atomic); }
  /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext$postTask();
}

# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
#define RfMacBaseCsmaP$CoreSend$sendDone(arg_0x7e5e84c0,arg_0x7e5e8648) RfMacBaseSendP$0$SubCoreSend$sendDone(arg_0x7e5e84c0, arg_0x7e5e8648)
# 53 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static inline  void RfMacBaseCsmaP$signalDoneTask$runTask(void)
{


  if (RfMacBaseCsmaP$m_msg != (void *)0) 
    {

      RfMacBaseCsmaP$CoreSend$sendDone(RfMacBaseCsmaP$m_msg, RfMacBaseCsmaP$m_result);
    }
}

# 52 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMSendAck$sendDone(message_t *msg, error_t result)
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AMResourceP$3$AMSend$sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacReceiveP$0$AMSendAck$sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
# 39 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMResource$sendDone(message_t *msg, error_t error)
{



  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMSend$sendDone(msg, error);
}

# 52 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMSendAck$sendDone(message_t *msg, error_t result)
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AMResourceP$2$AMSend$sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacReceiveP$1$AMSendAck$sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
# 39 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMResource$sendDone(message_t *msg, error_t error)
{



  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMSend$sendDone(msg, error);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP$1$AckTimer$startOneShot(arg_0x7e9a6d58) VirtualizeTimerC$0$Timer$startOneShot(3U, arg_0x7e9a6d58)
# 139 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$SubAMSend$sendDone(message_t *msg, error_t error)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending) 
    {
      if (error == 0) 
        {
          rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$PacketEx$getPacketHeader(msg);

#line 146
          if (header->ack_req) 
            {
              /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$startOneShot(50);
              return;
            }
        }

      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDone(msg, error);
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AMResourceP$1$AMSend$sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacSendP$1$SubAMSend$sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
# 39 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMResource$sendDone(message_t *msg, error_t error)
{



  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMSend$sendDone(msg, error);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacSendP$1$signalDoneTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(RfReliableMacSendP$1$signalDoneTask)
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP$0$AckTimer$startOneShot(arg_0x7e9a6d58) VirtualizeTimerC$0$Timer$startOneShot(1U, arg_0x7e9a6d58)
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacSendP$0$PacketEx$getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP$PacketEx$getPacketHeader(arg_0x7e6b4120)
# 139 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$SubAMSend$sendDone(message_t *msg, error_t error)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending) 
    {
      if (error == 0) 
        {
          rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$PacketEx$getPacketHeader(msg);

#line 146
          if (header->ack_req) 
            {
              /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$startOneShot(50);
              return;
            }
        }

      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDone(msg, error);
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AMResourceP$0$AMSend$sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacSendP$0$SubAMSend$sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
# 39 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMResource$sendDone(message_t *msg, error_t error)
{



  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMSend$sendDone(msg, error);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacSendP$0$signalDoneTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(RfReliableMacSendP$0$signalDoneTask)
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
#define RfMacBaseCsmaP$Random$rand16(void) CC2530RandomLfsrP$Random$rand16()
# 75 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static inline uint32_t RfMacBaseCsmaP$initBackoffTimer(void)
{
  RfMacBaseCsmaP$m_this_random = RfMacBaseCsmaP$Random$rand16() % RfMacBaseCsmaP$m_congestion_delay;
  if (RfMacBaseCsmaP$m_this_random == 0) {
#line 78
    RfMacBaseCsmaP$m_this_random = 1;
    }
#line 79
  RfMacBaseCsmaP$m_this_delay += RfMacBaseCsmaP$m_this_random;
  return (uint32_t )RfMacBaseCsmaP$m_this_random * RfMacBaseCsmaP$RF_BACKOFF_PERIOD;
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformAlarmC$1$Counter$get(void) TransformCounterC$1$Counter$get()
# 76 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$getNow(void)
{
  /* atomic removed: atomic calls only */
#line 78
  {
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type __nesc_temp = 
#line 78
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Counter$get();

#line 78
    return __nesc_temp;
  }
}

#line 140
static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type t0, /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_t0 = t0;
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_dt = dt;
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$set_alarm();
  }
}

static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$start(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type dt)
{
  /* atomic removed: atomic calls only */
#line 152
  /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$getNow(), dt);
}

# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define RfMacBaseCsmaP$BackoffTimer$start(arg_0x7e953b10) TransformAlarmC$1$Alarm$start(arg_0x7e953b10)
# 14 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareTxP.nc"
static inline void RfHardwareTxP$writeTxfifo(uint8_t *buf, uint8_t len)
{
  uint8_t i;

#line 17
  for (i = 0; i < len; ++i) 
    {
      RFD = buf[i];
    }
}

#line 45
static inline  error_t RfHardwareTxP$RfHardwareTx$txPrepare(uint8_t *packet, uint8_t len)
{

  do {
#line 48
      RFST = 0xEE;
    }
  while (
#line 48
  48 == -1);


  do {
#line 51
      S1CON = 0x00;
#line 51
      RFIRQF1 = ~(1 << 1);
    }
  while (
#line 51
  51 == -1);

  len &= 0x7f;
  packet[0] = len;
#line 86
  RfHardwareTxP$writeTxfifo(packet, len);

  return 0;
}

# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareTx.nc"
#define RfMacBaseCsmaP$RfHardwareTx$txPrepare(arg_0x7e572c98,arg_0x7e572e20) RfHardwareTxP$RfHardwareTx$txPrepare(arg_0x7e572c98, arg_0x7e572e20)
# 164 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static inline  error_t RfMacBaseCsmaP$CoreSend$send(message_t *msg, uint8_t len)
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;

  /* atomic removed: atomic calls only */
#line 168
  {
    if (msg == (void *)0) 
      {
        {
          unsigned char __nesc_temp = 
#line 171
          FAIL;

#line 171
          return __nesc_temp;
        }
      }
    RfMacBaseCsmaP$m_msg = msg;
    RfMacBaseCsmaP$m_cancel = FALSE;
    RfMacBaseCsmaP$m_state = RfMacBaseCsmaP$CSMA_STATE_SAMPLE_CCA;
    RfMacBaseCsmaP$m_congestion_count = 0;
    RfMacBaseCsmaP$m_this_delay = 0;
#line 192
    (__nesc_temp44 = (unsigned char *)&((rf_header_t *)msg->header)->length, __nesc_hton_leuint8(__nesc_temp44, __nesc_ntoh_leuint8(__nesc_temp44) + 0));
    RfMacBaseCsmaP$RfHardwareTx$txPrepare((uint8_t *)msg->header, __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length));
    (__nesc_temp45 = (unsigned char *)&((rf_header_t *)msg->header)->length, __nesc_hton_leuint8(__nesc_temp45, __nesc_ntoh_leuint8(__nesc_temp45) - 0));

    ;

    RfMacBaseCsmaP$BackoffTimer$start(RfMacBaseCsmaP$initBackoffTimer());
  }

  return 0;
}

# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
#define RfMacBaseSendP$0$SubCoreSend$send(arg_0x7e5e9998,arg_0x7e5e9b20) RfMacBaseCsmaP$CoreSend$send(arg_0x7e5e9998, arg_0x7e5e9b20)
# 15 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
static inline  bool /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$empty(void)
{
  /* atomic removed: atomic calls only */
  {
    {
      unsigned char __nesc_temp = 
#line 19
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$size == 0;

#line 19
      return __nesc_temp;
    }
  }
}

#line 39
static inline  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$head(void)
{
  /* atomic removed: atomic calls only */
  {
    {
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t __nesc_temp = 
#line 43
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue[/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$head];

#line 43
      return __nesc_temp;
    }
  }
}

#line 47
static inline  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$dequeue(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t t = /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$head();

#line 52
    if (!/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$empty()) 
      {
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$head++;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$head %= 4;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$size--;
      }

    {
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t __nesc_temp = 
#line 59
      t;

#line 59
      return __nesc_temp;
    }
  }
}

# 40 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
#define RfMacBaseSendP$0$SendQueue$dequeue(void) QueueExC$0$QueueEx$dequeue()
#line 9
#define RfMacBaseSendP$0$SendQueue$empty(void) QueueExC$0$QueueEx$empty()
# 23 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
static inline  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext$runTask(void)
{
  error_t result;
  message_t *msg;
  rf_header_t *header;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_sending) {
        {
#line 31
          __nesc_atomic_end(__nesc_atomic); 
#line 31
          return;
        }
        }
#line 33
      if (/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$empty()) 
        {
          {
#line 35
            __nesc_atomic_end(__nesc_atomic); 
#line 35
            return;
          }
        }

      msg = /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$dequeue();



      if (msg == (void *)0) 
        {

          ;


          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_sending = FALSE;

          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext$postTask();
          {
#line 52
            __nesc_atomic_end(__nesc_atomic); 
#line 52
            return;
          }
        }
      result = /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SubCoreSend$send(msg, __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length));
      if (result == 0) 
        {
          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_sending = TRUE;
        }
      else 
        {


          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$CoreSend$sendDone(msg, FAIL);
          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_sending = FALSE;

          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext$postTask();
        }
    }
#line 69
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformCounterC$1$CounterFrom$get(void) HplCC2530Timer1P$0$Counter$get()







#define TransformCounterC$1$CounterFrom$isOverflowPending(void) HplCC2530Timer1P$0$Counter$isOverflowPending()
# 200 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static inline   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$startAt(uint16_t t0, uint16_t dt)
{
  uint16_t set;
#line 202
  uint16_t now;
#line 202
  uint16_t elapsed;

  /* atomic removed: atomic calls only */
#line 204
  {
    {
#line 205
      now = T1CNTL;
#line 205
      now += T1CNTH << 8;
    }
#line 205
    ;

    elapsed = now - t0;

    if (elapsed >= dt) 
      {
        set = now + 5;
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 216
        if (remaining <= 5) {
            set = now + 5;
          }
        else 
          {
            set = remaining + now;
          }
      }

    {
#line 225
      T1CCTL1 &= ~(1 << CC2530_T1CCTLx_MODE);
#line 225
      T1CC1L = (uint16_t )set & 0xFF;
#line 225
      T1CC1H = ((uint16_t )set >> 8) & 0xFF;
#line 225
      T1CCTL1 |= 1 << CC2530_T1CCTLx_MODE;
    }
#line 225
    ;

    T1CCTL1 |= 1 << CC2530_T1CCTLx_IM;
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC$1$AlarmFrom$startAt(arg_0x7e952c28,arg_0x7e952db8) HplCC2530Timer1P$0$Alarm1$startAt(arg_0x7e952c28, arg_0x7e952db8)
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacRetrySendP$0$resendTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(RfReliableMacRetrySendP$0$resendTask)
# 129 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$SubAMSend$sendDone(message_t *msg, error_t error)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_sending) 
    {
      if (error == 0) 
        {
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$signalDone(msg, error);
        }
      else 
        {
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$resendTask$postTask();
        }
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacSendP$0$AMSend$sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacRetrySendP$0$SubAMSend$sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
# 31 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDoneTask$runTask(void)
{
  message_t *msg;
  error_t result;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending) 
        {
          {
#line 40
            __nesc_atomic_end(__nesc_atomic); 
#line 40
            return;
          }
        }
      msg = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg;
      result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_result;
    }
#line 45
    __nesc_atomic_end(__nesc_atomic); }

  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMSend$sendDone(msg, result);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending = FALSE;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define DigBaseP$showMenu$postTask(void) SchedulerBasicP$TaskBasic$postTask(DigBaseP$showMenu)
# 114 "DigBaseP.nc"
static inline  void DigBaseP$AMSend$sendDone(message_t *msg, error_t success)
{
  {
#line 116
    {
#line 116
      if (1000 >= uart_debug_level) {
#line 116
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
            {
#line 116
              sprintf(uart_debug_buf, "* Sent%s!\r\n", success == 0 ? "OK" : "FAIL");
            }
#line 117
            __nesc_atomic_end(__nesc_atomic); }
#line 116
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
#line 116
  ;

  DigBaseP$m_len = 0;
  DigBaseP$m_input_type = DigBaseP$INPUT_ADDRESS;

  DigBaseP$showMenu$postTask();
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacRetrySendP$0$AMSend$sendDone(arg_0x7eb60eb8,arg_0x7eb55068) DigBaseP$AMSend$sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
# 48 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$resendTask$runTask(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_sending) 
        {
          {
#line 54
            __nesc_atomic_end(__nesc_atomic); 
#line 54
            return;
          }
        }
      if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_retry_times++ < 20) 
        {
          if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$doSend(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_msg) != 0) 
            {
              ;
              /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$resendTask$postTask();
            }
        }
      else 
        {

          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$signalDone(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_msg, ERR_MAC_RETRY_MAX);
        }
    }
#line 70
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP$0$TimeoutTimer$startOneShot(arg_0x7e9a6d58) VirtualizeTimerC$0$Timer$startOneShot(2U, arg_0x7e9a6d58)
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacSendP$0$SubPacket$payloadLength(arg_0x7eb25e90) RfPacketP$Packet$payloadLength(arg_0x7eb25e90)
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
#define AMResourceP$0$AMResource$send(arg_0x7e609888,arg_0x7e609a38,arg_0x7e609bc0) AMResourceCenterP$AMResource$send(AMResourceC$0$AM_RESOURCE_ID, arg_0x7e609888, arg_0x7e609a38, arg_0x7e609bc0)
# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len)
{
  /* atomic removed: atomic calls only */
  {
    __nesc_hton_uint8((unsigned char *)&((rf_metadata_t *)msg->metadata)->resource_id, 0);
    __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->type, 123);
  }

  return /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMResource$send(addr, msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacSendP$0$SubAMSend$send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) AMResourceP$0$AMSend$send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
# 89 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t result;

  /* atomic removed: atomic calls only */
  {
    rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$PacketEx$getPacketHeader(msg);
    rf_metadata_t *metadata = (rf_metadata_t *)msg->metadata;



    if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending) 
      {
        {
          unsigned char __nesc_temp = 
#line 102
          FAIL;

#line 102
          return __nesc_temp;
        }
      }
    header->ack_req = addr != 0xFFFF;

    __nesc_hton_int8((unsigned char *)&metadata->ack, FALSE);

    result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$SubAMSend$send(addr, msg, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$SubPacket$payloadLength(msg));

    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$startOneShot(10000);

    if (result == 0) 
      {
        /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg = msg;
        /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending = TRUE;
      }

    {
      unsigned char __nesc_temp = 
#line 119
      result;

#line 119
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacRetrySendP$0$SubAMSend$send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) RfReliableMacSendP$0$AMSend$send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacRetrySendP$0$AMPacket$destination(arg_0x7eb425b0) RfPacketP$AMPacket$destination(arg_0x7eb425b0)
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacRetrySendP$0$Packet$payloadLength(arg_0x7eb25e90) RfReliableMacPacketP$Packet$payloadLength(arg_0x7eb25e90)
# 140 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 = t0;
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt = dt;
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm();
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define AlarmToTimerC$0$Alarm$startAt(arg_0x7e952c28,arg_0x7e952db8) TransformAlarmC$0$Alarm$startAt(arg_0x7e952c28, arg_0x7e952db8)
# 47 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
  }
}

#line 113
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
  /* atomic removed: atomic calls only */
#line 115
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define VirtualizeTimerC$0$TimerFrom$startOneShotAt(arg_0x7e9a39b8,arg_0x7e9a3b48) AlarmToTimerC$0$Timer$startOneShotAt(arg_0x7e9a39b8, arg_0x7e9a3b48)
# 78 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static inline   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$stop(void)
{
  /* atomic removed: atomic calls only */
#line 80
  T1CCTL0 &= ~(1 << CC2530_T1CCTLx_IM);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC$0$AlarmFrom$stop(void) HplCC2530Timer1P$0$Alarm0$stop()
# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop(void)
{
  /* atomic removed: atomic calls only */
#line 93
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define AlarmToTimerC$0$Alarm$stop(void) TransformAlarmC$0$Alarm$stop()
# 73 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
  }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define VirtualizeTimerC$0$TimerFrom$stop(void) AlarmToTimerC$0$Timer$stop()
# 98 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {




      uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
      int32_t min_remaining = (1UL << 31) - 1;
      bool min_remaining_isset = FALSE;
      uint8_t num;

      {
#line 111
        {
#line 111
          if (1 >= uart_debug_level) {
#line 111
              {
#line 111
                sprintf(uart_debug_buf, "updateFromTimer NUM_TIMERS=%d\n", (int )/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS);
              }
#line 111
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 111
      ;

      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

      for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
        {
          /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];


          if (timer->isrunning) 
            {
              uint32_t elapsed = now - timer->t0;
              int32_t remaining = (timer->dt - elapsed) % (timer->dt + 1);

              {
#line 125
                {
#line 125
                  if (1 >= uart_debug_level) {
#line 125
                      {
#line 125
                        sprintf(uart_debug_buf, "elapsed = 0x%lx, remaining=0x%lx\n", elapsed, remaining);
                      }
#line 125
                      ATOS_DEBUG_UART_PRINT();
                    }
                }
              }
#line 125
              ;

              if (remaining < min_remaining) 
                {
                  min_remaining = remaining;
                  min_remaining_isset = TRUE;
                }
            }
        }

      {
#line 135
        {
#line 135
          if (1 >= uart_debug_level) {
#line 135
              {
#line 135
                sprintf(uart_debug_buf, "updateFromTimer min_remaining_isset=%d, min_remaining=0x%x,\n", (int )min_remaining_isset, (int )min_remaining);
              }
#line 135
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 135
      ;

      if (min_remaining_isset) 
        {
          if (min_remaining <= 0) 
            {
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
            }
          else 
            {
              {
#line 145
                {
#line 145
                  if (1 >= uart_debug_level) {
#line 145
                      {
#line 145
                        sprintf(uart_debug_buf, "VirtualizeTimerC call TimerFrom.startOneShotAt\n");
                      }
#line 145
                      ATOS_DEBUG_UART_PRINT();
                    }
                }
              }
#line 145
              ;
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RealMainP$fakeTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(RealMainP$fakeTask)
# 111 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
static inline  void RealMainP$FakeTimer$fired(void)
{

  RealMainP$fakeTask$postTask();
}

# 71 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$fired(void)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending) 
    {
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDone(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg, ERR_MAC_NO_ACK);
    }
}

static inline  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$fired(void)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending) 
    {
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDone(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg, ERR_MAC_NO_ACK);
    }
}

#line 71
static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$fired(void)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending) 
    {
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDone(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg, ERR_MAC_NO_ACK);
    }
}

static inline  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$fired(void)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending) 
    {
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDone(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg, ERR_MAC_NO_ACK);
    }
}

# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
#define AtosNetStdP$WatchDog$resetCpu(void) WatchDogP$WatchDog$resetCpu()
# 49 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline  void AtosNetStdP$RebootTimer$fired(void)
{
  AtosNetStdP$WatchDog$resetCpu();
}

# 232 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
#line 232
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7e794030){
#line 72
  switch (arg_0x7e794030) {
#line 72
    case 0U:
#line 72
      RealMainP$FakeTimer$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$fired();
#line 72
      break;
#line 72
    case 5U:
#line 72
      AtosNetStdP$RebootTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7e794030);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 121 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static inline   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$startAt(uint16_t t0, uint16_t dt)
{
  uint16_t set;
#line 123
  uint16_t now;
#line 123
  uint16_t elapsed;

  /* atomic removed: atomic calls only */
  {
    {
#line 127
      now = T1CNTL;
#line 127
      now += T1CNTH << 8;
    }
#line 127
    ;

    elapsed = now - t0;

    if (elapsed >= dt) 
      {
        set = now + 5;
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 138
        if (remaining <= 5) 
          {
            set = now + 5;
          }
        else 
          {
            set = remaining + now;
          }
      }

    {
#line 148
      T1CCTL0 &= ~(1 << CC2530_T1CCTLx_MODE);
#line 148
      T1CC0L = (uint16_t )set & 0xFF;
#line 148
      T1CC0H = ((uint16_t )set >> 8) & 0xFF;
#line 148
      T1CCTL0 |= 1 << CC2530_T1CCTLx_MODE;
    }
#line 148
    ;

    T1CCTL0 |= 1 << CC2530_T1CCTLx_IM;

    {
#line 152
      {
#line 152
        if (1 >= uart_debug_level) {
#line 152
            {
#line 152
              sprintf(uart_debug_buf, "Alarm0.startAt T1CCTL0=0x%x\n", T1CCTL0);
            }
#line 152
            ATOS_DEBUG_UART_PRINT();
          }
      }
    }
#line 152
    ;
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC$0$AlarmFrom$startAt(arg_0x7e952c28,arg_0x7e952db8) HplCC2530Timer1P$0$Alarm0$startAt(arg_0x7e952c28, arg_0x7e952db8)
# 152 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void)
{
  /* atomic removed: atomic calls only */
  {
    {
#line 156
      {
#line 156
        if (1 >= uart_debug_level) {
#line 156
            {
#line 156
              sprintf(uart_debug_buf, "VirtualizeTimerC.TimerFrom.fired\n");
            }
#line 156
            ATOS_DEBUG_UART_PRINT();
          }
      }
    }
#line 156
    ;
    /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
  }
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define AlarmToTimerC$0$Timer$fired(void) VirtualizeTimerC$0$TimerFrom$fired()
# 81 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm(void)
{
  /* atomic removed: atomic calls only */
#line 83
  {
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type __nesc_temp = 
#line 83
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;

#line 83
    return __nesc_temp;
  }
}

# 105 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define AlarmToTimerC$0$Alarm$getAlarm(void) TransformAlarmC$0$Alarm$getAlarm()
# 81 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$firedTask$runTask(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) 
        {
          /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
        }
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
    }
#line 90
    __nesc_atomic_end(__nesc_atomic); }
}

# 103 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
static inline  void RealMainP$fakeTask$runTask(void)
{
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacRetrySendP$0$Packet$setPayloadLength(arg_0x7eb24538,arg_0x7eb246c0) RfReliableMacPacketP$Packet$setPayloadLength(arg_0x7eb24538, arg_0x7eb246c0)
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacRetrySendP$0$AMPacket$setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP$AMPacket$setDestination(arg_0x7eb40190, arg_0x7eb40320)
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacRetrySendP$0$PacketEx$getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP$PacketEx$getPacketHeader(arg_0x7e6b4120)
# 74 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t result;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$PacketEx$getPacketHeader(msg);
      rf_metadata_t *metadata = (rf_metadata_t *)msg->metadata;

      if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_sending) 
        {
          {
            unsigned char __nesc_temp = 
#line 85
            FAIL;

            {
#line 85
              __nesc_atomic_end(__nesc_atomic); 
#line 85
              return __nesc_temp;
            }
          }
        }
      header->ack_req = addr != 0xFFFF;

      __nesc_hton_int8((unsigned char *)&metadata->ack, FALSE);

      header->dsn = rf_rmac_dsn;

      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AMPacket$setDestination(msg, addr);
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$Packet$setPayloadLength(msg, len);


      result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$doSend(msg);

      if (result == 0) 
        {
          rf_rmac_dsn++;
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_sending = TRUE;
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_msg = msg;
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_retry_times = 0;
        }

      {
        unsigned char __nesc_temp = 
#line 109
        result;

        {
#line 109
          __nesc_atomic_end(__nesc_atomic); 
#line 109
          return __nesc_temp;
        }
      }
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define DigBaseP$AMSend$send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) RfReliableMacRetrySendP$0$AMSend$send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
# 52 "DigBaseP.nc"
static inline uint16_t DigBaseP$getDestAddress(void)
{
  uint16_t address = 0;
  uint8_t i = 0;

  if (DigBaseP$m_address_index > DigBaseP$MAX_ADDRESS_LEN) 
    {
      DigBaseP$m_address_index = DigBaseP$MAX_ADDRESS_LEN - 1;
    }

  for (i = 0; i < DigBaseP$m_address_index; ++i) 
    {
      uint8_t digital = DigBaseP$m_address_str[i];

#line 65
      if (digital >= 'A' && digital <= 'F') 
        {
          digital = digital - 'A' + 10;
        }
      else {
#line 69
        if (digital >= 'a' && digital <= 'f') 
          {
            digital = digital - 'a' + 10;
          }
        else {
#line 73
          if (digital >= '0' && digital <= '9') 
            {
              digital = digital - '0';
            }
          }
        }
#line 78
      address = address * 16 + digital;
    }

  return address;
}

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define DigBaseP$AMPacket$address(void) RfPacketP$AMPacket$address()
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define DigBaseP$Packet$getPayload(arg_0x7eb23358,arg_0x7eb23500) RfReliableMacPacketP$Packet$getPayload(arg_0x7eb23358, arg_0x7eb23500)
# 85 "DigBaseP.nc"
static inline  void DigBaseP$sendData$runTask(void)
{
  uint8_t i;
  uint8_t *payload = DigBaseP$Packet$getPayload(&DigBaseP$m_msg, (void *)0);
  uint16_t address = DigBaseP$AMPacket$address();
  uint16_t dest_address = DigBaseP$getDestAddress();

  {
#line 92
    {
#line 92
      if (1000 >= uart_debug_level) {
#line 92
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 92
            {
#line 92
              sprintf(uart_debug_buf, "\npayload = %c\n", *payload);
            }
#line 93
            __nesc_atomic_end(__nesc_atomic); }
#line 92
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
#line 92
  ;
  DigBaseP$m_len = 1;

  if (*payload == 'Y' || *payload == 'y') 
    {
      {
#line 97
        {
#line 97
          if (1000 >= uart_debug_level) {
#line 97
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
                {
#line 97
                  sprintf(uart_debug_buf, "\r\n\r\n* Sending ... from [%d], to [%d], len=[%d]\r\n", (int )address, (int )dest_address, (int )DigBaseP$m_len);
                }
#line 98
                __nesc_atomic_end(__nesc_atomic); }
#line 97
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 97
      ;



      DigBaseP$AMSend$send(dest_address, &DigBaseP$m_msg, DigBaseP$m_len);
    }
  else 
    {
      DigBaseP$m_input_type = DigBaseP$INPUT_ADDRESS;

      DigBaseP$showMenu$postTask();
    }
  {
#line 109
    P1_2 = ~P1_2;
  }
#line 109
  ;
}

#line 34
static inline  void DigBaseP$showMenu$runTask(void)
{
  if (DigBaseP$m_input_type == DigBaseP$INPUT_DATA) 
    {
      {
#line 38
        {
#line 38
          if (1000 >= uart_debug_level) {
#line 38
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 38
                {
#line 38
                  sprintf(uart_debug_buf, "\r\n* To Send:(Y or N)\r\n");
                }
#line 39
                __nesc_atomic_end(__nesc_atomic); }
#line 38
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 38
      ;
    }
  else 
    {
      {
#line 42
        {
#line 42
          if (1000 >= uart_debug_level) {
#line 42
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 42
                {
#line 42
                  sprintf(uart_debug_buf, "\r\n###################################################\r\n* MY NodeId = 0x%x, Group=0x%x, destination ?\r\n", (int )DigBaseP$AMPacket$address(), (int )TOS_IEEE_PANID);
                }
#line 43
                __nesc_atomic_end(__nesc_atomic); }
#line 42
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 42
      ;



      DigBaseP$m_input_type = DigBaseP$INPUT_ADDRESS;
      DigBaseP$m_address_index = 0;
    }
}

# 50 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 38 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
static inline  error_t HalFlashP$Init$init(void)
{
  return 0;
}

# 103 "/opt/atos/tos/chips/rf2530/hardware/control/RfConfigP.nc"
static inline  error_t RfConfigP$Init$init(void)
{
  /* atomic removed: atomic calls only */
  {
    RfConfigP$m_channel = 11;






    if (RfConfigP$m_channel < 11 || RfConfigP$m_channel > 26) 
      {
        RfConfigP$m_channel = 11;
      }

    RfConfigP$m_tx_power = 0xF5;
    RfConfigP$m_hw_auto_ack = FALSE;





    RfConfigP$m_address_recognition = TRUE;
  }


  return 0;
}

# 10 "/opt/atos/tos/chips/cc2530/random/CC2530RandomLfsrP.nc"
static inline  error_t CC2530RandomLfsrP$Init$init(void)
#line 10
{
  /* atomic removed: atomic calls only */
#line 11
  {
    uint16_t rndSeed;
    uint8_t i;


    ADCCON1 = ((ADCCON1 & ~((1 << 3) | (1 << 2))) | (1 << 3)) | (1 << 2);
    (




    (uint8_t_xdata *)0)[0x6189] = 0x40 | (2 << 2);


    RFST = 0xE3;






    while (!(((uint8_t_xdata *)0)[0x6199] & 0x01)) ;

    rndSeed = 0;
    for (i = 0; i < 16; i++) 
      {

        rndSeed = (rndSeed << 1) | (((uint8_t_xdata *)0)[0x61A7] & 0x01);
      }






    if (rndSeed == 0x0000 || rndSeed == 0x0380) 
      {
        rndSeed = 0xBABE;
      }





    RNDL = rndSeed & 0xFF;
    RNDL = rndSeed >> 8;


    RFST = 0xEF;
    (

    (uint8_t_xdata *)0)[0x6189] = 0x40 | (0 << 2);
  }

  return 0;
}

# 80 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
static inline  error_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$Init$init(void)
{
  /* atomic removed: atomic calls only */
  {
    memset(/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_address, 0, sizeof /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_address);
    memset(/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_dsn, 0, sizeof /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_dsn);

    {
      unsigned char __nesc_temp = 
#line 87
      0;

#line 87
      return __nesc_temp;
    }
  }
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$Init$init();
#line 51
  result = ecombine(result, CC2530RandomLfsrP$Init$init());
#line 51
  result = ecombine(result, RfConfigP$Init$init());
#line 51
  result = ecombine(result, /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Init$init());
#line 51
  result = ecombine(result, /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Init$init());
#line 51
  result = ecombine(result, HalFlashP$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 14 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static inline void uart0IntEnable(void)
{

  UTX0IF = 0;
  URX0IF = 0;

  URX0IE = 1;
}

# 22 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static inline error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$doUart0Init(uint32_t baud)
{
  uart0Init(baud);
  uart0IntEnable();

  return 0;
}

static inline  error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0StdControl$start(void)
{
  return /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$doUart0Init(9600);
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
#define HplCC2530UartGenericP$0$subUartStdControl$start(void) HalCC2530Uart0IsrP$0$uart0StdControl$start()
# 18 "/opt/atos/tos/chips/cc2530/usart/HplCC2530UartGenericP.nc"
static inline  error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$UartStdControl$start(void)
{
  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_buf = (void *)0;
  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_buf = (void *)0;

  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_len = 0;
  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_len = 0;

  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_pos = 0;
  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_pos = 0;

  return /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$subUartStdControl$start();
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
#define DigBaseP$UartStdControl$start(void) HplCC2530UartGenericP$0$UartStdControl$start()
# 27 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareTxP.nc"
static inline  error_t RfHardwareTxP$StdControl$start(void)
{
  /* atomic removed: atomic calls only */
  {

    do {
        (
#line 32
        (uint8_t_xdata *)0)[0x61A4] &= ~(1 << 1);
      }
    while (
#line 32
    32 == -1);
    do {
#line 33
        S1CON = 0x00;
#line 33
        RFIRQF1 = ~(1 << 1);
      }
    while (
#line 33
    33 == -1);
  }

  return 0;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
#define RfHardwareP$TxControl$start(void) RfHardwareTxP$StdControl$start()
# 59 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static inline   error_t RfInterruptsP$InterruptRFErr$enableRisingEdge(void)
{
  /* atomic removed: atomic calls only */
#line 61
  {
    RFERRIF = 0;
    ((uint8_t_xdata *)0)[0x61A5] = 1 << 2;
    RFERRIE = 1;
  }
  return 0;
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
#define RfHardwareRxP$0$InterruptRFErr$enableRisingEdge(void) RfInterruptsP$InterruptRFErr$enableRisingEdge()
# 36 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static inline   error_t RfInterruptsP$InterruptFIFOP$enableRisingEdge(void)
{
  /* atomic removed: atomic calls only */
#line 38
  {
    do {
        (
#line 39
        (uint8_t_xdata *)0)[0x61A3] |= 1 << 2;
      }
    while (
#line 39
    39 == -1);
  }
  return 0;
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
#define RfHardwareRxP$0$InterruptFIFOP$enableRisingEdge(void) RfInterruptsP$InterruptFIFOP$enableRisingEdge()
# 33 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static inline  error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$StdControl$start(void)
{
  {
#line 35
    /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head = /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail = 0;
  }
#line 35
  ;
  {
#line 36
    do {
#line 36
        RFST = 0xED;
#line 36
        RFST = 0xED;
      }
    while (
#line 36
    36 == -1);
#line 36
    do {
#line 36
        S1CON = 0x00;
#line 36
        RFIRQF0 = ~(1 << 2);
      }
    while (
#line 36
    36 == -1);
  }
#line 36
  ;

  /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptFIFOP$enableRisingEdge();
  /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptRFErr$enableRisingEdge();

  return 0;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
#define RfHardwareP$RxControl$start(void) RfHardwareRxP$0$StdControl$start()
# 57 "/opt/atos/tos/chips/rf2530/hardware/control/RfConfigP.nc"
static inline void RfConfigP$writeTxPower(void)
{
  /* atomic removed: atomic calls only */
  {
    do {
        (
#line 61
        (uint8_t_xdata *)0)[0x6190] = RfConfigP$m_tx_power;
      }
    while (
#line 61
    61 == -1);
  }
}

#line 52
static inline void RfConfigP$writeFIFOPThrehold(void)
{
  do {
      (
#line 54
      (uint8_t_xdata *)0)[0x6194] = 128 - 1;
    }
  while (
#line 54
  54 == -1);
}

#line 34
static inline void RfConfigP$writeFilter(void)
{
  /* atomic removed: atomic calls only */
  {

    if (RfConfigP$m_hw_auto_ack) {
      ((uint8_t_xdata *)0)[0x6189] = 0x40 | (1 << 5);
      }
    else {
      (
#line 42
      (uint8_t_xdata *)0)[0x6189] = 0x40;
      }

    if (RfConfigP$m_address_recognition) {
      do {
          (
#line 46
          (uint8_t_xdata *)0)[0x6180] |= 1 << 0;
        }
      while (
#line 46
      46 == -1);
      }
    else {
#line 48
      do {
          (
#line 48
          (uint8_t_xdata *)0)[0x6180] &= ~(1 << 0);
        }
      while (
#line 48
      48 == -1);
      }
  }
}

#line 26
static inline void RfConfigP$writeChannel(void)
{
  /* atomic removed: atomic calls only */
  {
    do {
        (
#line 30
        (uint8_t_xdata *)0)[0x618F] = 0x0B + 5 * (RfConfigP$m_channel - 11);
      }
    while (
#line 30
    30 == -1);
  }
}

#line 65
static inline void RfConfigP$RfConfigWrite(void)
{
  /* atomic removed: atomic calls only */
  {
    RfConfigP$writeChannel();
    RfConfigP$writeFilter();
    RfConfigP$writeFIFOPThrehold();
    RfConfigP$writeTxPower();
  }
}

#line 135
static inline  void RfConfigP$RfConfig$flush(void)
{
  RfConfigP$RfConfigWrite();
}

# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
#define RfHardwareP$RfConfig$flush(void) RfConfigP$RfConfig$flush()
# 85 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static inline  void RfPowerP$RfPower$rxOn(void)
{
  /* atomic removed: atomic calls only */
#line 87
  do {
#line 87
      RFST = 0xED;
#line 87
      RFST = 0xED;
    }
  while (
#line 87
  87 == -1);
  /* atomic removed: atomic calls only */
  do {
#line 89
      RFST = 0xE3;
    }
  while (
#line 89
  89 == -1);
}

# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
#define RfHardwareP$RfPower$rxOn(void) RfPowerP$RfPower$rxOn()
# 103 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static inline  void RfPowerP$RfPower$oscOn(void)
{
}

# 13 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
#define RfHardwareP$RfPower$oscOn(void) RfPowerP$RfPower$oscOn()
# 16 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static inline  void RfPowerP$RfPower$radioOn(void)
{
  (
#line 31
  (uint8_t_xdata *)0)[0x6196] = 0xF8;
  (









  (uint8_t_xdata *)0)[0x61AE] = 0x00;
  (

  (uint8_t_xdata *)0)[0x61B2] = 0x15;
  (
#line 58
  (uint8_t_xdata *)0)[0x61FA] = 0x09;
  (

  (uint8_t_xdata *)0)[0x61E5] = 0xFF;


  IEN2 |= 1 << 0;


  RFERRIE = 1;







  do {
      (
#line 75
      (uint8_t_xdata *)0)[0x6164] = 0;
      (
#line 75
      (uint8_t_xdata *)0)[0x6165] = 0;
      (
#line 75
      (uint8_t_xdata *)0)[0x6166] = 0;
    }
  while (
#line 75
  75 == -1);
  do {
      (
#line 76
      (uint8_t_xdata *)0)[0x6167] = 0;
      (
#line 76
      (uint8_t_xdata *)0)[0x6168] = 0;
      (
#line 76
      (uint8_t_xdata *)0)[0x6169] = 0;
    }
  while (
#line 76
  76 == -1);
}

# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
#define RfHardwareP$RfPower$radioOn(void) RfPowerP$RfPower$radioOn()
# 11 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static inline  void RfPowerP$RfPower$reset(void)
{
}

# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
#define RfHardwareP$RfPower$reset(void) RfPowerP$RfPower$reset()
# 19 "/opt/atos/tos/chips/rf2530/hardware/RfHardwareP.nc"
static inline  error_t RfHardwareP$AtosControl$start(void)
{

  RfHardwareP$RfPower$reset();
  RfHardwareP$RfPower$radioOn();
  RfHardwareP$RfPower$oscOn();
  RfHardwareP$RfPower$rxOn();


  RfHardwareP$RfConfig$flush();








  RfHardwareP$RxControl$start();
  RfHardwareP$TxControl$start();

  return 0;
}

# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define AtosMacP$HardwareAtosControl$start(void) RfHardwareP$AtosControl$start()
# 7 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
#define RfMacBaseCsmaP$FlashIEEE$GetIEEE(arg_0x7ea50068) FlashIEEEP$FlashIEEE$GetIEEE(arg_0x7ea50068)
# 159 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static inline   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$stop(void)
{
  /* atomic removed: atomic calls only */
#line 161
  T1CCTL1 &= ~(1 << CC2530_T1CCTLx_IM);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC$1$AlarmFrom$stop(void) HplCC2530Timer1P$0$Alarm1$stop()
# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$stop(void)
{
  /* atomic removed: atomic calls only */
#line 93
  /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define RfMacBaseCsmaP$BackoffTimer$stop(void) TransformAlarmC$1$Alarm$stop()
# 226 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static inline  error_t RfMacBaseCsmaP$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    RfMacBaseCsmaP$BackoffTimer$stop();
    RfMacBaseCsmaP$m_cancel = FALSE;
    RfMacBaseCsmaP$m_state = RfMacBaseCsmaP$CSMA_STATE_SAMPLE_CCA;
    RfMacBaseCsmaP$m_congestion_count = 0;

    RfMacBaseCsmaP$m_started = TRUE;

    RfMacBaseCsmaP$m_congestion_delay = 0;

    RfMacBaseCsmaP$FlashIEEE$GetIEEE(RfMacBaseCsmaP$m_test_ieee);

    {
      unsigned char __nesc_temp = 
#line 241
      0;

#line 241
      return __nesc_temp;
    }
  }
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
#define RfMacBaseSendP$0$Random$rand16(void) CC2530RandomLfsrP$Random$rand16()
# 96 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
static inline  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$remove(uint8_t idx)
{
  /* atomic removed: atomic calls only */
  {
    /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t t = /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$element(idx);
    uint8_t end = (/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$tail + 4 - 1) % 4;
    uint8_t next_idx;

    if (!/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$empty()) 
      {
        idx += /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$head;
        idx %= 4;

        while (idx != end) 
          {
            next_idx = (idx + 1) % 4;
            /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue[idx] = /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue[next_idx];
            idx = next_idx;
          }

        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$tail = end;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$size--;
      }

    {
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t __nesc_temp = 
#line 120
      t;

#line 120
      return __nesc_temp;
    }
  }
}

#line 124
static inline  void /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$clear(void)
{
  /* atomic removed: atomic calls only */
  {
    while (/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$size() > 0) 
      {
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$remove(0);
      }
  }
}

# 67 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
#define RfMacBaseSendP$0$SendQueue$clear(void) QueueExC$0$QueueEx$clear()
# 186 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
static inline  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$SendQueue$clear();
    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_sending = FALSE;

    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_started = TRUE;

    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$m_hardware_dsn = /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$Random$rand16();

    {
      unsigned char __nesc_temp = 
#line 197
      0;

#line 197
      return __nesc_temp;
    }
  }
}

# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define AMResourceCenterP$SubAtosControl$start(void) RfMacBaseSendP$0$AtosControl$start()
# 83 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static inline  error_t AMResourceCenterP$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    AMResourceCenterP$SubAtosControl$start();

    AMResourceCenterP$m_started = TRUE;

    {
      unsigned char __nesc_temp = 
#line 91
      0;

#line 91
      return __nesc_temp;
    }
  }
}

# 75 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static inline  error_t RfActiveMessageP$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    RfActiveMessageP$m_started = TRUE;

    {
      unsigned char __nesc_temp = 
#line 81
      0;

#line 81
      return __nesc_temp;
    }
  }
}

# 192 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /* atomic removed: atomic calls only */
#line 194
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP$0$AckTimer$stop(void) VirtualizeTimerC$0$Timer$stop(1U)
#define RfReliableMacSendP$0$TimeoutTimer$stop(void) VirtualizeTimerC$0$Timer$stop(2U)
# 204 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending = FALSE;
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_result = FAIL;


    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$stop();
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$stop();

    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_started = TRUE;

    {
      unsigned char __nesc_temp = 
#line 217
      0;

#line 217
      return __nesc_temp;
    }
  }
}

# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define RfReliableMacRetrySendP$0$SubAtosControl$start(void) RfReliableMacSendP$0$AtosControl$start()
# 151 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_sending = FALSE;
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_retry_times = 0;

    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$SubAtosControl$start();

    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_started = TRUE;

    {
      unsigned char __nesc_temp = 
#line 162
      0;

#line 162
      return __nesc_temp;
    }
  }
}

# 101 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static inline  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_started = TRUE;

    memset(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_ack_msg, 0, sizeof /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_ack_msg);

    {
      unsigned char __nesc_temp = 
#line 109
      0;

#line 109
      return __nesc_temp;
    }
  }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP$1$AckTimer$stop(void) VirtualizeTimerC$0$Timer$stop(3U)
#define RfReliableMacSendP$1$TimeoutTimer$stop(void) VirtualizeTimerC$0$Timer$stop(4U)
# 204 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending = FALSE;
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_result = FAIL;


    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$stop();
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$stop();

    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_started = TRUE;

    {
      unsigned char __nesc_temp = 
#line 217
      0;

#line 217
      return __nesc_temp;
    }
  }
}

# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define RfReliableMacRetrySendP$1$SubAtosControl$start(void) RfReliableMacSendP$1$AtosControl$start()
# 151 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_sending = FALSE;
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_retry_times = 0;

    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$SubAtosControl$start();

    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_started = TRUE;

    {
      unsigned char __nesc_temp = 
#line 162
      0;

#line 162
      return __nesc_temp;
    }
  }
}

# 101 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static inline  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AtosControl$start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_started = TRUE;

    memset(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_ack_msg, 0, sizeof /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_ack_msg);

    {
      unsigned char __nesc_temp = 
#line 109
      0;

#line 109
      return __nesc_temp;
    }
  }
}

# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
inline static  error_t AtosMacP$SubAtosControl$start(void){
#line 4
  unsigned char result;
#line 4

#line 4
  result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AtosControl$start();
#line 4
  result = ecombine(result, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AtosControl$start());
#line 4
  result = ecombine(result, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AtosControl$start());
#line 4
  result = ecombine(result, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AtosControl$start());
#line 4
  result = ecombine(result, RfActiveMessageP$AtosControl$start());
#line 4
  result = ecombine(result, AMResourceCenterP$AtosControl$start());
#line 4
  result = ecombine(result, RfMacBaseCsmaP$AtosControl$start());
#line 4

#line 4
  return result;
#line 4
}
#line 4
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
#define AtosMacP$Random$rand16(void) CC2530RandomLfsrP$Random$rand16()
# 17 "/opt/atos/tos/lib/atos/net/AtosMac/AtosMacP.nc"
static inline  error_t AtosMacP$AtosControl$start(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      rf_rmac_dsn = AtosMacP$Random$rand16();

      AtosMacP$SubAtosControl$start();
      AtosMacP$HardwareAtosControl$start();

      AtosMacP$m_started = TRUE;

      {
        unsigned char __nesc_temp = 
#line 28
        0;

        {
#line 28
          __nesc_atomic_end(__nesc_atomic); 
#line 28
          return __nesc_temp;
        }
      }
    }
#line 31
    __nesc_atomic_end(__nesc_atomic); }
}

# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define DigBaseP$AtosControl$start(void) AtosMacP$AtosControl$start()
# 176 "DigBaseP.nc"
static inline  void DigBaseP$Boot$booted(void)
{

  DigBaseP$AtosControl$start();


  DigBaseP$UartStdControl$start();
  {
#line 183
    P1_3 = 1;
  }
#line 183
  ;
  {
#line 184
    P1_2 = 1;
  }
#line 184
  ;

  {
#line 186
    {
#line 186
      if (1000 >= uart_debug_level) {
#line 186
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 186
            {
#line 186
              sprintf(uart_debug_buf, "\r\n###############################################\r\n");
            }
#line 187
            __nesc_atomic_end(__nesc_atomic); }
#line 186
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
#line 186
  ;
  {
#line 187
    {
#line 187
      if (1000 >= uart_debug_level) {
#line 187
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
            {
#line 187
              sprintf(uart_debug_buf, "   My Address = 0x%x, Group = 0x%x\r\n", (int )DigBaseP$AMPacket$address(), (int )TOS_IEEE_PANID);
            }
#line 188
            __nesc_atomic_end(__nesc_atomic); }
#line 187
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
#line 187
  ;
  {
#line 188
    {
#line 188
      if (1000 >= uart_debug_level) {
#line 188
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
            {
#line 188
              sprintf(uart_debug_buf, "###############################################\r\n");
            }
#line 189
            __nesc_atomic_end(__nesc_atomic); }
#line 188
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
#line 188
  ;

  DigBaseP$m_input_type = DigBaseP$INPUT_ADDRESS;
  DigBaseP$showMenu$postTask();
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
#define RealMainP$Boot$booted(void) DigBaseP$Boot$booted()
# 81 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
static inline   void McuSleepP$McuSleepControl$default$afterWakeup(void)
{
}

# 10 "/opt/atos/tos/lib/atos/power/McuSleepControl.nc"
#define McuSleepP$McuSleepControl$afterWakeup(void) McuSleepP$McuSleepControl$default$afterWakeup()
# 84 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
static inline   error_t McuSleepP$ModuleReset$default$reset(uint8_t reset_level)
{
}

# 6 "/opt/atos/tos/lib/atos/utils/ModuleReset.nc"
#define McuSleepP$ModuleReset$reset(arg_0x7ebe5310) McuSleepP$ModuleReset$default$reset(arg_0x7ebe5310)
# 65 "/opt/atos/tos/chips/cc2530/mcs51/mcs51hardware.h"
static __inline void __nesc_enable_interrupt(void)
#line 65
{
#line 65
  EA = 1;
}

# 78 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
static inline   void McuSleepP$McuSleepControl$default$beforeSleep(void)
{
}

# 8 "/opt/atos/tos/lib/atos/power/McuSleepControl.nc"
#define McuSleepP$McuSleepControl$beforeSleep(void) McuSleepP$McuSleepControl$default$beforeSleep()
# 36 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
static inline   void McuSleepP$McuSleep$sleep(void)
{


  if (McuSleepP$m_need_sleep) 
    {

      ;

      do {
#line 45
          SLEEPCMD = (SLEEPCMD & ~CC2530_SLEEP_MODE_MASK) | CC2530_SLEEP_POWERMODE_2;
        }
      while (
#line 45
      0);

      McuSleepP$McuSleepControl$beforeSleep();

      ;
      __nesc_enable_interrupt();

      {
#line 52
        P1_3 = 1;
      }
#line 52
      ;

      McuSleepP$m_need_sleep = FALSE;
      {
#line 55
        PCON = 0x01;
      }
#line 55
      ;






      ;

      {
#line 64
        P1_3 = 0;
      }
#line 64
      ;

      McuSleepP$ModuleReset$reset(0);
      ;

      McuSleepP$McuSleepControl$afterWakeup();
    }
  else 
    {
    }
}

# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
#define SchedulerBasicP$McuSleep$sleep(void) McuSleepP$McuSleep$sleep()
# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgr.nc"
#define SchedulerBasicP$TopTaskMgr$hasTasks(void) TopTaskMgrP$TopTaskMgr$hasTasks()
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void)
{
}

# 170 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow(void)
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow(void){
#line 71
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow();
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 125 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC$0$m_upper++;

      if ((/*CounterMilli32C.Transform*/TransformCounterC$0$m_upper & /*CounterMilli32C.Transform*/TransformCounterC$0$OVERFLOW_MASK) == 0) 
        {
          /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 135
    __nesc_atomic_end(__nesc_atomic); }
}

# 170 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Counter$overflow(void)
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformCounterC$1$Counter$overflow(void) TransformAlarmC$1$Counter$overflow()
# 125 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$m_upper++;

      if ((/*Counter32khz32C.TransformCounterC*/TransformCounterC$1$m_upper & /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$OVERFLOW_MASK) == 0) 
        {
          /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$Counter$overflow();
        }
    }
#line 135
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$overflow(void){
#line 71
  /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$overflow();
#line 71
  /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 534 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static inline    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm2$default$fired(void)
#line 534
{
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define HplCC2530Timer1P$0$Alarm2$fired(void) HplCC2530Timer1P$0$Alarm2$default$fired()
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfMacBaseCsmaP$doGo$postTask(void) SchedulerBasicP$TaskBasic$postTask(RfMacBaseCsmaP$doGo)
# 83 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static inline uint32_t RfMacBaseCsmaP$congestionBackoffTimer(void)
{
  RfMacBaseCsmaP$m_this_random = RfMacBaseCsmaP$Random$rand16() % RfMacBaseCsmaP$m_congestion_delay;
  if (RfMacBaseCsmaP$m_this_random == 0) {
#line 86
    RfMacBaseCsmaP$m_this_random = 1;
    }
#line 87
  RfMacBaseCsmaP$m_this_delay += RfMacBaseCsmaP$m_this_random;
  return (uint32_t )RfMacBaseCsmaP$m_this_random * RfMacBaseCsmaP$RF_BACKOFF_PERIOD;
}

static inline void RfMacBaseCsmaP$congestion(void)
{


  if (RfMacBaseCsmaP$m_congestion_count++ < RfMacBaseCsmaP$RF_CONGESTION_MAX) 
    {
      RfMacBaseCsmaP$BackoffTimer$start(RfMacBaseCsmaP$congestionBackoffTimer());
    }
  else 
    {
      RfMacBaseCsmaP$signalDone(ERR_MAC_CONGESTION_FAIL);
    }
}

#line 135
static inline   void RfMacBaseCsmaP$BackoffTimer$fired(void)
{
  if (!(((uint8_t_xdata *)0)[0x6193] & (1 << 4))) 
    {
      RfMacBaseCsmaP$congestion();
      return;
    }




  if (RfMacBaseCsmaP$m_state == RfMacBaseCsmaP$CSMA_STATE_SAMPLE_CCA) 
    {
      RfMacBaseCsmaP$m_state = RfMacBaseCsmaP$CSMA_STATE_BEGIN_SEND;


      RfMacBaseCsmaP$BackoffTimer$start(RfMacBaseCsmaP$RF_TIME_ACK_TURNAROUND);
    }
  else {
#line 153
    if (RfMacBaseCsmaP$m_state == RfMacBaseCsmaP$CSMA_STATE_BEGIN_SEND) 
      {
        RfMacBaseCsmaP$doGo$postTask();
      }
    else 
      {
      }
    }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC$1$Alarm$fired(void) RfMacBaseCsmaP$BackoffTimer$fired()
# 155 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_dt == 0) 
        {
          /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Alarm$fired();
        }
      else 
        {
          /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$set_alarm();
        }
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define HplCC2530Timer1P$0$Alarm1$fired(void) TransformAlarmC$1$AlarmFrom$fired()
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define AlarmToTimerC$0$firedTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(AlarmToTimerC$0$firedTask)
# 93 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$firedTask$postTask();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC$0$Alarm$fired(void) AlarmToTimerC$0$Alarm$fired()
# 155 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt == 0) 
        {
          /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$fired();
        }
      else 
        {
          /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm();
        }
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define HplCC2530Timer1P$0$Alarm0$fired(void) TransformAlarmC$0$AlarmFrom$fired()
# 403 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static inline  void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$TopTaskHandler$handler(void)
{
  uint8_t flag;

  do {
#line 407
      m_critical_state = EA;
#line 407
      EA = 0;
    }
  while (
#line 407
  407 == -1);

  {
    flag = /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag;
    /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag = 0x00;
  }

  do {
#line 414
      EA = m_critical_state;
    }
  while (
#line 414
  414 == -1);


  if (flag & (1 << 0)) 
    {
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm0$fired();
    }

  if (flag & (1 << 1)) 
    {
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm1$fired();
    }

  if (flag & (1 << 2)) 
    {
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Alarm2$fired();
    }

  if (flag & (1 << 3)) 
    {
    }


  if (flag & (1 << 4)) 
    {
    }


  if (flag & (1 << 5)) 
    {
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$overflow();
    }


  if (/*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag) 
    {
      {
#line 450
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 450
          {
#line 450
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
#line 451
          __nesc_atomic_end(__nesc_atomic); }
      }
#line 450
      ;
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define DigBaseP$sendData$postTask(void) SchedulerBasicP$TaskBasic$postTask(DigBaseP$sendData)
# 134 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  uint8_t RfPacketP$Packet$maxPayloadLength(void)
{
  return 127 - (sizeof(rf_header_t ) - 1 + sizeof(uint16_t )) - 0;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacPacketP$SubPacket$maxPayloadLength(void) RfPacketP$Packet$maxPayloadLength()
# 30 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static inline  uint8_t RfReliableMacPacketP$Packet$maxPayloadLength(void)
{
  return RfReliableMacPacketP$SubPacket$maxPayloadLength() - sizeof(rf_rmac_header_t );
}

# 95 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define DigBaseP$Packet$maxPayloadLength(void) RfReliableMacPacketP$Packet$maxPayloadLength()
# 125 "DigBaseP.nc"
static inline   void DigBaseP$UartStream$receivedByte(uint8_t c)
{

  if (c != '\r') 
    {
      if (DigBaseP$m_input_type == DigBaseP$INPUT_DATA) 
        {
          uint8_t *payload = (uint8_t *)DigBaseP$Packet$getPayload(&DigBaseP$m_msg, (void *)0);

#line 133
          if (DigBaseP$m_len >= DigBaseP$Packet$maxPayloadLength()) 
            {
              return;
            }

          *payload = c;
          {
#line 139
            {
#line 139
              if (1000 >= uart_debug_level) {
#line 139
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 139
                    {
#line 139
                      sprintf(uart_debug_buf, "%c", c);
                    }
#line 140
                    __nesc_atomic_end(__nesc_atomic); }
#line 139
                  ATOS_DEBUG_UART_PRINT();
                }
            }
          }
#line 139
          ;

          if (DigBaseP$m_len < DigBaseP$Packet$maxPayloadLength()) 
            {
              return;
            }
        }
      else 
        {
          if (DigBaseP$m_address_index < DigBaseP$MAX_ADDRESS_LEN) 
            {
              DigBaseP$m_address_str[DigBaseP$m_address_index++] = c;
              {
#line 151
                {
#line 151
                  if (1000 >= uart_debug_level) {
#line 151
                      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
                        {
#line 151
                          sprintf(uart_debug_buf, "%c", c);
                        }
#line 152
                        __nesc_atomic_end(__nesc_atomic); }
#line 151
                      ATOS_DEBUG_UART_PRINT();
                    }
                }
              }
#line 151
              ;
            }

          if (DigBaseP$m_address_index < DigBaseP$MAX_ADDRESS_LEN) 
            {
              return;
            }
        }
    }
  else {

      if (DigBaseP$m_input_type == DigBaseP$INPUT_DATA) 
        {
          DigBaseP$sendData$postTask();
        }
      else 
        {

          DigBaseP$m_input_type = DigBaseP$INPUT_DATA;
          DigBaseP$showMenu$postTask();
        }
    }
}

# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
#define HplCC2530UartGenericP$0$UartStream$receivedByte(arg_0x7eb73860) DigBaseP$UartStream$receivedByte(arg_0x7eb73860)
# 199 "DigBaseP.nc"
static inline   void DigBaseP$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error)
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
#define HplCC2530UartGenericP$0$UartStream$receiveDone(arg_0x7eb72540,arg_0x7eb726d0,arg_0x7eb72858) DigBaseP$UartStream$receiveDone(arg_0x7eb72540, arg_0x7eb726d0, arg_0x7eb72858)
# 70 "/opt/atos/tos/chips/cc2530/usart/HplCC2530UartGenericP.nc"
static inline   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$Uart$get(uint8_t data)
{
  if (/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_buf) 
    {
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_buf[/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_pos++] = data;
      if (/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_pos >= /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_len) 
        {
          uint8_t *buf = /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_buf;

#line 78
          /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_buf = (void *)0;
          /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$UartStream$receiveDone(buf, /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_rx_len, 0);
        }
    }
  else 
    {
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$UartStream$receivedByte(data);
    }
}

# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
#define HalCC2530Uart0IsrP$0$uart0$get(arg_0x7e7108d8) HplCC2530UartGenericP$0$Uart$get(arg_0x7e7108d8)
# 104 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static inline  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$RxTaskHandler$handler(void)
{
  uint8_t data;

  if (!(/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_head == /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_tail)) 
    {
      {
#line 110
        data = /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_data[/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_head & ((1 << 6) - 1)];
#line 110
        /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_head = (/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_head + 1) & ((1 << 6) - 1);
      }
#line 110
      ;

      /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0$get(data);

      if (!(/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_head == /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_tail)) 
        {
          {
#line 116
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
              {
#line 116
                TopTaskMgrP__m_task_flag[1] = TRUE;
              }
#line 117
              __nesc_atomic_end(__nesc_atomic); }
          }
#line 116
          ;
        }
    }
}

# 195 "DigBaseP.nc"
static inline   void DigBaseP$UartStream$sendDone(uint8_t *buf, uint16_t len, error_t error)
{
}

# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
#define HplCC2530UartGenericP$0$UartStream$sendDone(arg_0x7eb747c8,arg_0x7eb74958,arg_0x7eb74ae0) DigBaseP$UartStream$sendDone(arg_0x7eb747c8, arg_0x7eb74958, arg_0x7eb74ae0)
# 41 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static inline   error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0$put(uint8_t data)
{



  uart0PutChar(data);
  {
#line 47
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 47
      {
#line 47
        TopTaskMgrP__m_task_flag[2] = TRUE;
      }
#line 48
      __nesc_atomic_end(__nesc_atomic); }
  }
#line 47
  ;


  return 0;
}

# 41 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
#define HplCC2530UartGenericP$0$Uart$put(arg_0x7e710338) HalCC2530Uart0IsrP$0$uart0$put(arg_0x7e710338)
# 106 "/opt/atos/tos/chips/cc2530/usart/HplCC2530UartGenericP.nc"
static inline   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$Uart$putDone(void)
{
  if (/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_pos < /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_len) 
    {
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$Uart$put(/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_buf[/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_pos++]);
    }
  else 
    {
      uint8_t *buf = /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_buf;

#line 115
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_buf = (void *)0;
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$UartStream$sendDone(buf, /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP$0$m_tx_len, 0);
    }
}

# 53 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
#define HalCC2530Uart0IsrP$0$uart0$putDone(void) HplCC2530UartGenericP$0$Uart$putDone()
# 121 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static inline  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$TxTaskHandler$handler(void)
{
  /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uart0$putDone();
}

# 257 "/usr/lib/ncc/nesc_nx.h"
static __inline int8_t __nesc_ntoh_int8(const void *source)
#line 257
{
#line 257
  return __nesc_ntoh_uint8(source);
}

# 67 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static inline   message_t *RfActiveMessageP$Snoop$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
{
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
#define RfActiveMessageP$Snoop$receive(arg_0x7e398bb0,arg_0x7eb51ca0,arg_0x7eb51e40,arg_0x7eb50010) RfActiveMessageP$Snoop$default$receive(arg_0x7e398bb0, arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010)
# 204 "DigBaseP.nc"
static inline  message_t *DigBaseP$Receive$receive(message_t *msg, void *payload, uint8_t len)
{
  float temp;
#line 206
  float hum;
  uint8_t i;

#line 208
  if (len == 2) 
    {
      {
#line 210
        {
#line 210
          if (1000 >= uart_debug_level) {
#line 210
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 210
                {
#line 210
                  sprintf(uart_debug_buf, "l%02x", (int )((uint8_t *)payload)[0]);
                }
#line 211
                __nesc_atomic_end(__nesc_atomic); }
#line 210
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 210
      ;
      {
#line 211
        {
#line 211
          if (1000 >= uart_debug_level) {
#line 211
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 211
                {
#line 211
                  sprintf(uart_debug_buf, "%02x\r\n", (int )((uint8_t *)payload)[1]);
                }
#line 212
                __nesc_atomic_end(__nesc_atomic); }
#line 211
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 211
      ;
    }
  else 
#line 212
    {
      memcpy(&temp, (float *)payload, 4);
      memcpy(&hum, (float *)(payload + 4), 4);
      if (DigBaseP$sensor_type == 0) 
        {
          {
#line 217
            {
#line 217
              if (1000 >= uart_debug_level) {
#line 217
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 217
                    {
#line 217
                      sprintf(uart_debug_buf, "h%f\r\n", temp);
                    }
#line 218
                    __nesc_atomic_end(__nesc_atomic); }
#line 217
                  ATOS_DEBUG_UART_PRINT();
                }
            }
          }
#line 217
          ;
          DigBaseP$sensor_type = 1;
        }
      else 
#line 219
        {
          {
#line 220
            {
#line 220
              if (1000 >= uart_debug_level) {
#line 220
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 220
                    {
#line 220
                      sprintf(uart_debug_buf, "s%f\r\n", hum);
                    }
#line 221
                    __nesc_atomic_end(__nesc_atomic); }
#line 220
                  ATOS_DEBUG_UART_PRINT();
                }
            }
          }
#line 220
          ;
          DigBaseP$sensor_type = 0;
        }






      {
#line 229
        P1_3 = ~P1_3;
      }
#line 229
      ;

      DigBaseP$m_input_type = DigBaseP$INPUT_ADDRESS;
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
#define RfReliableMacReceiveP$0$Receive$receive(arg_0x7eb51ca0,arg_0x7eb51e40,arg_0x7eb50010) DigBaseP$Receive$receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010)
# 54 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  am_addr_t RfPacketP$AMPacket$source(message_t *amsg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->src);
}

# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP$0$AMPacket$source(arg_0x7eb42b90) RfPacketP$AMPacket$source(arg_0x7eb42b90)
# 92 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
static inline  bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$DsnFilter$filter(uint8_t field_id, uint16_t addr, uint8_t dsn)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      {
        unsigned char __nesc_temp = 
#line 96
        /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$filterDsn(addr, field_id, dsn);

        {
#line 96
          __nesc_atomic_end(__nesc_atomic); 
#line 96
          return __nesc_temp;
        }
      }
    }
#line 99
    __nesc_atomic_end(__nesc_atomic); }
}

# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
#define RfReliableMacReceiveP$0$DsnFilter$filter(arg_0x7e3c9ba8,arg_0x7e3c9d30) DsnFilterCenterP$0$DsnFilter$filter(0U, arg_0x7e3c9ba8, arg_0x7e3c9d30)
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacReceiveP$0$sendAckTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(RfReliableMacReceiveP$0$sendAckTask)
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP$0$AMPacket$setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP$AMPacket$setDestination(arg_0x7eb40190, arg_0x7eb40320)
# 86 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  am_group_t RfPacketP$AMPacket$group(message_t *amsg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->destpan);
}

# 166 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP$0$AMPacket$group(arg_0x7eb348b8) RfPacketP$AMPacket$group(arg_0x7eb348b8)










#define RfReliableMacReceiveP$0$AMPacket$setGroup(arg_0x7eb32010,arg_0x7eb321a0) RfPacketP$AMPacket$setGroup(arg_0x7eb32010, arg_0x7eb321a0)
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
#define RfReliableMacReceiveP$0$RfReliableMacAck$fillAckMessage(arg_0x7e653b48,arg_0x7e653cd8,arg_0x7e653e88,arg_0x7e652068) RfReliableMacAckP$RfReliableMacAck$fillAckMessage(arg_0x7e653b48, arg_0x7e653cd8, arg_0x7e653e88, arg_0x7e652068)
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacReceiveP$0$SubPacket$getPayload(arg_0x7eb23358,arg_0x7eb23500) RfPacketP$Packet$getPayload(arg_0x7eb23358, arg_0x7eb23500)
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacReceiveP$0$PacketEx$getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP$PacketEx$getPacketHeader(arg_0x7e6b4120)


#define RfReliableMacReceiveP$0$PacketEx$isValidPacket(arg_0x7e6b45f8) RfReliableMacPacketP$PacketEx$isValidPacket(arg_0x7e6b45f8)
# 57 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static inline  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$PacketEx$isValidPacket(msg)) 
    {
      rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$PacketEx$getPacketHeader(msg);
      rf_ack_t *ack_header = (rf_ack_t *)/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$SubPacket$getPayload(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_ack_msg, (void *)0);

      payload = (uint8_t *)payload + sizeof(rf_rmac_header_t );
      len -= sizeof(rf_rmac_header_t );





      if (header->ack_req) 
        {
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$RfReliableMacAck$fillAckMessage(msg, header->dsn, &/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_ack_msg, ack_header);

          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$setGroup(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_ack_msg, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$group(msg));

          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$setDestination(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$m_ack_msg, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$source(msg));

          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAckTask$postTask();
        }


      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$DsnFilter$filter(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$AMPacket$source(msg), header->dsn)) 
        {
          return msg;
        }

      return /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$Receive$receive(msg, payload, len);
    }


  return msg;
}

# 403 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline   void AtosNetStdP$AtosNetStd$default$receivedTraceAck(message_t *msg, anstd_trace_t *trace_ack)
{
}

# 19 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP$AtosNetStd$receivedTraceAck(arg_0x7e2fa1f8,arg_0x7e2fa3b8) AtosNetStdP$AtosNetStd$default$receivedTraceAck(arg_0x7e2fa1f8, arg_0x7e2fa3b8)
# 177 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline void AtosNetStdP$receiveTraceAck(message_t *msg, anstd_trace_ack_t *trace_ack)
{
  int index = AtosNetStdP$indexOfTraceItem(trace_ack, AtosNetStdP$AMPacket$address());

  if (trace_ack->total_count > 20) 
    {
      return;
    }

  if (index < 0) 
    {
      return;
    }

  if (index < trace_ack->total_count - 1) 
    {
      trace_ack->items[index + 1].backward_rssi = __nesc_ntoh_int8((unsigned char *)&((rf_metadata_t *)msg->metadata)->rssi);
    }

  AtosNetStdP$traceBackward(msg, trace_ack, index);
  AtosNetStdP$AtosNetStd$receivedTraceAck(msg, trace_ack);
}

#line 399
static inline   void AtosNetStdP$AtosNetStd$default$receivedTrace(message_t *msg, anstd_trace_t *trace)
{
}

# 18 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP$AtosNetStd$receivedTrace(arg_0x7e2fcb58,arg_0x7e2fcd08) AtosNetStdP$AtosNetStd$default$receivedTrace(arg_0x7e2fcb58, arg_0x7e2fcd08)
# 134 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline void AtosNetStdP$traceForward(message_t *msg, anstd_trace_t *trace, int index)
{
  uint16_t node_id = 0xFFFF;

#line 137
  memcpy(&AtosNetStdP$m_send_msg, msg, sizeof AtosNetStdP$m_send_msg);

  if (index < trace->total_count - 1) 
    {
      node_id = trace->items[index + 1].node_id;
      AtosNetStdP$AMSend$send(node_id, &AtosNetStdP$m_send_msg, AtosNetStdP$Packet$payloadLength(&AtosNetStdP$m_send_msg));
    }
  else 
    {
      AtosNetStdP$traceEnd(msg, trace, index);
    }
}


static inline void AtosNetStdP$receiveTrace(message_t *msg, anstd_trace_t *trace)
{
  int index = AtosNetStdP$indexOfTraceItem(trace, AtosNetStdP$AMPacket$address());

  if (trace->total_count > 20) 
    {
      return;
    }

  if (index < 0) 
    {
      return;
    }

  if (index > 0) 
    {
      trace->items[index - 1].forward_rssi = __nesc_ntoh_int8((unsigned char *)&((rf_metadata_t *)msg->metadata)->rssi);
    }


  trace->traced_count = index + 1;

  AtosNetStdP$traceForward(msg, trace, index);
  AtosNetStdP$AtosNetStd$receivedTrace(msg, trace);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define AtosNetStdP$rebootTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(AtosNetStdP$rebootTask)
# 394 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline   void AtosNetStdP$AtosNetStd$default$receivedReboot(anstd_reboot_t *reboot)
{
}

# 17 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP$AtosNetStd$receivedReboot(arg_0x7e2fc6a8) AtosNetStdP$AtosNetStd$default$receivedReboot(arg_0x7e2fc6a8)
# 94 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline void AtosNetStdP$receiveReboot(message_t *msg, anstd_reboot_t *reboot)
{
  AtosNetStdP$AtosNetStd$receivedReboot(reboot);
  AtosNetStdP$rebootTask$postTask();
}

# 166 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static inline  void FlashIEEEP$FlashIEEE$WriteIEEE(uint8_t *ieee)
{
  /* atomic removed: atomic calls only */
  {
    memcpy(FlashIEEEP$m_ieee, ieee, sizeof FlashIEEEP$m_ieee);
    FlashIEEEP$m_ieee_flash[0] = FlashIEEEP$m_ieee[7];
    FlashIEEEP$m_ieee_flash[1] = FlashIEEEP$m_ieee[6];
    FlashIEEEP$m_ieee_flash[2] = FlashIEEEP$m_ieee[5];
    FlashIEEEP$m_ieee_flash[3] = FlashIEEEP$m_ieee[4];
    FlashIEEEP$m_ieee_flash[4] = FlashIEEEP$m_ieee[3];
    FlashIEEEP$m_ieee_flash[5] = FlashIEEEP$m_ieee[2];
    FlashIEEEP$m_ieee_flash[6] = FlashIEEEP$m_ieee[1];
    FlashIEEEP$m_ieee_flash[7] = FlashIEEEP$m_ieee[0];


    FlashIEEEP$HalFlash$erase(0x3FFE8);
    FlashIEEEP$HalFlash$write(0x3FFE8, FlashIEEEP$m_ieee_flash, sizeof FlashIEEEP$m_ieee_flash);




    FlashIEEEP$readFromFlash();
    FlashIEEEP$FlashIEEE$WriteToRegister();
    FlashIEEEP$FlashIEEE$WriteToAM();
  }
}

# 8 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
#define AtosNetStdP$FlashIEEE$WriteIEEE(arg_0x7ea50510) FlashIEEEP$FlashIEEE$WriteIEEE(arg_0x7ea50510)
# 390 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline   void AtosNetStdP$AtosNetStd$default$receivedSetIEEE(anstd_setieee_t *setieee)
{
}

# 16 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP$AtosNetStd$receivedSetIEEE(arg_0x7e2fc1f8) AtosNetStdP$AtosNetStd$default$receivedSetIEEE(arg_0x7e2fc1f8)
# 84 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline void AtosNetStdP$receiveSetIEEE(message_t *msg, anstd_setieee_t *setieee)
{
  AtosNetStdP$AtosNetStd$receivedSetIEEE(setieee);


  AtosNetStdP$FlashIEEE$WriteIEEE(setieee->ieee);

  AtosNetStdP$rebootTask$postTask();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define AtosNetStdP$nodeStatusUpTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(AtosNetStdP$nodeStatusUpTask)
# 386 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline   void AtosNetStdP$AtosNetStd$default$receivedDiscovery(anstd_discovery_t *discovery)
{
}

# 15 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP$AtosNetStd$receivedDiscovery(arg_0x7e2fdd20) AtosNetStdP$AtosNetStd$default$receivedDiscovery(arg_0x7e2fdd20)
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AtosNetStdP$AMPacket$source(arg_0x7eb42b90) RfPacketP$AMPacket$source(arg_0x7eb42b90)
# 75 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline void AtosNetStdP$receiveDiscovery(message_t *msg, anstd_discovery_t *discovery)
{
  AtosNetStdP$m_ack_addr = AtosNetStdP$AMPacket$source(msg);
  AtosNetStdP$AtosNetStd$receivedDiscovery(discovery);


  AtosNetStdP$nodeStatusUpTask$postTask();
}

#line 382
static inline   void AtosNetStdP$AtosNetStd$default$receivedNodeStatusUp(message_t *msg, anstd_node_status_t *status)
{
}

# 14 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP$AtosNetStd$receivedNodeStatusUp(arg_0x7e2fd698,arg_0x7e2fd850) AtosNetStdP$AtosNetStd$default$receivedNodeStatusUp(arg_0x7e2fd698, arg_0x7e2fd850)
# 69 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static inline void AtosNetStdP$receiveNodeStatusUp(message_t *msg, anstd_node_status_t *status)
{
  AtosNetStdP$AtosNetStd$receivedNodeStatusUp(msg, status);
}

#line 203
static inline  message_t *AtosNetStdP$Receive$receive(message_t *msg, void *payload, uint8_t len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      anstd_header_t *anstd_header = (anstd_header_t *)payload;

      switch (anstd_header->data_type) 
        {
          case ANSTD_DATA_TYPE_NODE_STATUS_UP: 
            AtosNetStdP$receiveNodeStatusUp(msg, (anstd_node_status_t *)payload);
          break;

          case ANSTD_DATA_TYPE_DISCOVERY: 
            AtosNetStdP$receiveDiscovery(msg, (anstd_discovery_t *)payload);
          break;

          case ANSTD_DATA_TYPE_SETIEEE: 
            AtosNetStdP$receiveSetIEEE(msg, (anstd_setieee_t *)payload);
          break;

          case ANSTD_DATA_TYPE_REBOOT: 
            AtosNetStdP$receiveReboot(msg, (anstd_reboot_t *)payload);
          break;

          case ANSTD_DATA_TYPE_TRACE: 
            AtosNetStdP$receiveTrace(msg, (anstd_trace_t *)payload);
          break;

          case ANSTD_DATA_TYPE_TRACE_ACK: 
            AtosNetStdP$receiveTraceAck(msg, (anstd_trace_ack_t *)payload);
          break;
        }

      {
        nx_struct message_t *__nesc_temp = 
#line 236
        msg;

        {
#line 236
          __nesc_atomic_end(__nesc_atomic); 
#line 236
          return __nesc_temp;
        }
      }
    }
#line 239
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
#define RfReliableMacReceiveP$1$Receive$receive(arg_0x7eb51ca0,arg_0x7eb51e40,arg_0x7eb50010) AtosNetStdP$Receive$receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010)
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP$1$AMPacket$source(arg_0x7eb42b90) RfPacketP$AMPacket$source(arg_0x7eb42b90)
# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
#define RfReliableMacReceiveP$1$DsnFilter$filter(arg_0x7e3c9ba8,arg_0x7e3c9d30) DsnFilterCenterP$0$DsnFilter$filter(0U, arg_0x7e3c9ba8, arg_0x7e3c9d30)
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacReceiveP$1$sendAckTask$postTask(void) SchedulerBasicP$TaskBasic$postTask(RfReliableMacReceiveP$1$sendAckTask)
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP$1$AMPacket$setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP$AMPacket$setDestination(arg_0x7eb40190, arg_0x7eb40320)
#line 166
#define RfReliableMacReceiveP$1$AMPacket$group(arg_0x7eb348b8) RfPacketP$AMPacket$group(arg_0x7eb348b8)










#define RfReliableMacReceiveP$1$AMPacket$setGroup(arg_0x7eb32010,arg_0x7eb321a0) RfPacketP$AMPacket$setGroup(arg_0x7eb32010, arg_0x7eb321a0)
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
#define RfReliableMacReceiveP$1$RfReliableMacAck$fillAckMessage(arg_0x7e653b48,arg_0x7e653cd8,arg_0x7e653e88,arg_0x7e652068) RfReliableMacAckP$RfReliableMacAck$fillAckMessage(arg_0x7e653b48, arg_0x7e653cd8, arg_0x7e653e88, arg_0x7e652068)
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacReceiveP$1$SubPacket$getPayload(arg_0x7eb23358,arg_0x7eb23500) RfPacketP$Packet$getPayload(arg_0x7eb23358, arg_0x7eb23500)
# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacReceiveP$1$PacketEx$getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP$PacketEx$getPacketHeader(arg_0x7e6b4120)


#define RfReliableMacReceiveP$1$PacketEx$isValidPacket(arg_0x7e6b45f8) RfReliableMacPacketP$PacketEx$isValidPacket(arg_0x7e6b45f8)
# 57 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static inline  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$PacketEx$isValidPacket(msg)) 
    {
      rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$PacketEx$getPacketHeader(msg);
      rf_ack_t *ack_header = (rf_ack_t *)/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$SubPacket$getPayload(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_ack_msg, (void *)0);

      payload = (uint8_t *)payload + sizeof(rf_rmac_header_t );
      len -= sizeof(rf_rmac_header_t );





      if (header->ack_req) 
        {
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$RfReliableMacAck$fillAckMessage(msg, header->dsn, &/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_ack_msg, ack_header);

          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$setGroup(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_ack_msg, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$group(msg));

          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$setDestination(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$m_ack_msg, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$source(msg));

          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAckTask$postTask();
        }


      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$DsnFilter$filter(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$AMPacket$source(msg), header->dsn)) 
        {
          return msg;
        }

      return /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$Receive$receive(msg, payload, len);
    }


  return msg;
}

# 42 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static inline   void RfReliableMacAckP$RfReliableMacAckEvent$default$receiveAckMessage(message_t *send_msg, message_t *ack_msg, rf_ack_t *ack)
{
}

# 5 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckEvent.nc"
#define RfReliableMacAckP$RfReliableMacAckEvent$receiveAckMessage(arg_0x7e3e7508,arg_0x7e3e76b8,arg_0x7e3e7868) RfReliableMacAckP$RfReliableMacAckEvent$default$receiveAckMessage(arg_0x7e3e7508, arg_0x7e3e76b8, arg_0x7e3e7868)
# 32 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static inline  void RfReliableMacAckP$RfReliableMacAck$receiveAckMessage(message_t *send_msg, message_t *ack_msg, rf_ack_t *ack)
{
  RfReliableMacAckP$RfReliableMacAckEvent$receiveAckMessage(send_msg, ack_msg, ack);
}

# 7 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
#define RfReliableMacSendP$1$RfReliableMacAck$receiveAckMessage(arg_0x7e652540,arg_0x7e6526f0,arg_0x7e6528a0) RfReliableMacAckP$RfReliableMacAck$receiveAckMessage(arg_0x7e652540, arg_0x7e6526f0, arg_0x7e6528a0)
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacSendP$1$AMPacket$source(arg_0x7eb42b90) RfPacketP$AMPacket$source(arg_0x7eb42b90)
#line 67
#define RfReliableMacSendP$1$AMPacket$destination(arg_0x7eb425b0) RfPacketP$AMPacket$destination(arg_0x7eb425b0)
# 158 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$ReceiveAck$receive(message_t *ack_msg, void *payload, uint8_t len)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending) 
    {
      rf_metadata_t *metadata = (rf_metadata_t *)/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg->metadata;
      rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$PacketEx$getPacketHeader(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg);

      rf_ack_t *ack_header = (rf_ack_t *)payload;






      if (
#line 169
      header->ack_req
       && header->dsn == __nesc_ntoh_uint8((unsigned char *)&ack_header->dsn)
       && /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMPacket$source(ack_msg) == /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMPacket$destination(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg)
       && /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMPacket$destination(ack_msg) == /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AMPacket$source(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg)) 

        {
          rf_metadata_t *ack_metadata = (rf_metadata_t *)ack_msg->metadata;


          __nesc_hton_int8((unsigned char *)&metadata->rssi, __nesc_ntoh_int8((unsigned char *)&ack_metadata->rssi));
          __nesc_hton_uint8((unsigned char *)&metadata->lqi, __nesc_ntoh_uint8((unsigned char *)&ack_metadata->lqi));
          __nesc_hton_int8((unsigned char *)&metadata->crc, __nesc_ntoh_int8((unsigned char *)&ack_metadata->crc));
          __nesc_hton_int8((unsigned char *)&metadata->ack, TRUE);


          memcpy((void *)& metadata->ack_msg, (void *)ack_header, sizeof  metadata->ack_msg);


          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$RfReliableMacAck$receiveAckMessage(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg, ack_msg, ack_header);


          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDone(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg, 0);
        }
    }

  return ack_msg;
}

# 7 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
#define RfReliableMacSendP$0$RfReliableMacAck$receiveAckMessage(arg_0x7e652540,arg_0x7e6526f0,arg_0x7e6528a0) RfReliableMacAckP$RfReliableMacAck$receiveAckMessage(arg_0x7e652540, arg_0x7e6526f0, arg_0x7e6528a0)
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacSendP$0$AMPacket$source(arg_0x7eb42b90) RfPacketP$AMPacket$source(arg_0x7eb42b90)
#line 67
#define RfReliableMacSendP$0$AMPacket$destination(arg_0x7eb425b0) RfPacketP$AMPacket$destination(arg_0x7eb425b0)
# 158 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static inline  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$ReceiveAck$receive(message_t *ack_msg, void *payload, uint8_t len)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending) 
    {
      rf_metadata_t *metadata = (rf_metadata_t *)/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg->metadata;
      rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$PacketEx$getPacketHeader(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg);

      rf_ack_t *ack_header = (rf_ack_t *)payload;






      if (
#line 169
      header->ack_req
       && header->dsn == __nesc_ntoh_uint8((unsigned char *)&ack_header->dsn)
       && /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMPacket$source(ack_msg) == /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMPacket$destination(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg)
       && /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMPacket$destination(ack_msg) == /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AMPacket$source(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg)) 

        {
          rf_metadata_t *ack_metadata = (rf_metadata_t *)ack_msg->metadata;


          __nesc_hton_int8((unsigned char *)&metadata->rssi, __nesc_ntoh_int8((unsigned char *)&ack_metadata->rssi));
          __nesc_hton_uint8((unsigned char *)&metadata->lqi, __nesc_ntoh_uint8((unsigned char *)&ack_metadata->lqi));
          __nesc_hton_int8((unsigned char *)&metadata->crc, __nesc_ntoh_int8((unsigned char *)&ack_metadata->crc));
          __nesc_hton_int8((unsigned char *)&metadata->ack, TRUE);


          memcpy((void *)& metadata->ack_msg, (void *)ack_header, sizeof  metadata->ack_msg);


          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$RfReliableMacAck$receiveAckMessage(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg, ack_msg, ack_header);


          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDone(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg, 0);
        }
    }

  return ack_msg;
}

# 51 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static inline   message_t *RfActiveMessageP$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
{
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *RfActiveMessageP$Receive$receive(uint8_t arg_0x7e3983f8, message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e3983f8) {
#line 67
    case 123:
#line 67
      result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$SubReceive$receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
#line 67
      break;
#line 67
    case 124:
#line 67
      result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$ReceiveAck$receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
#line 67
      break;
#line 67
    case 240U:
#line 67
      result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$SubReceive$receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
#line 67
      break;
#line 67
    case 241:
#line 67
      result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$ReceiveAck$receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
#line 67
      break;
#line 67
    default:
#line 67
      result = RfActiveMessageP$Receive$default$receive(arg_0x7e3983f8, arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 69 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  bool RfPacketP$AMPacket$isForMe(message_t *amsg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->dest) == RfPacketP$AMPacket$address()
   || __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->dest) == 0xFFFF;
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfActiveMessageP$AMPacket$isForMe(arg_0x7eb35370) RfPacketP$AMPacket$isForMe(arg_0x7eb35370)
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfActiveMessageP$Packet$getPayload(arg_0x7eb23358,arg_0x7eb23500) RfPacketP$Packet$getPayload(arg_0x7eb23358, arg_0x7eb23500)
# 76 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  am_id_t RfPacketP$AMPacket$type(message_t *amsg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)amsg->header)->type);
}

# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfActiveMessageP$AMPacket$type(arg_0x7eb35aa0) RfPacketP$AMPacket$type(arg_0x7eb35aa0)
# 150 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static inline  uint8_t RfPacketP$PacketEx$packetHeaderSize(void)
{
  return sizeof(rf_header_t ) - 1 + sizeof(uint16_t );
}






static inline  bool RfPacketP$PacketEx$isValidPacket(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length) >= RfPacketP$PacketEx$packetHeaderSize();
}

# 8 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfActiveMessageP$PacketEx$isValidPacket(arg_0x7e6b45f8) RfPacketP$PacketEx$isValidPacket(arg_0x7e6b45f8)
# 20 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static inline  void RfActiveMessageP$CoreReceive$receive(message_t *msg)
{
  if (RfActiveMessageP$PacketEx$isValidPacket(msg)) 
    {
      uint8_t type = RfActiveMessageP$AMPacket$type(msg);
      uint8_t len;
      void *payload = RfActiveMessageP$Packet$getPayload(msg, &len);

#line 27
      if (RfActiveMessageP$AMPacket$isForMe(msg)) 
        {
          RfActiveMessageP$Receive$receive(type, msg, payload, len);
        }
      else 
        {
          RfActiveMessageP$Snoop$receive(type, msg, payload, len);
        }
    }
}

# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreReceive.nc"
#define RfMacBaseReceiveP$CoreReceive$receive(arg_0x7e393030) RfActiveMessageP$CoreReceive$receive(arg_0x7e393030)
# 12 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseReceiveP.nc"
static inline  void RfMacBaseReceiveP$RfHardwareRx$rxPacket(uint8_t *buf, uint8_t len)
{
  unsigned char *__nesc_temp48;
#line 14
  message_t *msg = (message_t *)buf;


  uint8_t frame_type = (__nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)msg->header)->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7;

  if (frame_type == IEEE154_TYPE_ACK) 
    {
    }
  else {
#line 22
    if (frame_type == IEEE154_TYPE_DATA) 
      {


        rf_metadata_t *metadata = (rf_metadata_t *)msg->metadata;

#line 27
        __nesc_hton_int8((unsigned char *)&metadata->crc, buf[len - 1] >> 7);
        __nesc_hton_int8((unsigned char *)&metadata->rssi, buf[len - 2]);
        __nesc_hton_uint8((unsigned char *)&metadata->lqi, __nesc_ntoh_int8((unsigned char *)&metadata->rssi) + 0x7F);


        (__nesc_temp48 = (unsigned char *)&((rf_header_t *)msg->header)->length, __nesc_hton_leuint8(__nesc_temp48, __nesc_ntoh_leuint8(__nesc_temp48) - 0));
#line 50
        RfMacBaseReceiveP$CoreReceive$receive(msg);
      }
    }
}

# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareRx.nc"
#define RfHardwareRxP$0$RfHardwareRx$rxPacket(arg_0x7e5337e8,arg_0x7e533970) RfMacBaseReceiveP$RfHardwareRx$rxPacket(arg_0x7e5337e8, arg_0x7e533970)
# 78 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static inline void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$receiveNextPacket(void)
{
  if (!/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$readRfBuf(/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf, 1)) {
#line 80
    return;
    }
#line 81
  if (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf[0] > 0x7f) 
    {


      {
#line 85
        do {
#line 85
            RFST = 0xED;
#line 85
            RFST = 0xED;
          }
        while (
#line 85
        85 == -1);
#line 85
        do {
#line 85
            S1CON = 0x00;
#line 85
            RFIRQF0 = ~(1 << 2);
          }
        while (
#line 85
        85 == -1);
      }
#line 85
      ;
      {
#line 86
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head = /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail = 0;
      }
#line 86
      ;
    }
  /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf[0] &= 0x7f;


  if (!/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$readRfBuf(&/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf[1], /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf[0])) {
#line 91
    return;
    }

  if (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf[/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf[0]] & 0x80) 
    {
#line 131
      /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$RfHardwareRx$rxPacket(/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf, /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$m_frame_buf[0] + 1);
    }
  else 
    {

      {
#line 136
        do {
#line 136
            RFST = 0xED;
#line 136
            RFST = 0xED;
          }
        while (
#line 136
        136 == -1);
#line 136
        do {
#line 136
            S1CON = 0x00;
#line 136
            RFIRQF0 = ~(1 << 2);
          }
        while (
#line 136
        136 == -1);
      }
#line 136
      ;
      {
#line 137
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head = /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail = 0;
      }
#line 137
      ;
    }
}

static inline  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$TopTaskHandler$handler(void)
{
  /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$receiveNextPacket();

  if (!(/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head == /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail)) 
    {
      {
#line 147
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 147
          {
#line 147
            TopTaskMgrP__m_task_flag[3] = TRUE;
          }
#line 148
          __nesc_atomic_end(__nesc_atomic); }
      }
#line 147
      ;
    }
}

# 57 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
static inline   void TopTaskMgrP$TopTaskHandler$default$handler(uint8_t n)
{
}

# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
inline static  void TopTaskMgrP$TopTaskHandler$handler(uint8_t arg_0x7ebb1360){
#line 4
  switch (arg_0x7ebb1360) {
#line 4
    case 0:
#line 4
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$TopTaskHandler$handler();
#line 4
      break;
#line 4
    case 1:
#line 4
      /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$RxTaskHandler$handler();
#line 4
      break;
#line 4
    case 2:
#line 4
      /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$TxTaskHandler$handler();
#line 4
      break;
#line 4
    case 3:
#line 4
      /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$TopTaskHandler$handler();
#line 4
      break;
#line 4
    default:
#line 4
      TopTaskMgrP$TopTaskHandler$default$handler(arg_0x7ebb1360);
#line 4
      break;
#line 4
    }
#line 4
}
#line 4
# 40 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
static inline  void TopTaskMgrP$TopTaskMgr$runTasks(void)
{
  uint8_t i;

  for (i = 0; i < TopTaskMgrP$TOP_TASK_COUNT; ++i) 
    {
      if (TopTaskMgrP$m_task_flag[i] != FALSE) 
        {
          EA = 0;
          TopTaskMgrP$m_task_flag[i] = FALSE;
          EA = 1;

          TopTaskMgrP$TopTaskHandler$handler(i);
        }
    }
}

# 5 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgr.nc"
#define SchedulerBasicP$TopTaskMgr$runTasks(void) TopTaskMgrP$TopTaskMgr$runTasks()
# 181 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static inline  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$AtosScheduler$periodScheduler(void)
{
  if (((uint8_t_xdata *)0)[0x619B] > 0x80) 
    {
      {
#line 185
        do {
#line 185
            RFST = 0xED;
#line 185
            RFST = 0xED;
          }
        while (
#line 185
        185 == -1);
#line 185
        do {
#line 185
            S1CON = 0x00;
#line 185
            RFIRQF0 = ~(1 << 2);
          }
        while (
#line 185
        185 == -1);
      }
#line 185
      ;
    }
}

# 9 "/opt/tinyos-2.x/tos/interfaces/AtosScheduler.nc"
#define SchedulerBasicP$AtosScheduler$periodScheduler(void) RfHardwareRxP$0$AtosScheduler$periodScheduler()
# 71 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void)
{
#line 91
  if (SchedulerBasicP$m_head == SchedulerBasicP$m_tail) 
    {
      return SchedulerBasicP$NO_TASK;
    }
  else 
    {
      uint8_t id = SchedulerBasicP$m_next[SchedulerBasicP$m_head];

      SchedulerBasicP$m_next[SchedulerBasicP$m_head] = SchedulerBasicP$NO_TASK;

      SchedulerBasicP$m_head = (SchedulerBasicP$m_head + 1) % SchedulerBasicP$NUM_TASKS;
      return id % SchedulerBasicP$NUM_TASKS;
    }
}

#line 215
static inline  void SchedulerBasicP$Scheduler$taskLoop(void)
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          nextTask = SchedulerBasicP$popTask();
        }
#line 224
        __nesc_atomic_end(__nesc_atomic); }

      current_task_id = nextTask;


      SchedulerBasicP$AtosScheduler$periodScheduler();

      while (SchedulerBasicP$TopTaskMgr$hasTasks()) 
        {
          SchedulerBasicP$TopTaskMgr$runTasks();
        }

      if (nextTask != SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$TaskBasic$runTask(nextTask);
        }
      else 
        {
          if (!SchedulerBasicP$TopTaskMgr$hasTasks()) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
    }
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
#define RealMainP$Scheduler$taskLoop(void) SchedulerBasicP$Scheduler$taskLoop()
# 8 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacPacketP$SubPacketEx$isValidPacket(arg_0x7e6b45f8) RfPacketP$PacketEx$isValidPacket(arg_0x7e6b45f8)
# 46 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static inline  uint8_t RfReliableMacPacketP$PacketEx$packetHeaderSize(void)
{
  return sizeof(rf_rmac_header_t );
}

# 11 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static inline uint8_t RfReliableMacAckP$fillAckMessageDefault(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack)
{
  memset(ack, 0, sizeof(rf_ack_t ));


  __nesc_hton_uint8((unsigned char *)&ack->dsn, receive_dsn);

  return sizeof(rf_ack_t );
}

#line 37
static inline   uint8_t RfReliableMacAckP$RfReliableMacAckEvent$default$fillAckMessage(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack)
{
  return sizeof(rf_ack_t );
}

# 4 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckEvent.nc"
#define RfReliableMacAckP$RfReliableMacAckEvent$fillAckMessage(arg_0x7e3eab10,arg_0x7e3eaca0,arg_0x7e3eae50,arg_0x7e3e7030) RfReliableMacAckP$RfReliableMacAckEvent$default$fillAckMessage(arg_0x7e3eab10, arg_0x7e3eaca0, arg_0x7e3eae50, arg_0x7e3e7030)
# 14 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
static inline int /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$indexOfAddress(uint16_t addr)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t i;

#line 19
    for (i = 0; i < 100; ++i) 
      {
        if (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_address[i] == addr) 
          {
            {
              int __nesc_temp = 
#line 23
              i;

#line 23
              return __nesc_temp;
            }
          }
      }
    {
      int __nesc_temp = 
#line 27
      -1;

#line 27
      return __nesc_temp;
    }
  }
}

#line 31
static inline int /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$findNextAddress(void)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t i;

#line 36
    for (i = 0; i < 100; ++i) 
      {
        if (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_address[i] == 0) 
          {
            {
              int __nesc_temp = 
#line 40
              i;

#line 40
              return __nesc_temp;
            }
          }
      }
    i = /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_index;
    /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_index = (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_index + 1) % 100;

    {
      int __nesc_temp = 
#line 47
      i;

#line 47
      return __nesc_temp;
    }
  }
}

# 176 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static inline   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptRFErr$fired(void)
{
  {
#line 178
    do {
#line 178
        RFST = 0xED;
#line 178
        RFST = 0xED;
      }
    while (
#line 178
    178 == -1);
#line 178
    do {
#line 178
        S1CON = 0x00;
#line 178
        RFIRQF0 = ~(1 << 2);
      }
    while (
#line 178
    178 == -1);
  }
#line 178
  ;
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
#define RfInterruptsP$InterruptRFErr$fired(void) RfHardwareRxP$0$InterruptRFErr$fired()
# 80 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static inline  void RfInterruptsP$INT_RFERR$fired(void)
{


  if ((RFERRF & (1 << 2)) & ((uint8_t_xdata *)0)[0x61A5]) 
    {
      RFERRF &= ~(1 << 2);
      RfInterruptsP$InterruptRFErr$fired();
    }
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_RFERR$fired(void) RfInterruptsP$INT_RFERR$fired()
# 153 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static inline   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$InterruptFIFOP$fired(void)
{


  while (((uint8_t_xdata *)0)[0x619B] > 0) 
    {
      if (((uint8_t_xdata *)0)[0x619B] > 0x80) 
        {
          {
#line 161
            do {
#line 161
                RFST = 0xED;
#line 161
                RFST = 0xED;
              }
            while (
#line 161
            161 == -1);
#line 161
            do {
#line 161
                S1CON = 0x00;
#line 161
                RFIRQF0 = ~(1 << 2);
              }
            while (
#line 161
            161 == -1);
          }
#line 161
          ;
        }

      if (((/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail + 1) & ((1 << 8) - 1)) == (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head & ((1 << 8) - 1))) 
        {
        }


      {
#line 169
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_data[/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail & ((1 << 8) - 1)] = RFD;
#line 169
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail = (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail + 1) & ((1 << 8) - 1);
      }
#line 169
      ;
    }


  {
#line 173
    TopTaskMgrP__m_task_flag[3] = TRUE;
  }
#line 173
  ;
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
#define RfInterruptsP$InterruptFIFOP$fired(void) RfHardwareRxP$0$InterruptFIFOP$fired()
# 92 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static inline  void RfInterruptsP$INT_RF$fired(void)
{


  if ((RFIRQF1 & (1 << 3)) & ((uint8_t_xdata *)0)[0x61A4]) 
    {






      RFIRQF1 = ~(1 << 3);
    }
  else {
    if ((RFIRQF1 & (1 << 4)) & ((uint8_t_xdata *)0)[0x61A4]) 
      {

        RFIRQF1 = ~(1 << 4);
      }
    else {
      if ((RFIRQF1 & (1 << 0)) & ((uint8_t_xdata *)0)[0x61A4]) 
        {
          (
          (uint8_t_xdata *)0)[0x61A4] &= ~(1 << 0);
        }
      }
    }



  if ((RFIRQF0 & (1 << 2)) & ((uint8_t_xdata *)0)[0x61A3]) 
    {




      RfInterruptsP$InterruptFIFOP$fired();

      RFIRQF0 = ~(1 << 2);
    }



  S1CON = 0x00;
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_RF$fired(void) RfInterruptsP$INT_RF$fired()
# 536 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static inline    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$CaptureChannel2$default$captured(uint16_t time)
#line 536
{
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
#define HplCC2530Timer1P$0$CaptureChannel2$captured(arg_0x7e921bc8) HplCC2530Timer1P$0$CaptureChannel2$default$captured(arg_0x7e921bc8)
# 454 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static inline  void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$INT_TIM1$fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (((uint8_t_xdata *)0)[0x62A4] & (1 << CC2530_T1CCTLx_IM) && T1STAT & CC2530_T1_CH4IF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_CH4IF);
          T1CCTL1 &= ~(1 << CC2530_T1CCTLx_IM);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag |= 1 << 4;
          {
#line 465
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
#line 465
          ;
        }

      if (((uint8_t_xdata *)0)[0x62A3] & (1 << CC2530_T1CCTLx_IM) && T1STAT & CC2530_T1_CH3IF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_CH3IF);
          T1CCTL0 &= ~(1 << CC2530_T1CCTLx_IM);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag |= 1 << 3;
          {
#line 475
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
#line 475
          ;
        }

      if (T1CCTL2 & (1 << CC2530_T1CCTLx_IM) && T1STAT & CC2530_T1_CH2IF) 
        {
          uint16_t value;

          T1STAT &= ~(1 << CC2530_T1STAT_CH2IF);

          if (!(T1CCTL2 & (1 << CC2530_T1CCTLx_CPSEL))) 
            {
              value = T1CC2L;
              value += T1CC2H << 8;

              /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$CaptureChannel2$captured(value);
            }
          else 
            {
              T1CCTL2 &= ~(1 << CC2530_T1CCTLx_IM);


              /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag |= 1 << 2;
              {
#line 497
                TopTaskMgrP__m_task_flag[0] = TRUE;
              }
#line 497
              ;
            }
        }

      if (T1CCTL1 & (1 << CC2530_T1CCTLx_IM) && T1STAT & CC2530_T1_CH1IF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_CH1IF);
          T1CCTL1 &= ~(1 << CC2530_T1CCTLx_IM);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag |= 1 << 1;
          {
#line 508
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
#line 508
          ;
        }
      if (T1CCTL0 & (1 << CC2530_T1CCTLx_IM) && T1STAT & CC2530_T1_CH0IF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_CH0IF);
          T1CCTL0 &= ~(1 << CC2530_T1CCTLx_IM);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag |= 1 << 0;
          {
#line 517
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
#line 517
          ;
        }

      if (T1STAT & CC2530_T1_OVFIF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_OVFIF);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$m_alarm_flag |= 1 << 5;
          {
#line 526
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
#line 526
          ;
        }
    }
#line 528
    __nesc_atomic_end(__nesc_atomic); }
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_TIM1$fired(void) HplCC2530Timer1P$0$INT_TIM1$fired()
# 82 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static inline  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$INT_UART0_RX$fired(void)
{
  URX0IF = 0;

  {
#line 86
    /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_data[/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_tail & ((1 << 6) - 1)] = U0DBUF;
#line 86
    /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_tail = (/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$uartRxBuf_tail + 1) & ((1 << 6) - 1);
  }
#line 86
  ;
  {
#line 87
    TopTaskMgrP__m_task_flag[1] = TRUE;
  }
#line 87
  ;
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_UART0_RX$fired(void) HalCC2530Uart0IsrP$0$INT_UART0_RX$fired()
# 90 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static inline  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP$0$INT_UART0_TX$fired(void)
{
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_UART0_TX$fired(void) HalCC2530Uart0IsrP$0$INT_UART0_TX$fired()
# 101 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static inline   void PlatformInterruptC$INT_UART1_RX$default$fired(void)
{
  URX1IF = 0;
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_UART1_RX$fired(void) PlatformInterruptC$INT_UART1_RX$default$fired()
# 113 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static inline   void PlatformInterruptC$INT_UART1_TX$default$fired(void)
{
  UTX1IF = 0;
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_UART1_TX$fired(void) PlatformInterruptC$INT_UART1_TX$default$fired()
# 126 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static inline   void PlatformInterruptC$INT_ST$default$fired(void)
{
  STIF = 0;
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_ST$fired(void) PlatformInterruptC$INT_ST$default$fired()
# 146 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static inline   void PlatformInterruptC$INT_P0$default$fired(void)
{
  P0IFG = 0x00;
  P0IF = 0;
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_P0$fired(void) PlatformInterruptC$INT_P0$default$fired()
# 152 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static inline   void PlatformInterruptC$INT_P1$default$fired(void)
{
  P1IFG = 0x00;
  P1IF = 0;
}

# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC$INT_P1$fired(void) PlatformInterruptC$INT_P1$default$fired()
# 64 "/opt/atos/tos/chips/cc2530/mcs51/mcs51hardware.h"
static __inline void __nesc_disable_interrupt(void)
#line 64
{
#line 64
  EA = 0;
}

# 56 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void)
#line 56
{


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 66
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 11 "/opt/atos/tos/platforms/antc5/boot/PlatformP.nc"
static error_t PlatformP$clockSelect32k(uint8_t source)
{


  if (!(CLKCONSTA & 0x40)) {
    return FAIL;
    }
  if (source == 0) {
      CLKCONCMD &= ~0x80;
    }
  else {
#line 21
    if (source == 1) {
        CLKCONCMD |= 0x80;
      }
    }
#line 24
  do {
#line 24
      uint8_t ____clkcon;
#line 24
      uint8_t ____clkconsta;

#line 24
      ____clkcon = CLKCONCMD;
#line 24
      do {
#line 24
          ____clkconsta = CLKCONSTA;
        }
      while (
#line 24
      ____clkconsta != ____clkcon);
    }
  while (
#line 24
  24 == -1);

  return 0;
}

static void PlatformP$clockSetMainSrc(uint8_t source)
{
  register uint8_t osc32k_bm = CLKCONCMD & 0x80;





  SLEEPCMD &= ~0x04;
  while (!(SLEEPSTA & 0x20) || (SLEEPSTA & 0x04) != 0) ;



  if (source == 1) {
      CLKCONCMD = ((osc32k_bm | 0x40) | (0x01 << 3)) | 0x01;
    }
  else {
#line 45
    if (source == 0) {
        CLKCONCMD = osc32k_bm | (0x00 << 3);
      }
    }
#line 48
  do {
#line 48
      uint8_t ____clkcon;
#line 48
      uint8_t ____clkconsta;

#line 48
      ____clkcon = CLKCONCMD;
#line 48
      do {
#line 48
          ____clkconsta = CLKCONSTA;
        }
      while (
#line 48
      ____clkconsta != ____clkcon);
    }
  while (
#line 48
  48 == -1);
  SLEEPCMD |= 0x04;
}

# 8 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static void uart0SetBaud(uint32_t baud)
{
  U0GCR = baud == 1200 ? 5 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 2400 ? 6 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 4800 ? 7 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 9600 ? 8 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 14400 ? 8 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 19200 ? 9 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 28800 ? 9 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 38400 ? 10 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 57600 ? 10 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 76800 ? 11 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 115200 ? 11 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 153600 ? 12 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 230400 ? 12 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 307200 ? 13 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : 0;
  U0BAUD = baud == 1200 ? 59 : baud == 2400 ? 59 : baud == 4800 ? 59 : baud == 9600 ? 59 : baud == 14400 ? 216 : baud == 19200 ? 59 : baud == 28800 ? 216 : baud == 38400 ? 59 : baud == 57600 ? 216 : baud == 76800 ? 59 : baud == 115200 ? 216 : baud == 153600 ? 59 : baud == 230400 ? 216 : baud == 307200 ? 59 : 0;
}

# 108 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static void FlashIEEEP$readFromFlash(void)
{
  /* atomic removed: atomic calls only */
  {
    FlashIEEEP$HalFlash$read(FlashIEEEP$m_ieee_flash, 0x3FFE8, sizeof FlashIEEEP$m_ieee_flash);


    FlashIEEEP$ieeeProtect();


    FlashIEEEP$m_ieee[0] = FlashIEEEP$m_ieee_flash[7];
    FlashIEEEP$m_ieee[1] = FlashIEEEP$m_ieee_flash[6];
    FlashIEEEP$m_ieee[2] = FlashIEEEP$m_ieee_flash[5];
    FlashIEEEP$m_ieee[3] = FlashIEEEP$m_ieee_flash[4];
    FlashIEEEP$m_ieee[4] = FlashIEEEP$m_ieee_flash[3];
    FlashIEEEP$m_ieee[5] = FlashIEEEP$m_ieee_flash[2];
    FlashIEEEP$m_ieee[6] = FlashIEEEP$m_ieee_flash[1];
    FlashIEEEP$m_ieee[7] = FlashIEEEP$m_ieee_flash[0];
  }
}

# 58 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
static  error_t HalFlashP$HalFlash$erase(uint32_t address)
{
  uint8_t page;
  uint16_t old;
  uint8_t old_ea;

  /* atomic removed: atomic calls only */
  {
    page = address >> 11;



    while (((uint8_t_xdata *)0)[0x6270] & 0x80) ;
    ((uint8_t_xdata *)0)[0x6272] = page << 1;
    ((uint8_t_xdata *)0)[0x6270] |= 0x01;
    while (((uint8_t_xdata *)0)[0x6270] & 0x80) ;
  }

  return 0;
}

# 193 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static  void FlashIEEEP$FlashIEEE$WriteToRegister(void)
{
  uint16_t addr;
#line 195
  uint16_t pan;

  (
  (uint8_t_xdata *)0)[0x616A] = FlashIEEEP$m_ieee[0];
  ((uint8_t_xdata *)0)[0x616B] = FlashIEEEP$m_ieee[1];
  ((uint8_t_xdata *)0)[0x616C] = FlashIEEEP$m_ieee[2];
  ((uint8_t_xdata *)0)[0x616D] = FlashIEEEP$m_ieee[3];
  ((uint8_t_xdata *)0)[0x616E] = FlashIEEEP$m_ieee[4];
  ((uint8_t_xdata *)0)[0x616F] = FlashIEEEP$m_ieee[5];
  ((uint8_t_xdata *)0)[0x6170] = FlashIEEEP$m_ieee[6];
  ((uint8_t_xdata *)0)[0x6171] = FlashIEEEP$m_ieee[7];

  pan = FlashIEEEP$FlashIEEE$GetPANID();
  addr = FlashIEEEP$FlashIEEE$GetShortAddress();
  (
  (uint8_t_xdata *)0)[0x6172] = (uint16_t )pan & 0xFF;
  ((uint8_t_xdata *)0)[0x6173] = ((uint16_t )pan >> 8) & 0xFF;
  (
  (uint8_t_xdata *)0)[0x6174] = (uint16_t )addr & 0xFF;
  ((uint8_t_xdata *)0)[0x6175] = ((uint16_t )addr >> 8) & 0xFF;
}

#line 144
static  uint16_t FlashIEEEP$FlashIEEE$GetPANID(void)
{
  return (FlashIEEEP$m_ieee[4] << 8) | FlashIEEEP$m_ieee[5];
}


static  uint16_t FlashIEEEP$FlashIEEE$GetShortAddress(void)
{
  return (FlashIEEEP$m_ieee[6] << 8) | FlashIEEEP$m_ieee[7];
}

#line 217
static  void FlashIEEEP$FlashIEEE$WriteToAM(void)
{
  FlashIEEEP$ActiveMessageAddress$setAddress((uint8_t )(FlashIEEEP$FlashIEEE$GetPANID() & 0xFF), 
  FlashIEEEP$FlashIEEE$GetShortAddress());

  TOS_NODE_ID = FlashIEEEP$FlashIEEE$GetShortAddress();

  TOS_IEEE_SADDR = FlashIEEEP$FlashIEEE$GetShortAddress();
  TOS_IEEE_PANID = FlashIEEEP$FlashIEEE$GetPANID();
}

# 198 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static  bool SchedulerBasicP$Scheduler$runNextTask(void)
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 202
  {
    nextTask = SchedulerBasicP$popTask();

    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 207
          FALSE;

#line 207
          return __nesc_temp;
        }
      }
  }
#line 210
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 269
static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x7ec64200){
#line 64
  switch (arg_0x7ec64200) {
#line 64
    case DigBaseP$showMenu:
#line 64
      DigBaseP$showMenu$runTask();
#line 64
      break;
#line 64
    case DigBaseP$sendData:
#line 64
      DigBaseP$sendData$runTask();
#line 64
      break;
#line 64
    case RealMainP$fakeTask:
#line 64
      RealMainP$fakeTask$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$firedTask:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$firedTask$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$resendTask:
#line 64
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$resendTask$runTask();
#line 64
      break;
#line 64
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDoneTask:
#line 64
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDoneTask$runTask();
#line 64
      break;
#line 64
    case /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext:
#line 64
      /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP$0$sendNext$runTask();
#line 64
      break;
#line 64
    case RfMacBaseCsmaP$signalDoneTask:
#line 64
      RfMacBaseCsmaP$signalDoneTask$runTask();
#line 64
      break;
#line 64
    case RfMacBaseCsmaP$doGo:
#line 64
      RfMacBaseCsmaP$doGo$runTask();
#line 64
      break;
#line 64
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAckTask:
#line 64
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$0$sendAckTask$runTask();
#line 64
      break;
#line 64
    case AtosNetStdP$rebootTask:
#line 64
      AtosNetStdP$rebootTask$runTask();
#line 64
      break;
#line 64
    case AtosNetStdP$nodeStatusUpTask:
#line 64
      AtosNetStdP$nodeStatusUpTask$runTask();
#line 64
      break;
#line 64
    case AtosNetStdP$sendDoneCheck:
#line 64
      AtosNetStdP$sendDoneCheck$runTask();
#line 64
      break;
#line 64
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$resendTask:
#line 64
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$resendTask$runTask();
#line 64
      break;
#line 64
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDoneTask:
#line 64
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDoneTask$runTask();
#line 64
      break;
#line 64
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAckTask:
#line 64
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP$1$sendAckTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x7ec64200);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 17 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static  error_t AMResourceCenterP$AMResource$send(uint8_t resource_id, am_addr_t addr, message_t *msg, uint8_t len)
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;

#line 19
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      rf_header_t *header = (rf_header_t *)msg->header;
      rf_metadata_t *metadata = (rf_metadata_t *)msg->metadata;



      AMResourceCenterP$Packet$setPayloadLength(msg, len);


      __nesc_hton_leuint16((unsigned char *)&header->fcf, 0);
      if (addr != 0xFFFF) 
        {
          (__nesc_temp42 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) | (1 << IEEE154_FCF_ACK_REQ)));
        }
      (__nesc_temp43 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
      1 << IEEE154_FCF_INTRAPAN)) | (
      IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
      IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));









      AMResourceCenterP$AMPacket$setGroup(msg, AMResourceCenterP$AMPacket$localGroup());



      AMResourceCenterP$AMPacket$setDestination(msg, addr);


      AMResourceCenterP$AMPacket$setSource(msg, AMResourceCenterP$AMPacket$address());


      __nesc_hton_int8((unsigned char *)&metadata->rssi, 0);
      __nesc_hton_uint8((unsigned char *)&metadata->lqi, 0);





      {
        unsigned char __nesc_temp = 
#line 64
        AMResourceCenterP$CoreSend$send(msg, __nesc_ntoh_leuint8((unsigned char *)&header->length));

        {
#line 64
          __nesc_atomic_end(__nesc_atomic); 
#line 64
          return __nesc_temp;
        }
      }
    }
#line 67
    __nesc_atomic_end(__nesc_atomic); }
}

# 8 "/opt/atos/tos/chips/cc2530/watchdog/WatchDogP.nc"
static  void WatchDogP$WatchDog$resetCpu(void)
{
  /* atomic removed: atomic calls only */
  {
    uint32_t i = 0;

    WDCTL = 0x00;
    WDCTL = 0x0B;


    while (i++ < 0xFFFFFF) ;
  }
}

# 26 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  am_addr_t RfPacketP$AMPacket$address(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!RfPacketP$m_address_saved) 
        {
          RfPacketP$m_addr = RfPacketP$ActiveMessageAddress$amAddress();
          RfPacketP$m_address_saved = TRUE;
        }


      if (RfPacketP$m_addr != RfPacketP$ActiveMessageAddress$amAddress()) 
        {


          RfPacketP$WatchDog$resetCpu();
        }
    }
#line 43
    __nesc_atomic_end(__nesc_atomic); }


  return RfPacketP$ActiveMessageAddress$amAddress();
}

# 95 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void)
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC$addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 82 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$QueueEx$element(uint8_t idx)
{
  /* atomic removed: atomic calls only */
  {
    idx += /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$head;
    idx %= 4;
    {
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue_t __nesc_temp = 
#line 88
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC$0$queue[idx];

#line 88
      return __nesc_temp;
    }
  }
}

# 264 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 266
    {
#line 266
      {
        unsigned char __nesc_temp = 
#line 266
        SchedulerBasicP$pushTask(id) ? 0 : EBUSY;

        {
#line 266
          __nesc_atomic_end(__nesc_atomic); 
#line 266
          return __nesc_temp;
        }
      }
    }
#line 269
    __nesc_atomic_end(__nesc_atomic); }
}

# 24 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$signalDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_sending) 
        {
          {
#line 30
            __nesc_atomic_end(__nesc_atomic); 
#line 30
            return;
          }
        }
    }
#line 33
    __nesc_atomic_end(__nesc_atomic); }



  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AMSend$sendDone(msg, result);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 38
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_sending = FALSE;
#line 38
    __nesc_atomic_end(__nesc_atomic); }
}



static error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$doSend(message_t *msg)
{
  return /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$SubAMSend$send(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AMPacket$destination(msg), msg, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$Packet$payloadLength(msg));
}

# 139 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  void *RfPacketP$Packet$getPayload(message_t *msg, uint8_t *len)
{
  if (len != (void *)0) 
    {
      *len = RfPacketP$Packet$payloadLength(msg);
    }

  return (uint8_t *)msg->data;
}

# 183 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      {
#line 187
        {
#line 187
          if (1 >= uart_debug_level) {
#line 187
              {
#line 187
                sprintf(uart_debug_buf, "VirtualizeTimerC.Timer.startOneShot dt=%ld\n", dt);
              }
#line 187
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
#line 187
      ;
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
    }
#line 189
    __nesc_atomic_end(__nesc_atomic); }
}

# 55 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
static void ATOS_DEBUG_UART_PRINT(void)
{
  int i = 0;

#line 58
  while (i < 256 && uart_debug_buf[i] != '\0') 
    {
      ATOS_DEBUG_UART_PUTC(uart_debug_buf[i++]);
    }
}

# 57 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static void uart0PutChar(char c)
{
  uint16_t i;

  for (i = 0; i < 10000; i++) 
    {
      if (!(U0CSR & 0x01)) {
        break;
        }
    }
#line 66
  U0DBUF = c;

  for (i = 0; i < 10000; i++) 
    {
      if (!(U0CSR & 0x01)) {
        break;
        }
    }
}

# 161 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 166
    timer->t0 = t0;
    timer->dt = dt;
    timer->isoneshot = isoneshot;
    timer->isrunning = TRUE;
    /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
  }
}

# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get(void)
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type rv = 0;
    /*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC$0$m_upper;
    /*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get();

    if (/*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending()) 
      {






        high++;
        low = /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get();
      }

    {
      /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type high_to = high;
      /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC$0$LOW_SHIFT_RIGHT;

#line 92
      rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC$0$HIGH_SHIFT_LEFT) | low_to;
    }

    {
      /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type __nesc_temp = 
#line 95
      rv;

#line 95
      return __nesc_temp;
    }
  }
}

# 316 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static   uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Counter$get(void)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t r;

    {
#line 322
      r = T1CNTL;
#line 322
      r += T1CNTH << 8;
    }
#line 322
    ;

    {
      unsigned short __nesc_temp = 
#line 324
      r;

#line 324
      return __nesc_temp;
    }
  }
}

# 35 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  void *RfReliableMacPacketP$Packet$getPayload(message_t *msg, uint8_t *len)
{
  if (len != (void *)0) 
    {
      *len = RfReliableMacPacketP$Packet$payloadLength(msg);
    }

  return RfReliableMacPacketP$SubPacket$getPayload(msg, (void *)0) + sizeof(rf_rmac_header_t );
}

# 102 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static int AtosNetStdP$indexOfTraceItem(anstd_trace_t *trace, uint16_t node_id)
{
  uint8_t i;

#line 105
  for (i = 0; i < trace->total_count; ++i) 
    {
      if (trace->items[i].node_id == node_id) 
        {
          return i;
        }
    }

  return -1;
}

static void AtosNetStdP$traceBackward(message_t *msg, anstd_trace_ack_t *trace_ack, int index)
{
  uint16_t node_id = 0xFFFF;

#line 119
  memcpy(&AtosNetStdP$m_send_msg, msg, sizeof AtosNetStdP$m_send_msg);

  if (index > 0) 
    {
      node_id = trace_ack->items[index - 1].node_id;
      AtosNetStdP$AMSend$send(node_id, &AtosNetStdP$m_send_msg, AtosNetStdP$Packet$payloadLength(&AtosNetStdP$m_send_msg));
    }
}

# 74 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AMSend$send(am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t result;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$PacketEx$getPacketHeader(msg);
      rf_metadata_t *metadata = (rf_metadata_t *)msg->metadata;

      if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_sending) 
        {
          {
            unsigned char __nesc_temp = 
#line 85
            FAIL;

            {
#line 85
              __nesc_atomic_end(__nesc_atomic); 
#line 85
              return __nesc_temp;
            }
          }
        }
      header->ack_req = addr != 0xFFFF;

      __nesc_hton_int8((unsigned char *)&metadata->ack, FALSE);

      header->dsn = rf_rmac_dsn;

      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$AMPacket$setDestination(msg, addr);
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$Packet$setPayloadLength(msg, len);


      result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$doSend(msg);

      if (result == 0) 
        {
          rf_rmac_dsn++;
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_sending = TRUE;
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_msg = msg;
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$1$m_retry_times = 0;
        }

      {
        unsigned char __nesc_temp = 
#line 109
        result;

        {
#line 109
          __nesc_atomic_end(__nesc_atomic); 
#line 109
          return __nesc_temp;
        }
      }
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t AtosNetStdP$Packet$payloadLength(message_t *arg_0x7eb25e90){
#line 67
  unsigned char result;
#line 67

#line 67
  result = RfReliableMacPacketP$Packet$payloadLength(arg_0x7eb25e90);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 64 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static void RfMacBaseCsmaP$signalDone(error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RfMacBaseCsmaP$m_result = result;
    }
#line 69
    __nesc_atomic_end(__nesc_atomic); }

  RfMacBaseCsmaP$signalDoneTask$postTask();
}

# 76 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static   void AMResourceCenterP$AMResource$default$sendDone(uint8_t resource_id, message_t *msg, error_t error)
{
}

# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void AMResourceCenterP$AMResource$sendDone(uint8_t arg_0x7e5f3dd8, message_t *arg_0x7e6080a8, error_t arg_0x7e608230){
#line 7
  switch (arg_0x7e5f3dd8) {
#line 7
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC*/AMResourceC$0$AM_RESOURCE_ID:
#line 7
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$0$AMResource$sendDone(arg_0x7e6080a8, arg_0x7e608230);
#line 7
      break;
#line 7
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC*/AMResourceC$2$AM_RESOURCE_ID:
#line 7
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP$1$AMResource$sendDone(arg_0x7e6080a8, arg_0x7e608230);
#line 7
      break;
#line 7
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC*/AMResourceC$3$AM_RESOURCE_ID:
#line 7
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$2$AMResource$sendDone(arg_0x7e6080a8, arg_0x7e608230);
#line 7
      break;
#line 7
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC*/AMResourceC$1$AM_RESOURCE_ID:
#line 7
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP$3$AMResource$sendDone(arg_0x7e6080a8, arg_0x7e608230);
#line 7
      break;
#line 7
    default:
#line 7
      AMResourceCenterP$AMResource$default$sendDone(arg_0x7e5f3dd8, arg_0x7e6080a8, arg_0x7e608230);
#line 7
      break;
#line 7
    }
#line 7
}
#line 7
# 51 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_sending) 
        {
          {
#line 57
            __nesc_atomic_end(__nesc_atomic); 
#line 57
            return;
          }
        }
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$TimeoutTimer$stop();
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$AckTimer$stop();


      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_msg = msg;
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$m_result = result;
    }
#line 66
    __nesc_atomic_end(__nesc_atomic); }

  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$1$signalDoneTask$postTask();
}

#line 51
static void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_sending) 
        {
          {
#line 57
            __nesc_atomic_end(__nesc_atomic); 
#line 57
            return;
          }
        }
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$TimeoutTimer$stop();
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$AckTimer$stop();


      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_msg = msg;
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$m_result = result;
    }
#line 66
    __nesc_atomic_end(__nesc_atomic); }

  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP$0$signalDoneTask$postTask();
}

# 96 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$set_alarm(void)
{
  /* atomic removed: atomic calls only */
  {
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type now = /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$Counter$get();
#line 100
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type expires;
#line 100
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type remaining;



    expires = /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_t0 + /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_dt;


    remaining = (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$to_size_type )(expires - now);


    if (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_t0 <= now) 
      {
        if (expires >= /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_t0 && 
        expires <= now) {
          remaining = 0;
          }
      }
    else {
        if (expires >= /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_t0 || 
        expires <= now) {
          remaining = 0;
          }
      }
    if (remaining > /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$MAX_DELAY) 
      {
        /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_t0 = now + /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$MAX_DELAY;
        /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_dt = remaining - /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$MAX_DELAY;
        remaining = /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$MAX_DELAY;
      }
    else 
      {
        /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_t0 += /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_dt;
        /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$m_dt = 0;
      }

    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$AlarmFrom$startAt((/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$from_size_type )now << 0, 
    (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC$1$from_size_type )remaining << 0);
  }
}

# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$Counter$get(void)
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_size_type rv = 0;
    /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$upper_count_type high = /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$m_upper;
    /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$from_size_type low = /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$get();

    if (/*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$isOverflowPending()) 
      {






        high++;
        low = /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$CounterFrom$get();
      }

    {
      /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_size_type high_to = high;
      /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_size_type low_to = low >> /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$LOW_SHIFT_RIGHT;

#line 92
      rv = (high_to << /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$HIGH_SHIFT_LEFT) | low_to;
    }

    {
      /*Counter32khz32C.TransformCounterC*/TransformCounterC$1$to_size_type __nesc_temp = 
#line 95
      rv;

#line 95
      return __nesc_temp;
    }
  }
}

# 69 "/opt/atos/tos/chips/cc2530/random/CC2530RandomLfsrP.nc"
static   uint16_t CC2530RandomLfsrP$Random$rand16(void)
#line 69
{
  uint16_t result;

  /* atomic removed: atomic calls only */
  ADCCON1 = (ADCCON1 & ~((1 << 3) | (1 << 2))) | (1 << 2);

  result = RNDH << 8;
  result += RNDL;
  return result;
}

# 24 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$signalDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_sending) 
        {
          {
#line 30
            __nesc_atomic_end(__nesc_atomic); 
#line 30
            return;
          }
        }
    }
#line 33
    __nesc_atomic_end(__nesc_atomic); }



  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AMSend$sendDone(msg, result);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 38
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$m_sending = FALSE;
#line 38
    __nesc_atomic_end(__nesc_atomic); }
}



static error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$doSend(message_t *msg)
{
  return /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$SubAMSend$send(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$AMPacket$destination(msg), msg, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP$0$Packet$payloadLength(msg));
}

# 61 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t num;

    for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
      {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

        if (timer->isrunning) 
          {
            uint32_t elapsed = now - timer->t0;

            if (elapsed >= timer->dt) 
              {
                if (timer->isoneshot) 
                  {
                    timer->isrunning = FALSE;
                  }
                else 
                  {

                    timer->t0 = now - elapsed % timer->dt;
                  }

                {
#line 87
                  {
#line 87
                    if (1 >= uart_debug_level) {
#line 87
                        {
#line 87
                          sprintf(uart_debug_buf, "fireTimers %d, now=0x%lx,elapsed=0x%lx, dt=0x%lx,t0=0x%lx\n", (int )num, elapsed, now, timer->dt, timer->t0);
                        }
#line 87
                        ATOS_DEBUG_UART_PRINT();
                      }
                  }
                }
#line 87
                ;

                /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              }
          }
      }

    /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
  }
}

# 96 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm(void)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get();
#line 100
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type expires;
#line 100
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type remaining;



    expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;


    remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type )(expires - now);


    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 <= now) 
      {
        if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 && 
        expires <= now) {
          remaining = 0;
          }
      }
    else {
        if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 || 
        expires <= now) {
          remaining = 0;
          }
      }
    if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY;
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY;
        remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY;
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt = 0;
      }

    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type )now << 5, 
    (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type )remaining << 5);
  }
}

# 38 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  error_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P$0$Init$init(void)
{
  /* atomic removed: atomic calls only */
  {
    T1CCTL0 = 0;
    T1CCTL1 = 0;
    T1CCTL2 = 0;
    ((uint8_t_xdata *)0)[0x62A3] = 0;
    ((uint8_t_xdata *)0)[0x62A4] = 0;

    T1CNTL = 0;


    CLKCON = (CLKCON & ~CC2530_CLKCON_TICKSPD_MASK) | CC2530_TICKF_DIV_8;



    T1CTL = (T1CTL & ~CC2530_T1CTL_DIV_MASK) | CC2530_TIMER1_DIV_128;



    T1CTL = (T1CTL & ~CC2530_T1CTL_MODE_MASK) | CC2530_TIMER1_MODE_FREE;


    T1STAT = 0;


    TIMIF |= 1 << CC2530_TIMIF_OVFIM;
    T1IE = 1;
  }

  return 0;
}

# 22 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
static  bool TopTaskMgrP$TopTaskMgr$hasTasks(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      uint8_t i;

      for (i = 0; i < TopTaskMgrP$TOP_TASK_COUNT; ++i) 
        {
          if (TopTaskMgrP$m_task_flag[i]) 
            {
              {
                unsigned char __nesc_temp = 
#line 32
                TRUE;

                {
#line 32
                  __nesc_atomic_end(__nesc_atomic); 
#line 32
                  return __nesc_temp;
                }
              }
            }
        }
#line 36
      {
        unsigned char __nesc_temp = 
#line 36
        FALSE;

        {
#line 36
          __nesc_atomic_end(__nesc_atomic); 
#line 36
          return __nesc_temp;
        }
      }
    }
#line 39
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static bool /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$readRfBuf(uint8_t *data, uint8_t length)
{
  while (length > 0) 
    {
      if (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head == /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_tail) 
        {
          return FALSE;
        }

      {
#line 70
        *data = /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_data[/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head & ((1 << 8) - 1)];
#line 70
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head = (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP$0$rxbuf_head + 1) & ((1 << 8) - 1);
      }
#line 70
      ;
      data++;
      length--;
    }

  return TRUE;
}

# 56 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  bool RfReliableMacPacketP$PacketEx$isValidPacket(message_t *msg)
{
  if (!RfReliableMacPacketP$SubPacketEx$isValidPacket(msg)) 
    {
      return FALSE;
    }

  return RfReliableMacPacketP$SubPacket$payloadLength(msg) >= RfReliableMacPacketP$PacketEx$packetHeaderSize();
}

# 21 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static  uint8_t RfReliableMacAckP$RfReliableMacAck$fillAckMessage(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RfReliableMacAckP$fillAckMessageDefault(receive_msg, receive_dsn, ack_msg, ack);
      RfReliableMacAckP$RfReliableMacAckEvent$fillAckMessage(receive_msg, receive_dsn, ack_msg, ack);

      {
        unsigned char __nesc_temp = 
#line 28
        sizeof(rf_ack_t );

        {
#line 28
          __nesc_atomic_end(__nesc_atomic); 
#line 28
          return __nesc_temp;
        }
      }
    }
#line 31
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
static bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$filterDsn(uint16_t addr, uint8_t field_id, uint8_t dsn)
{
  /* atomic removed: atomic calls only */
  {
    int index = /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$indexOfAddress(addr);

    field_id %= 1;

    if (index < 0) 
      {
        index = /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$findNextAddress();
      }

    if (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_address[index] == addr) 
      {
        if (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_dsn[field_id][index] == dsn) 
          {
            {
              unsigned char __nesc_temp = 
#line 68
              FALSE;

#line 68
              return __nesc_temp;
            }
          }
      }
    /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_address[index] = addr;
    /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP$0$m_filter_dsn[field_id][index] = dsn;

    {
      unsigned char __nesc_temp = 
#line 75
      TRUE;

#line 75
      return __nesc_temp;
    }
  }
}

# 22 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
  __attribute((interrupt)) void __vector_0(void)
{
  EA = 0;
  PlatformInterruptC$INT_RFERR$fired();
  EA = 1;
}







  __attribute((interrupt)) void __vector_16(void)
{
  EA = 0;
  PlatformInterruptC$INT_RF$fired();
  EA = 1;
}

#line 55
  __attribute((interrupt)) void __vector_9(void)
{
  EA = 0;
  PlatformInterruptC$INT_TIM1$fired();
  EA = 1;
}








  __attribute((interrupt)) void __vector_2(void)
{
  EA = 0;
  PlatformInterruptC$INT_UART0_RX$fired();
  EA = 1;
}






  __attribute((interrupt)) void __vector_7(void)
{
  EA = 0;
  PlatformInterruptC$INT_UART0_TX$fired();
  EA = 1;
}







  __attribute((interrupt)) void __vector_3(void)
{
  EA = 0;
  PlatformInterruptC$INT_UART1_RX$fired();
  EA = 1;
}






  __attribute((interrupt)) void __vector_14(void)
{
  EA = 0;
  PlatformInterruptC$INT_UART1_TX$fired();
  EA = 1;
}







  __attribute((interrupt)) void __vector_5(void)
{
  EA = 0;
  PlatformInterruptC$INT_ST$fired();
  EA = 1;
}







  __attribute((interrupt)) void __vector_13(void)
{
  EA = 0;
  PlatformInterruptC$INT_P0$fired();
  EA = 1;
}

  __attribute((interrupt)) void __vector_15(void)
{
  EA = 0;
  PlatformInterruptC$INT_P1$fired();
  EA = 1;
}

