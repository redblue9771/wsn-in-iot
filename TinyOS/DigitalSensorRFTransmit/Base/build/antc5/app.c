
#define MANGLED_NESC_APP_C
#define nx_struct struct
#define nx_union union
#define dbg(mode, format) ((void)0)
#define dbg_clear(mode, format) ((void)0)
#define dbg_active(mode) 0
//# 8 "/opt/atos/tos/chips/cc2530/mcs51/keil_stdint.h"
typedef signed char int8_t;
typedef short int16_t;



typedef long int32_t;


/*typedef long long int int64_t;*/




typedef unsigned char uint8_t;
typedef unsigned short uint16_t;



typedef unsigned long uint32_t;


/*typedef unsigned long long int uint64_t;*/
//# 19 "/opt/atos/tos/chips/cc2530/mcs51/stdint.h"
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int_least32_t;



/*__extension__*/ 
typedef
         float* int_least64_t;
      



typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned long uint_least32_t;



/*__extension__*/ 
typedef 
         float* uint_least64_t;
      






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
/*__extension__*/ 
typedef
         float* int_fast64_t;
      



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
/*__extension__*/ 
typedef 
         float* uint_fast64_t;
      
//# 79 "/opt/atos/tos/chips/cc2530/mcs51/stdint.h" 3
typedef int intptr_t;


typedef unsigned int uintptr_t;








/*__extension__*/ 
typedef
         float* intmax_t;
      
/*__extension__*/ 
typedef 
         float* uintmax_t;
      
//# 231 "/usr/include/inttypes.h"
//#line 228
typedef struct __nesc_unnamed4242 {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;
//# 235 "/usr/lib/ncc/nesc_nx.h"
static   /*inline*/   uint8_t __nesc_ntoh_uint8(const void *source);




static   /*inline*/   uint8_t __nesc_hton_uint8(void *target, uint8_t value);





static   /*inline*/   uint8_t __nesc_ntoh_leuint8(const void *source);




static   /*inline*/   uint8_t __nesc_hton_leuint8(void *target, uint8_t value);





static   /*inline*/   int8_t __nesc_ntoh_int8(const void *source);
//#line 257
static   /*inline*/   int8_t __nesc_hton_int8(void *target, int8_t value);
//#line 276
static   /*inline*/   uint16_t __nesc_ntoh_leuint16(const void *source);




static   /*inline*/   uint16_t __nesc_hton_leuint16(void *target, uint16_t value);
//#line 385
typedef struct { char _data[1]; } /*__attribute__((packed))*/ nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { char _data[2]; } /*__attribute__((packed))*/ nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { char _data[4]; } /*__attribute__((packed))*/ nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { char _data[8]; } /*__attribute__((packed))*/ nx_int64_t;/*typedef int64_t __nesc_nxbase_nx_int64_t  ;*/
typedef struct { char _data[1]; } /*__attribute__((packed))*/ nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { char _data[2]; } /*__attribute__((packed))*/ nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { char _data[4]; } /*__attribute__((packed))*/ nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { char _data[8]; } /*__attribute__((packed))*/ nx_uint64_t;/*typedef uint64_t __nesc_nxbase_nx_uint64_t  ;*/


typedef struct { char _data[1]; } /*__attribute__((packed))*/ nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { char _data[2]; } /*__attribute__((packed))*/ nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { char _data[4]; } /*__attribute__((packed))*/ nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { char _data[8]; } /*__attribute__((packed))*/ nxle_int64_t;/*typedef int64_t __nesc_nxbase_nxle_int64_t  ;*/
typedef struct { char _data[1]; } /*__attribute__((packed))*/ nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { char _data[2]; } /*__attribute__((packed))*/ nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { char _data[4]; } /*__attribute__((packed))*/ nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { char _data[8]; } /*__attribute__((packed))*/ nxle_uint64_t;/*typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;*/
//# 26 "/usr/include/machine/_types.h"
typedef signed char __int8_t;
typedef unsigned char __uint8_t;








typedef signed short __int16_t;
typedef unsigned short __uint16_t;








typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
//# 58 "/usr/include/machine/_types.h" 3
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
//#line 76
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
//#line 99
/*typedef signed long long __int64_t;*/
/*typedef unsigned long long __uint64_t;*/
//# 14 "/usr/include/sys/lock.h"
typedef void *_LOCK_T;
//# 14 "/usr/include/sys/_types.h"
typedef long _off_t;
/*__extension__*/ 
//#line 15
typedef
         float* _off64_t;
      


typedef int _ssize_t;
//# 354 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3
typedef unsigned int wint_t;
//# 35 "/usr/include/sys/_types.h"
//#line 27
typedef struct __nesc_unnamed4243 {

  int __count;
  union __nesc_unnamed4244 {

    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;

typedef _LOCK_T _flock_t;


typedef void *_iconv_t;
//# 151 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3
typedef int ptrdiff_t;
//#line 213
typedef unsigned int size_t;
//#line 325
typedef short unsigned int wchar_t;
//# 19 "/usr/include/machine/types.h"
typedef long int __off_t;
typedef int __pid_t;

/*__extension__*/ 
//#line 22
typedef
         float* __loff_t;
      
//# 92 "/usr/include/sys/types.h"
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
//# 180 "/usr/include/sys/types.h" 3
typedef int pid_t;



typedef _ssize_t ssize_t;
//#line 203
typedef unsigned short nlink_t;
//#line 225
typedef long fd_mask;









//#line 233
typedef struct _types_fd_set {
  fd_mask fds_bits[(64 + (sizeof(fd_mask ) * 8 - 1)) / (sizeof(fd_mask ) * 8)];
} _types_fd_set;
//#line 256
typedef unsigned long clockid_t;




typedef unsigned long timer_t;



typedef unsigned long useconds_t;
typedef long suseconds_t;
//# 26 "/usr/include/cygwin/types.h"
typedef struct timespec timespec_t;




typedef struct timespec timestruc_t;





typedef _off64_t off_t;





typedef __loff_t loff_t;



typedef short __dev16_t;
typedef unsigned long __dev32_t;

typedef __dev32_t dev_t;







typedef long blksize_t;




typedef long __blkcnt32_t;
typedef
         float* __blkcnt64_t;
      

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
typedef 
         float* __ino64_t;
      

typedef __ino64_t ino_t;








typedef unsigned long id_t;
//# 140 "/usr/include/cygwin/types.h" 3
struct flock {
  short l_type;
  short l_whence;
  off_t l_start;
  off_t l_len;

  pid_t l_pid;
};







typedef
         float* key_t;
      







typedef unsigned long vm_offset_t;




typedef unsigned long vm_size_t;




typedef void *vm_object_t;




typedef unsigned char u_int8_t;



typedef __uint16_t u_int16_t;



typedef __uint32_t u_int32_t;



/*typedef __uint64_t u_int64_t;*/




typedef __int32_t register_t;




typedef char *addr_t;




typedef unsigned mode_t;





typedef struct __pthread_t {
//#line 211
  char __dummy;
} *
//#line 211
pthread_t;
typedef struct __pthread_mutex_t {
//#line 212
  char __dummy;
} *
//#line 212
pthread_mutex_t;

typedef struct __pthread_key_t {
//#line 214
  char __dummy;
} *
//#line 214
pthread_key_t;
typedef struct __pthread_attr_t {
//#line 215
  char __dummy;
} *
//#line 215
pthread_attr_t;
typedef struct __pthread_mutexattr_t {
//#line 216
  char __dummy;
} *
//#line 216
pthread_mutexattr_t;
typedef struct __pthread_condattr_t {
//#line 217
  char __dummy;
} *
//#line 217
pthread_condattr_t;
typedef struct __pthread_cond_t {
//#line 218
  char __dummy;
} *
//#line 218
pthread_cond_t;







//#line 221
typedef struct __nesc_unnamed4245 {

  pthread_mutex_t mutex;
  int state;
} 
pthread_once_t;
typedef struct __pthread_rwlock_t {
//#line 227
  char __dummy;
} *
//#line 227
pthread_rwlock_t;
typedef struct __pthread_rwlockattr_t {
//#line 228
  char __dummy;
} *
//#line 228
pthread_rwlockattr_t;
//# 30 "/opt/atos/tos/chips/cc2530/mcs51/stdio.h"
extern int sprintf(char *, const char *, ...);
//# 7 "/opt/atos/tos/chips/cc2530/mcs51/string.h"
extern void *memcpy(void *s1, void *s2, int n);

extern void *memset(void *s, char val, int n);
//# 19 "/usr/include/sys/reent.h"
typedef unsigned long __ULong;
//# 40 "/usr/include/sys/reent.h" 3
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
//#line 166
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void *_cookie;

  _ssize_t /*__attribute((__cdecl__))*/ (*_read)(void *_cookie, char *_buf, int _n);
  _ssize_t /*__attribute((__cdecl__))*/ (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t /*__attribute((__cdecl__))*/ (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int /*__attribute((__cdecl__))*/ (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;


  struct _reent *__data;



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

  struct _reent *__data;


  void *_cookie;

  _ssize_t /*__attribute((__cdecl__))*/ (*_read)(void *_cookie, char *_buf, int _n);
  _ssize_t /*__attribute((__cdecl__))*/ (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t /*__attribute((__cdecl__))*/ (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int /*__attribute((__cdecl__))*/ (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _flags2;

  _off64_t _offset;
  _fpos64_t /*__attribute((__cdecl__))*/ (*_seek64)(void *_cookie, _fpos64_t _offset, int _whence);


  _flock_t _lock;
};

typedef struct __sFILE64 __FILE;




struct _glue {

  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
//#line 290
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
//#line 565
struct _reent {

  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void /*__attribute((__cdecl__))*/ (*__cleanup)(struct _reent *);


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
      /*__extension__*/ 
         float* _rand_next;
      
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
//#line 799
struct _reent;
struct _reent;









struct _reent;
//# 32 "/usr/include/stdlib.h"
//#line 28
typedef struct __nesc_unnamed4249 {

  int quot;
  int rem;
} div_t;





//#line 34
typedef struct __nesc_unnamed4250 {

  long quot;
  long rem;
} ldiv_t;






//#line 41
typedef struct __nesc_unnamed4251 {


         float* quot;
      

         float* rem;
      
} lldiv_t;
//# 11 "/usr/include/math.h"
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
//# 111 "/usr/include/math.h" 3
typedef float float_t;
typedef double double_t;
//#line 344
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
//#line 399
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
//# 20 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4252 {
//#line 21
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;





/*struct __nesc_attr_atmostonce {
};*/
//#line 31
/*struct __nesc_attr_atleastonce {
};*/
//#line 32
/*struct __nesc_attr_exactlyonce {
};*/
//# 6 "/opt/tinyos-2.x/tos/types/AM.h"
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

// TinyOS's ioCC2530.h is replaced by IAR/KEIL's 
#include "ioCC2530.h"

//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/RfConstant.h"
enum rf_fcs_enums {
  RF_FCS_CRC_OK_MASK = 0x80, 
  RF_FCS_CORRELATION_MASK = 0x7F
};
//# 39 "/opt/atos/tos/lib/atos/net/AtosMac/RfAck.h"
//#line 10
typedef nx_struct _rf_ack_t {


  nx_uint8_t dsn;




  nx_uint16_t parent;
  nx_uint16_t parent_cost;
  nx_uint8_t hopcount;
  nx_uint8_t buffer_pressure;

  nx_bool forward_full;
  nx_bool receive_this_msg;
} /*__attribute__((packed))*/ 
//#line 39
rf_ack_t;
//# 24 "/opt/atos/tos/lib/atos/net/AtosMac/RfMessage.h"
//#line 13
typedef nx_struct _rf_header_t {

  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
  nxle_uint8_t type;

  nxle_uint8_t security;
} /*__attribute__((packed))*/ rf_header_t;







//#line 29
typedef nx_struct _rf_footer_t {

  nx_uint8_t i;
} /*__attribute__((packed))*/ rf_footer_t;
//#line 51
//#line 39
typedef nx_struct _rf_meta_data_t {

  nx_int8_t rssi;
  nx_uint8_t lqi;
  nx_bool crc;
  nx_bool ack;

  nx_uint8_t resource_id;
  nx_uint8_t route_resource_id;


  rf_ack_t ack_msg;
} /*__attribute__((packed))*/ rf_meta_data_t;
//# 38 "/opt/atos/tos/lib/atos/net/AtosMac/IEEE802154.h"
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
//# 16 "/opt/atos/tos/platforms/antc5/platform_message.h"
//#line 13
typedef union message_header {
  rf_header_t header;
} 
message_header_t;



//#line 18
typedef union TOSRadioFooter {
  rf_footer_t footer;
} message_footer_t;



//#line 22
typedef union TOSRadioMeta_data {
  rf_meta_data_t meta;
} message_meta_data_t;
//# 19 "/opt/tinyos-2.x/tos/types/message.h"
//#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t _data[127 - (sizeof(rf_header_t ) - 1 + sizeof(uint16_t )) - 0 + sizeof(uint16_t )];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t meta_data[sizeof(message_meta_data_t )];
} /*__attribute__((packed))*/ message_t;
//# 13 "/opt/atos/tos/platforms/antc5/platform.h"
uint16_t TOS_IEEE_SADDR = TOS_AM_ADDRESS;
uint16_t TOS_IEEE_PANID = TOS_AM_GROUP;
//# 5 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTask.h"
extern uint8_t TopTaskMgrP__m_task_flag[];
//# 36 "/opt/tinyos-2.x/tos/types/TinyError.h"
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

static  /*inline*/  error_t ecombine(error_t r1, error_t r2);
//# 62 "/opt/atos/tos/chips/cc2530/mcs51/mcs51hardware.h"
typedef uint8_t __nesc_atomic_t;

static   /*inline*/   void __nesc_disable_interrupt(void);
static   /*inline*/   void __nesc_enable_interrupt(void);





  /*inline*/   __nesc_atomic_t __nesc_atomic_start(void )  ;





  /*inline*/   void __nesc_atomic_end(__nesc_atomic_t oldSreg)  ;
//#line 98
__nesc_atomic_t m_critical_state;
//# 39 "/opt/atos/tos/chips/cc2530/timer/hardware/CC2530Timer.h"
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
//#line 217
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
//# 6 "/opt/atos/tos/lib/atos/common/AtosError.h"
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
//# 9 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
int uart_debug_level = 1000;
//# 11 "/opt/atos/tos/chips/cc2530/mcs51/stdarg.h"
typedef char *va_list;
//# 8 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static void uart0SetBaud(uint32_t baud);





static  /*inline*/  void uart0IntEnable(void);
//#line 34
static  /*inline*/  void uart0PinMap(bool map);









static  /*inline*/  void uart0SetMode(void);





static  /*inline*/  void uart0Init(uint32_t baud);






static void uart0PutChar(char c);
//# 28 "/opt/atos/tos/lib/atos/power/McuSleep.h"
typedef message_t message_t_xdata_pm0;
//# 34 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
uint8_t uart_debug_buf[256];
uint8_t current_task_id = 255;




static  /*inline*/  void ATOS_DEBUG_UART_INIT(void);





static  /*inline*/  void ATOS_DEBUG_UART_PUTC(char c);








static void ATOS_DEBUG_UART_PRINT(void);
//# 7 "/opt/atos/tos/lib/atos/kernel/AtosTask/AtosTask.h"
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
//# 29 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4272 {
//#line 29
  int notUsed;
} 
//#line 29
TMilli;
typedef struct __nesc_unnamed4273 {
//#line 30
  int notUsed;
} 
//#line 30
T32khz;
typedef struct __nesc_unnamed4274 {
//#line 31
  int notUsed;
} 
//#line 31
TMicro;
//# 13 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMac.h"
//#line 9
typedef struct _rf_rmac_header_t {

  uint8_t dsn;
  uint8_t ack_req;
} rf_rmac_header_t;


uint8_t rf_rmac_dsn = 1;
//# 11 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.h"
enum __nesc_unnamed4275 {

  ANSTD_DATA_TYPE_NODE_STATUS_UP = 0x21, 
  ANSTD_DATA_TYPE_DISCOVERY = 0x22, 
  ANSTD_DATA_TYPE_SETIEEE = 0x23, 
  ANSTD_DATA_TYPE_REBOOT = 0x24, 
  ANSTD_DATA_TYPE_TRACE = 0x25, 
  ANSTD_DATA_TYPE_TRACE_ACK = 0x26
};




//#line 21
typedef struct _anstd_header_t {

  uint8_t _data_type;
} anstd_header_t;
//#line 40
//#line 26
typedef struct _anstd_node_status_t {

  uint8_t _data_type;
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









//#line 43
typedef struct _anstd_discovery_t {

  uint8_t _data_type;
  uint8_t device_type;
  uint8_t rf_channel;
  uint16_t node_group;
  uint16_t node_id;
} anstd_discovery_t;








//#line 53
typedef struct _anstd_setieee_t {

  uint8_t _data_type;
  uint16_t node_group;
  uint16_t node_id;
  uint8_t ieee[8];
} anstd_setieee_t;








//#line 62
typedef struct _anstd_reboot_t {

  uint8_t _data_type;
  uint16_t node_group;
  uint16_t node_id;
  uint8_t delay_time;
} anstd_reboot_t;







//#line 71
typedef struct _anstd_trace_item_t {

  uint16_t node_id;
  int8_t forward_rssi;
  int8_t backward_rssi;
} anstd_trace_item_t;








//#line 77
typedef struct _anstd_trace_t {

  uint8_t _data_type;
  uint8_t trace_dsn;
  uint16_t node_group;
  uint8_t total_count;
  uint8_t traced_count;
  anstd_trace_item_t items[1];
} anstd_trace_t;



typedef anstd_trace_t anstd_trace_ack_t;
//# 7 "/opt/atos/tos/lib/atos/atp/atpcmd/app/AtpCmdPacketCommon.h"
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
//#line 42
//#line 35
typedef struct _atp_cmd_packet {

  uint8_t cmd;
  uint16_t len;
  uint8_t hcs;
  uint8_t _data[ATP_CMD_MAX_RECEIVE_PACKET];
  uint8_t pcs;
} atp_cmd_packet_t;






enum __nesc_unnamed4278 {

  ATP_CMD_HEADER_SIZE_ALL = sizeof(uint8_t ) + sizeof(uint16_t ) + sizeof(uint8_t ), 
  ATP_CMD_HEADER_SIZE = sizeof(uint8_t ) + sizeof(uint16_t ), 
  ATP_CMD_HEADER_CMD_SIZE = sizeof(uint8_t ), 
  ATP_CMD_HEADER_LEN_SIZE = sizeof(uint16_t ), 
  ATP_CMD_HEADER_HCS_SIZE = sizeof(uint8_t )
};
//# 15 "/opt/atos/tos/lib/atos/atp/atpapp/AtpAppPacket.h"
//#line 10
typedef struct _atp_app_packet_header_t {

  uint8_t industry_code;
  uint8_t application_code;
  uint8_t _data_type;
} atp_app_packet_header_t;
//# 8 "/opt/atos/tos/lib/atos/atp/atpcmd/AtpCmdStd.h"
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




//#line 32
typedef struct _atp_std_general_info_t_ {

  uint8_t equipment_type;
} as_general_info_t;







//#line 37
typedef struct _atp_std_gateway_info_t_ {

  uint8_t industry_code;
  uint8_t application_code;
  uint8_t ieee_addr[8];
  uint8_t radio_channel;
} as_gateway_info_t;










//#line 45
typedef struct _atp_std_node_info_t_ {

  uint8_t industry_code;
  uint8_t application_code;
  uint8_t ieee_addr[8];
  uint8_t node_type;
  uint8_t radio_channel;
  uint8_t battery_capacity;
  uint8_t radio_quality;
} as_node_info_t;




//#line 56
typedef struct _atp_std_ping_extra_t_ {

  uint8_t config;
} as_ping_extra_t;





//#line 61
typedef struct _atp_std_discovery_extra_t_ {

  uint8_t radio_channel;
  uint16_t addr_area;
} as_discovery_extra_t;




//#line 67
typedef struct _atp_std_ieee_addr_extra_t_ {

  uint8_t ieee_addr[8];
} as_ieee_addr_extra_t;
typedef TMilli RealMainP__FakeTimer__precision_tag;
enum HplCC2530Timer1C____nesc_unnamed4282 {
  HplCC2530Timer1C__TOP_TASK_ID = 0U
};
typedef T32khz /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__frequency;
typedef /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__frequency /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm2__precision_tag;
typedef uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm2__size_type;
typedef /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__frequency /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__precision_tag;
typedef uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__size_type;
typedef /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__frequency /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__precision_tag;
typedef uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__size_type;
typedef /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__frequency /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__precision_tag;
typedef uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__size_type;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom*/Alarm32khz16C__0____nesc_unnamed4283 {
  Alarm32khz16C__0__ALARM_ID = 0U
};
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum HalCC2530Uart0IsrC____nesc_unnamed4284 {
  HalCC2530Uart0IsrC__RX_TOP_TASK_ID = 1U
};
enum HalCC2530Uart0IsrC____nesc_unnamed4285 {
  HalCC2530Uart0IsrC__TX_TOP_TASK_ID = 2U
};
typedef TMilli /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__precision_tag;
typedef TMilli /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__precision_tag;
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC*/AMResourceC__0____nesc_unnamed4286 {
  AMResourceC__0__AM_RESOURCE_ID = 0U
};
enum AMResourceCenterC____nesc_unnamed4287 {
  AMResourceCenterC__AM_RESOURCE_COUNT = 4U
};
typedef message_t */*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__t;
typedef message_t */*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t;
typedef /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__t;
typedef T32khz RfMacBaseCsmaP__BackoffTimer__precision_tag;
typedef uint32_t RfMacBaseCsmaP__BackoffTimer__size_type;
enum RfHardwareRxC____nesc_unnamed4288 {
  RfHardwareRxC__TOP_TASK_ID = 3U
};
enum /*RfMacBaseCsmaC.Alarm32khz32C.Alarm32khz16C*/Alarm32khz16C__1____nesc_unnamed4289 {
  Alarm32khz16C__1__ALARM_ID = 1U
};
typedef T32khz /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type;
typedef T32khz /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type;
typedef T32khz /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type;
typedef uint16_t /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__upper_count_type;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_precision_tag /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_precision_tag /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__precision_tag;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__size_type;
typedef TMilli AtosNetStdP__RebootTimer__precision_tag;
typedef TMilli /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__precision_tag;
typedef TMilli /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__precision_tag;
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC*/AMResourceC__2____nesc_unnamed4290 {
  AMResourceC__2__AM_RESOURCE_ID = 1U
};
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC*/AMResourceC__3____nesc_unnamed4291 {
  AMResourceC__3__AM_RESOURCE_ID = 2U
};
enum DsnFilterCenterC____nesc_unnamed4292 {
  DsnFilterCenterC__DSN_FILTER_COUNT = 1U
};
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC*/AMResourceC__1____nesc_unnamed4293 {
  AMResourceC__1__AM_RESOURCE_ID = 3U
};
//# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void DigBaseP__Boot__booted(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void DigBaseP__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void DigBaseP__showMenu__runTask(void);
//#line 64
static  void DigBaseP__sendData__runTask(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *DigBaseP__Receive__receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void DigBaseP__UartStream__receivedByte(uint8_t arg_0x7eb73860);
//#line 99
static   void DigBaseP__UartStream__receiveDone(uint8_t *arg_0x7eb72540, uint16_t arg_0x7eb726d0, error_t arg_0x7eb72858);
//#line 57
static   void DigBaseP__UartStream__sendDone(uint8_t *arg_0x7eb747c8, uint16_t arg_0x7eb74958, error_t arg_0x7eb74ae0);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP__Init__init(void);
//# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
static  void WatchDogP__WatchDog__resetCpu(void);
//# 58 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   void FlashIEEEP__ActiveMessageAddress__changed(void);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t FlashIEEEP__Init__init(void);
//# 8 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
static  void FlashIEEEP__FlashIEEE__WriteIEEE(uint8_t *arg_0x7ea50510);
//#line 5
static  uint16_t FlashIEEEP__FlashIEEE__GetShortAddress(void);

static  void FlashIEEEP__FlashIEEE__GetIEEE(uint8_t *arg_0x7ea50068);



static  void FlashIEEEP__FlashIEEE__WriteToAM(void);
//#line 4
static  uint16_t FlashIEEEP__FlashIEEE__GetPANID(void);





static  void FlashIEEEP__FlashIEEE__WriteToRegister(void);
//# 44 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC__amAddress(void);
//# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void);




static   am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void);
//#line 43
static   void ActiveMessageAddressC__ActiveMessageAddress__setAddress(am_group_t arg_0x7ea35030, am_addr_t arg_0x7ea351c0);
//# 3 "/opt/atos/tos/chips/cc2530/flash/HalFlash.nc"
static  error_t HalFlashP__HalFlash__read(uint8_t *arg_0x7ea32330, uint32_t arg_0x7ea324c0, uint16_t arg_0x7ea32650);



static  error_t HalFlashP__HalFlash__erase(uint32_t arg_0x7ea30338);
//#line 5
static  error_t HalFlashP__HalFlash__write(uint32_t arg_0x7ea32af8, uint8_t *arg_0x7ea32ca0, uint16_t arg_0x7ea32e30);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HalFlashP__Init__init(void);
//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void RealMainP__FakeTimer__fired(void);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void RealMainP__fakeTask__runTask(void);
//#line 56
static   error_t SchedulerBasicP__TaskBasic__postTask(
//# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ec64200);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP__TaskBasic__default__runTask(
//# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ec64200);
//# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP__Scheduler__init(void);
//#line 61
static  void SchedulerBasicP__Scheduler__taskLoop(void);
//#line 54
static  bool SchedulerBasicP__Scheduler__runNextTask(void);
//# 6 "/opt/atos/tos/lib/atos/utils/ModuleReset.nc"
static  error_t McuSleepP__ModuleReset__default__reset(uint8_t arg_0x7ebe5310);
//# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepP__McuSleep__sleep(void);
//# 8 "/opt/atos/tos/lib/atos/power/McuSleepControl.nc"
static  void McuSleepP__McuSleepControl__default__beforeSleep(void);

static  void McuSleepP__McuSleepControl__default__afterWakeup(void);
//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgr.nc"
static  bool TopTaskMgrP__TopTaskMgr__hasTasks(void);
static  void TopTaskMgrP__TopTaskMgr__runTasks(void);
//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void TopTaskMgrP__TopTaskHandler__default__handler(
//# 6 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
uint8_t arg_0x7ebb1360);
//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__INT_TIM1__fired(void);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm2__default__fired(void);
//# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__CaptureChannel2__default__captured(uint16_t arg_0x7e921bc8);
//# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__startAt(/*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__size_type arg_0x7e952c28, /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__size_type arg_0x7e952db8);
//#line 62
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__stop(void);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Init__init(void);
//# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__size_type /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__get(void);






static   bool /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__isOverflowPending(void);
//# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__startAt(/*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__size_type arg_0x7e952c28, /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__size_type arg_0x7e952db8);
//#line 62
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__stop(void);
//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__TopTaskHandler__handler(void);
//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void PlatformInterruptC__INT_UART1_TX__default__fired(void);
//#line 4
static  void PlatformInterruptC__INT_UART1_RX__default__fired(void);
//#line 4
static  void PlatformInterruptC__INT_ST__default__fired(void);
//#line 4
static  void PlatformInterruptC__INT_P0__default__fired(void);
//#line 4
static  void PlatformInterruptC__INT_P1__default__fired(void);
//# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void);
//#line 53
static   /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void);
//# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void);
//#line 92
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type arg_0x7e952c28, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type arg_0x7e952db8);
//#line 105
static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void);
//#line 62
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void);




static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void);
//# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__firedTask__runTask(void);
//# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void);
//#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t arg_0x7e9a39b8, uint32_t arg_0x7e9a3b48);
//#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void);
//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void);
//#line 72
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
//# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030);
//# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
//# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030, 
//# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7e9a6788);








static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
//# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030, 
//# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7e9a6d58);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
//# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030);
//# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void);
//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__UartStdControl__start(void);
//# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__Uart__get(uint8_t arg_0x7e7108d8);





static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__Uart__putDone(void);
//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__TxTaskHandler__handler(void);
//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__INT_UART0_TX__fired(void);
//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0StdControl__start(void);
//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__RxTaskHandler__handler(void);
//# 41 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
static   error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0__put(uint8_t arg_0x7e710338);
//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__INT_UART0_RX__fired(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__SubAMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__resendTask__runTask(void);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AtosControl__start(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__SubAMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//#line 69
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__fired(void);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDoneTask__runTask(void);
//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__fired(void);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AtosControl__start(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__ReceiveAck__receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMResource__sendDone(message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t AMResourceCenterP__AMResource__send(
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
uint8_t arg_0x7e5f3dd8, 
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
static  void AMResourceCenterP__AMResource__default__sendDone(
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
uint8_t arg_0x7e5f3dd8, 
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
//# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  void AMResourceCenterP__CoreSend__sendDone(message_t *arg_0x7e5e84c0, error_t arg_0x7e5e8648);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t AMResourceCenterP__AtosControl__start(void);
//# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SubCoreSend__sendDone(message_t *arg_0x7e5e84c0, error_t arg_0x7e5e8648);
//#line 7
static  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__CoreSend__send(message_t *arg_0x7e5e9998, uint8_t arg_0x7e5e9b20);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext__runTask(void);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__AtosControl__start(void);
//# 32 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__head(void);
//#line 49
static  error_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__enqueue(/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__t arg_0x7e5c8930);










static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__element(uint8_t arg_0x7e5c8ea8);






static  void /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__clear(void);
//#line 24
static  uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__maxSize(void);
//#line 65
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__remove(uint8_t arg_0x7e5c6990);
//#line 40
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__dequeue(void);
//#line 9
static  bool /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__empty(void);







static  uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__size(void);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void RfMacBaseCsmaP__BackoffTimer__fired(void);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  error_t RfMacBaseCsmaP__CoreSend__send(message_t *arg_0x7e5e9998, uint8_t arg_0x7e5e9b20);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void RfMacBaseCsmaP__signalDoneTask__runTask(void);
//#line 64
static  void RfMacBaseCsmaP__doGo__runTask(void);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t RfMacBaseCsmaP__AtosControl__start(void);
//#line 4
static  error_t RfHardwareP__AtosControl__start(void);
//# 13 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
static  void RfPowerP__RfPower__oscOn(void);
//#line 6
static  void RfPowerP__RfPower__radioOn(void);
//#line 4
static  void RfPowerP__RfPower__reset(void);




static  void RfPowerP__RfPower__rxOn(void);
//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
static  void RfConfigP__RfConfig__flush(void);




static  uint8_t RfConfigP__RfConfig__getChannel(void);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RfConfigP__Init__init(void);
//# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptRFErr__fired(void);
//# 9 "/opt/tinyos-2.x/tos/interfaces/AtosScheduler.nc"
static  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__AtosScheduler__periodScheduler(void);
//# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptFIFOP__fired(void);
//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__StdControl__start(void);
//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__TopTaskHandler__handler(void);
//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void RfInterruptsP__INT_RFERR__fired(void);
//# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t RfInterruptsP__InterruptRFErr__enableRisingEdge(void);
//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void RfInterruptsP__INT_RF__fired(void);
//# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t RfInterruptsP__InterruptFIFOP__enableRisingEdge(void);
//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareTx.nc"
static  error_t RfHardwareTxP__RfHardwareTx__txPrepare(uint8_t *arg_0x7e572c98, uint8_t arg_0x7e572e20);
static  error_t RfHardwareTxP__RfHardwareTx__txGo(void);
//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t RfHardwareTxP__StdControl__start(void);
//# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void);
//#line 92
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type arg_0x7e952c28, /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type arg_0x7e952db8);
//#line 55
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type arg_0x7e953b10);






static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void);




static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void);
//# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void);
//#line 71
static   void /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void);
//#line 53
static   /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__get(void);
//# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t CC2530RandomLfsrP__Random__rand16(void);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2530RandomLfsrP__Init__init(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t RfPacketP__Packet__payloadLength(message_t *arg_0x7eb25e90);
//#line 108
static  void *RfPacketP__Packet__getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
//#line 95
static  uint8_t RfPacketP__Packet__maxPayloadLength(void);
//#line 83
static  void RfPacketP__Packet__setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
//# 58 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   void RfPacketP__ActiveMessageAddress__changed(void);
//# 166 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_group_t RfPacketP__AMPacket__group(message_t *arg_0x7eb348b8);
//#line 77
static  am_addr_t RfPacketP__AMPacket__source(message_t *arg_0x7eb42b90);
//#line 57
static  am_addr_t RfPacketP__AMPacket__address(void);









static  am_addr_t RfPacketP__AMPacket__destination(message_t *arg_0x7eb425b0);
//#line 110
static  void RfPacketP__AMPacket__setSource(message_t *arg_0x7eb40a20, am_addr_t arg_0x7eb40bb0);
//#line 92
static  void RfPacketP__AMPacket__setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
//#line 136
static  am_id_t RfPacketP__AMPacket__type(message_t *arg_0x7eb35aa0);
//#line 125
static  bool RfPacketP__AMPacket__isForMe(message_t *arg_0x7eb35370);
//#line 176
static  void RfPacketP__AMPacket__setGroup(message_t *arg_0x7eb32010, am_group_t arg_0x7eb321a0);







static  am_group_t RfPacketP__AMPacket__localGroup(void);
//# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  uint8_t RfPacketP__PacketEx__packetHeaderSize(void);


static  bool RfPacketP__PacketEx__isValidPacket(message_t *arg_0x7e6b45f8);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t RfReliableMacPacketP__Packet__payloadLength(message_t *arg_0x7eb25e90);
//#line 108
static  void *RfReliableMacPacketP__Packet__getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
//#line 95
static  uint8_t RfReliableMacPacketP__Packet__maxPayloadLength(void);
//#line 83
static  void RfReliableMacPacketP__Packet__setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
//# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  uint8_t RfReliableMacPacketP__PacketEx__packetHeaderSize(void);
static  void *RfReliableMacPacketP__PacketEx__getPacketHeader(message_t *arg_0x7e6b4120);

static  bool RfReliableMacPacketP__PacketEx__isValidPacket(message_t *arg_0x7e6b45f8);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  uint8_t RfReliableMacAckP__RfReliableMacAck__fillAckMessage(message_t *arg_0x7e653b48, uint8_t arg_0x7e653cd8, message_t *arg_0x7e653e88, rf_ack_t *arg_0x7e652068);
static  void RfReliableMacAckP__RfReliableMacAck__receiveAckMessage(message_t *arg_0x7e652540, message_t *arg_0x7e6526f0, rf_ack_t *arg_0x7e6528a0);
//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckEvent.nc"
static  uint8_t RfReliableMacAckP__RfReliableMacAckEvent__default__fillAckMessage(message_t *arg_0x7e3eab10, uint8_t arg_0x7e3eaca0, message_t *arg_0x7e3eae50, rf_ack_t *arg_0x7e3e7030);
static  void RfReliableMacAckP__RfReliableMacAckEvent__default__receiveAckMessage(message_t *arg_0x7e3e7508, message_t *arg_0x7e3e76b8, rf_ack_t *arg_0x7e3e7868);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__SubReceive__receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAckTask__runTask(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMSendAck__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AtosControl__start(void);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreReceive.nc"
static  void RfActiveMessageP__CoreReceive__receive(message_t *arg_0x7e393030);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *RfActiveMessageP__Snoop__default__receive(
//# 8 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
uint8_t arg_0x7e398bb0, 
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//#line 67
static  message_t *RfActiveMessageP__Receive__default__receive(
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
uint8_t arg_0x7e3983f8, 
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t RfActiveMessageP__AtosControl__start(void);
//# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareRx.nc"
static  void RfMacBaseReceiveP__RfHardwareRx__rxPacket(uint8_t *arg_0x7e5337e8, uint8_t arg_0x7e533970);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t AtosMacP__AtosControl__start(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void AtosNetStdP__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *AtosNetStdP__Receive__receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 17 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
static  void AtosNetStdP__AtosNetStd__default__receivedReboot(anstd_reboot_t *arg_0x7e2fc6a8);

static  void AtosNetStdP__AtosNetStd__default__receivedTraceAck(message_t *arg_0x7e2fa1f8, anstd_trace_ack_t *arg_0x7e2fa3b8);
//#line 15
static  void AtosNetStdP__AtosNetStd__default__receivedDiscovery(anstd_discovery_t *arg_0x7e2fdd20);


static  void AtosNetStdP__AtosNetStd__default__receivedTrace(message_t *arg_0x7e2fcb58, anstd_trace_t *arg_0x7e2fcd08);
//#line 6
static  error_t AtosNetStdP__AtosNetStd__sendNodeStatusUp(uint16_t arg_0x7e310d68);





static  void AtosNetStdP__AtosNetStd__default__beforeNodeStatusUp(anstd_node_status_t *arg_0x7e2fd1e0);

static  void AtosNetStdP__AtosNetStd__default__receivedNodeStatusUp(message_t *arg_0x7e2fd698, anstd_node_status_t *arg_0x7e2fd850);

static  void AtosNetStdP__AtosNetStd__default__receivedSetIEEE(anstd_setieee_t *arg_0x7e2fc1f8);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void AtosNetStdP__nodeStatusUpTask__runTask(void);
//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void AtosNetStdP__RebootTimer__fired(void);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void AtosNetStdP__rebootTask__runTask(void);
//#line 64
static  void AtosNetStdP__sendDoneCheck__runTask(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__SubAMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__resendTask__runTask(void);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AtosControl__start(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__SubAMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//#line 69
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__fired(void);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDoneTask__runTask(void);
//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__fired(void);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AtosControl__start(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__ReceiveAck__receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMResource__sendDone(message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__SubReceive__receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAckTask__runTask(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMSendAck__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AtosControl__start(void);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMResource__sendDone(message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
static  bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__DsnFilter__filter(
//# 5 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
uint8_t arg_0x7e21adc0, 
//# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
uint16_t arg_0x7e3c9ba8, uint8_t arg_0x7e3c9d30);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__Init__init(void);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMResource__sendDone(message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t DigBaseP__UartStdControl__start(void);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t DigBaseP__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *DigBaseP__Packet__getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
//#line 95
static  uint8_t DigBaseP__Packet__maxPayloadLength(void);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t DigBaseP__showMenu__postTask(void);
//#line 56
static   error_t DigBaseP__sendData__postTask(void);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t DigBaseP__AtosControl__start(void);
//# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t DigBaseP__AMPacket__address(void);
//# 34 "DigBaseP.nc"
enum DigBaseP____nesc_unnamed4294 {
//#line 34
  DigBaseP__showMenu = 0U
};
//#line 34
typedef int DigBaseP____nesc_sillytask_showMenu[];
//#line 85
enum DigBaseP____nesc_unnamed4295 {
//#line 85
  DigBaseP__sendData = 1U
};
//#line 85
typedef int DigBaseP____nesc_sillytask_sendData[DigBaseP__sendData];
//#line 20
enum DigBaseP____nesc_unnamed4296 {

  DigBaseP__MAX_ADDRESS_LEN = 5, 
  DigBaseP__INPUT_ADDRESS = 0, 
  DigBaseP__INPUT_DATA = 1
};

message_t DigBaseP__m_msg;
uint8_t DigBaseP__m_len = 0;
char DigBaseP__m_address_str[DigBaseP__MAX_ADDRESS_LEN] = { 0 };
uint8_t DigBaseP__m_address_index = 0;
uint8_t DigBaseP__m_input_type = 0;
uint8_t DigBaseP__sensor_type = 0;

static  /*inline*/   void DigBaseP__showMenu__runTask(void);
//#line 52
static  /*inline*/  uint16_t DigBaseP__getDestAddress(void);
//#line 85
static  /*inline*/   void DigBaseP__sendData__runTask(void);
//#line 114
static  /*inline*/   void DigBaseP__AMSend__sendDone(message_t *msg, error_t success);










static  /*inline*/    void DigBaseP__UartStream__receivedByte(uint8_t c);
//#line 176
static  /*inline*/   void DigBaseP__Boot__booted(void);
//#line 195
static  /*inline*/    void DigBaseP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error);



static  /*inline*/    void DigBaseP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);




static  /*inline*/   message_t *DigBaseP__Receive__receive(message_t *msg, void *payload, uint8_t len);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP__PlatformInit__init(void);
//# 11 "/opt/atos/tos/platforms/antc5/boot/PlatformP.nc"
static error_t PlatformP__clockSelect32k(uint8_t source);
//#line 29
static void PlatformP__clockSetMainSrc(uint8_t source);
//#line 52
static  /*inline*/   error_t PlatformP__Init__init(void);
//# 8 "/opt/atos/tos/chips/cc2530/watchdog/WatchDogP.nc"
static  void WatchDogP__WatchDog__resetCpu(void);
//# 3 "/opt/atos/tos/chips/cc2530/flash/HalFlash.nc"
static  error_t FlashIEEEP__HalFlash__read(uint8_t *arg_0x7ea32330, uint32_t arg_0x7ea324c0, uint16_t arg_0x7ea32650);



static  error_t FlashIEEEP__HalFlash__erase(uint32_t arg_0x7ea30338);
//#line 5
static  error_t FlashIEEEP__HalFlash__write(uint32_t arg_0x7ea32af8, uint8_t *arg_0x7ea32ca0, uint16_t arg_0x7ea32e30);
//# 43 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   void FlashIEEEP__ActiveMessageAddress__setAddress(am_group_t arg_0x7ea35030, am_addr_t arg_0x7ea351c0);
//# 47 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
uint8_t FlashIEEEP__m_ieee[8];
uint8_t FlashIEEEP__m_ieee_flash[8];



static  /*inline*/  void FlashIEEEP__ieeeProtect(void);
//#line 108
static void FlashIEEEP__readFromFlash(void);
//#line 129
static  /*inline*/   error_t FlashIEEEP__Init__init(void);
//#line 144
static  uint16_t FlashIEEEP__FlashIEEE__GetPANID(void);





static  uint16_t FlashIEEEP__FlashIEEE__GetShortAddress(void);










static  /*inline*/   void FlashIEEEP__FlashIEEE__GetIEEE(uint8_t *ieee);




static  /*inline*/   void FlashIEEEP__FlashIEEE__WriteIEEE(uint8_t *ieee);
//#line 193
static  void FlashIEEEP__FlashIEEE__WriteToRegister(void);
//#line 217
static  void FlashIEEEP__FlashIEEE__WriteToAM(void);










static  /*inline*/    void FlashIEEEP__ActiveMessageAddress__changed(void);
//# 58 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   void ActiveMessageAddressC__ActiveMessageAddress__changed(void);
//# 51 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static  /*inline*/    am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void);








static  /*inline*/    void ActiveMessageAddressC__ActiveMessageAddress__setAddress(am_group_t myGroup, am_addr_t myAddr);
//#line 82
static  /*inline*/    am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void);
//#line 95
static   am_addr_t ActiveMessageAddressC__amAddress(void);
//# 35 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
void HalFlashP__HalCC2530FlashRead(uint8_t *destination, uint32_t source, uint16_t length);
void HalFlashP__HalCC2530FlashWrite(uint32_t destination, uint8_t *source, uint16_t length);

static  /*inline*/   error_t HalFlashP__Init__init(void);





static  /*inline*/   error_t HalFlashP__HalFlash__read(uint8_t *destination, uint32_t source, uint16_t length);






static  /*inline*/   error_t HalFlashP__HalFlash__write(uint32_t destination, uint8_t *source, uint16_t length);






static  error_t HalFlashP__HalFlash__erase(uint32_t address);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP__SoftwareInit__init(void);
//# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RealMainP__Boot__booted(void);
//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP__PlatformInit__init(void);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t RealMainP__fakeTask__postTask(void);
//# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void RealMainP__Scheduler__init(void);
//#line 61
static  void RealMainP__Scheduler__taskLoop(void);
//#line 54
static  bool RealMainP__Scheduler__runNextTask(void);
//# 103 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
enum RealMainP____nesc_unnamed4297 {
//#line 103
  RealMainP__fakeTask = 2U
};
//#line 103
typedef int RealMainP____nesc_sillytask_fakeTask[RealMainP__fakeTask];
//#line 56
int main(void)   ;
//#line 103
static  /*inline*/   void RealMainP__fakeTask__runTask(void);







static  /*inline*/   void RealMainP__FakeTimer__fired(void);
//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP__TaskBasic__runTask(
//# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ec64200);
//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgr.nc"
static  bool SchedulerBasicP__TopTaskMgr__hasTasks(void);
static  void SchedulerBasicP__TopTaskMgr__runTasks(void);
//# 9 "/opt/tinyos-2.x/tos/interfaces/AtosScheduler.nc"
static  void SchedulerBasicP__AtosScheduler__periodScheduler(void);
//# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP__McuSleep__sleep(void);
//# 54 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4298 {

  SchedulerBasicP__NUM_TASKS = 17U + 1, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head = 0;
uint8_t SchedulerBasicP__m_tail = 0;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static   /*inline*/   uint8_t SchedulerBasicP__popTask(void);
//#line 108
static  /*inline*/  bool SchedulerBasicP__isWaiting(uint8_t id);
//#line 132
static  /*inline*/  bool SchedulerBasicP__pushTask(uint8_t id);
//#line 181
static  /*inline*/   void SchedulerBasicP__Scheduler__init(void);
//#line 198
static  bool SchedulerBasicP__Scheduler__runNextTask(void);
//#line 215
static  /*inline*/   void SchedulerBasicP__Scheduler__taskLoop(void);
//#line 264
static   error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static   void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
//# 6 "/opt/atos/tos/lib/atos/utils/ModuleReset.nc"
static  error_t McuSleepP__ModuleReset__reset(uint8_t arg_0x7ebe5310);
//# 8 "/opt/atos/tos/lib/atos/power/McuSleepControl.nc"
static  void McuSleepP__McuSleepControl__beforeSleep(void);

static  void McuSleepP__McuSleepControl__afterWakeup(void);
//# 12 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
bool McuSleepP__m_need_sleep = FALSE;
//#line 36
static  /*inline*/    void McuSleepP__McuSleep__sleep(void);
//#line 78
static  /*inline*/    void McuSleepP__McuSleepControl__default__beforeSleep(void);


static  /*inline*/    void McuSleepP__McuSleepControl__default__afterWakeup(void);


static  /*inline*/    error_t McuSleepP__ModuleReset__default__reset(uint8_t reset_level);
//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
static  void TopTaskMgrP__TopTaskHandler__handler(
//# 6 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
uint8_t arg_0x7ebb1360);



enum TopTaskMgrP____nesc_unnamed4299 {

  TopTaskMgrP__TOP_TASK_COUNT = 4U
};

 uint8_t TopTaskMgrP__m_task_flag[TopTaskMgrP__TOP_TASK_COUNT];






static  bool TopTaskMgrP__TopTaskMgr__hasTasks(void);
//#line 40
static  /*inline*/   void TopTaskMgrP__TopTaskMgr__runTasks(void);
//#line 57
static  /*inline*/    void TopTaskMgrP__TopTaskHandler__default__handler(uint8_t n);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm2__fired(void);
//# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__CaptureChannel2__captured(uint16_t arg_0x7e921bc8);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__fired(void);
//# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__overflow(void);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__fired(void);
//# 38 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  error_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Init__init(void);
//#line 78
static  /*inline*/    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__stop(void);
//#line 121
static  /*inline*/    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__startAt(uint16_t t0, uint16_t dt);
//#line 159
static  /*inline*/    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__stop(void);
//#line 200
static  /*inline*/    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__startAt(uint16_t t0, uint16_t dt);
//#line 316
static   uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__get(void);










static  /*inline*/    bool /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__isOverflowPending(void);
//#line 402
uint8_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag = 0x00;
static  /*inline*/   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__TopTaskHandler__handler(void);
//#line 454
static  /*inline*/   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__INT_TIM1__fired(void);
//#line 534
static  /*inline*/     void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm2__default__fired(void);

static  /*inline*/     void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__CaptureChannel2__default__captured(uint16_t time);
//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
static  void PlatformInterruptC__INT_RFERR__fired(void);
//#line 4
static  void PlatformInterruptC__INT_TIM1__fired(void);
//#line 4
static  void PlatformInterruptC__INT_UART1_TX__fired(void);
//#line 4
static  void PlatformInterruptC__INT_RF__fired(void);
//#line 4
static  void PlatformInterruptC__INT_UART1_RX__fired(void);
//#line 4
static  void PlatformInterruptC__INT_UART0_TX__fired(void);
//#line 4
static  void PlatformInterruptC__INT_ST__fired(void);
//#line 4
static  void PlatformInterruptC__INT_P0__fired(void);
//#line 4
static  void PlatformInterruptC__INT_P1__fired(void);
//#line 4
static  void PlatformInterruptC__INT_UART0_RX__fired(void);
//# 22 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
void __vector_0(void);
//#line 35
void __vector_16(void);
//#line 55
void __vector_9(void);
//#line 69
void __vector_2(void);
//#line 81
void __vector_7(void);
//#line 94
void __vector_3(void);






static  /*inline*/    void PlatformInterruptC__INT_UART1_RX__default__fired(void);




void __vector_14(void);






static  /*inline*/    void PlatformInterruptC__INT_UART1_TX__default__fired(void);





void __vector_5(void);






static  /*inline*/    void PlatformInterruptC__INT_ST__default__fired(void);





void __vector_13(void);






void __vector_15(void);






static  /*inline*/    void PlatformInterruptC__INT_P0__default__fired(void);





static  /*inline*/    void PlatformInterruptC__INT_P1__default__fired(void);
//# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void);






static   bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void);










static   void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void);
//# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper = 0;

enum /*CounterMilli32C.Transform*/TransformCounterC__0____nesc_unnamed4300 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) + 5, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void);
//#line 125
static  /*inline*/    void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void);
//#line 92
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type arg_0x7e952c28, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type arg_0x7e952db8);
//#line 62
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void);
//# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0____nesc_unnamed4301 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 5, 
  TransformAlarmC__0__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static  /*inline*/    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void);




static  /*inline*/    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void);









static  /*inline*/    void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void);




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void);
//#line 140
static  /*inline*/    void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt);
//#line 155
static  /*inline*/    void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void);
//#line 170
static  /*inline*/    void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void);
//# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void);
//#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type arg_0x7e952c28, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type arg_0x7e952db8);
//#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void);
//#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__firedTask__postTask(void);
//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void);
//# 81 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4302 {
//#line 81
  AlarmToTimerC__0__firedTask = 3U
};
//#line 81
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_firedTask[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__firedTask];
//#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = 0;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = FALSE;

static  /*inline*/  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
//#line 73
static  /*inline*/   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void);







static  /*inline*/   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__firedTask__runTask(void);
//#line 93
static  /*inline*/    void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void);
//#line 113
static  /*inline*/   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);




static  /*inline*/   uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void);
//# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void);
//#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t arg_0x7e9a39b8, uint32_t arg_0x7e9a3b48);
//#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
//# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e794030);
//#line 59
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4303 {
//#line 59
  VirtualizeTimerC__0__updateFromTimer = 4U
};
//#line 59
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
//#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4304 {

  VirtualizeTimerC__0__NUM_TIMERS = 6U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








//#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4305 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];



static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
//#line 98
static  /*inline*/   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void);
//#line 152
static  /*inline*/   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
//#line 174
static  /*inline*/   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);








static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);








static  /*inline*/   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
//#line 232
static  /*inline*/    void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
//# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static  /*inline*/    void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void);
//# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__UartStream__receivedByte(uint8_t arg_0x7eb73860);
//#line 99
static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__UartStream__receiveDone(uint8_t *arg_0x7eb72540, uint16_t arg_0x7eb726d0, error_t arg_0x7eb72858);
//#line 57
static   void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__UartStream__sendDone(uint8_t *arg_0x7eb747c8, uint16_t arg_0x7eb74958, error_t arg_0x7eb74ae0);
//# 41 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
static   error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__Uart__put(uint8_t arg_0x7e710338);
//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__subUartStdControl__start(void);
//# 13 "/opt/atos/tos/chips/cc2530/usart/HplCC2530UartGenericP.nc"
 uint8_t */*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_buf;
//#line 13
 uint8_t */*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_buf;
 uint16_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_len;
//#line 14
 uint16_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_len;
 uint16_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_pos;
//#line 15
 uint16_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_pos;


static  /*inline*/   error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__UartStdControl__start(void);
//#line 70
static  /*inline*/    void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__Uart__get(uint8_t _data);
//#line 106
static  /*inline*/    void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__Uart__putDone(void);
//# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
static   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0__get(uint8_t arg_0x7e7108d8);





static   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0__putDone(void);
//# 20 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
uint8_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf__data[1 << 6] = { 0 };
//#line 20
uint8_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_head = 0;
//#line 20
uint8_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_tail = 0;

static  /*inline*/  error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__doUart0Init(uint32_t baud);







static  /*inline*/   error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0StdControl__start(void);










static  /*inline*/    error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0__put(uint8_t _data);
//#line 82
static  /*inline*/   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__INT_UART0_RX__fired(void);







static  /*inline*/   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__INT_UART0_TX__fired(void);
//#line 104
static  /*inline*/   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__RxTaskHandler__handler(void);
//#line 121
static  /*inline*/   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__TxTaskHandler__handler(void);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__SubAMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__PacketEx__getPacketHeader(message_t *arg_0x7e6b4120);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__resendTask__postTask(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__Packet__payloadLength(message_t *arg_0x7eb25e90);
//#line 83
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__Packet__setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__SubAtosControl__start(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AMPacket__destination(message_t *arg_0x7eb425b0);
//#line 92
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AMPacket__setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
//# 48 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0____nesc_unnamed4306 {
//#line 48
  RfReliableMacRetrySendP__0__resendTask = 5U
};
//#line 48
typedef int /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0____nesc_sillytask_resendTask[/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__resendTask];
//#line 19
uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_sending = FALSE;
message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_msg;
uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_retry_times = 0;


static void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__signalDone(message_t *msg, error_t result);
//#line 43
static error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__doSend(message_t *msg);




static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__resendTask__runTask(void);
//#line 74
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);
//#line 129
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__SubAMSend__sendDone(message_t *msg, error_t error);
//#line 150
bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_started = FALSE;
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AtosControl__start(void);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__SubAMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMPacket__source(message_t *arg_0x7eb42b90);
//#line 67
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMPacket__destination(message_t *arg_0x7eb425b0);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__PacketEx__getPacketHeader(message_t *arg_0x7e6b4120);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__startOneShot(uint32_t arg_0x7e9a6d58);




static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__stop(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__SubPacket__payloadLength(message_t *arg_0x7eb25e90);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__RfReliableMacAck__receiveAckMessage(message_t *arg_0x7e652540, message_t *arg_0x7e6526f0, rf_ack_t *arg_0x7e6528a0);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDoneTask__postTask(void);
//# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__startOneShot(uint32_t arg_0x7e9a6d58);




static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__stop(void);
//# 31 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0____nesc_unnamed4307 {
//#line 31
  RfReliableMacSendP__0__signalDoneTask = 6U
};
//#line 31
typedef int /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0____nesc_sillytask_signalDoneTask[/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDoneTask];
//#line 26
uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending = FALSE;
message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg;
error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_result;


static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDoneTask__runTask(void);
//#line 51
static void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDone(message_t *msg, error_t result);
//#line 71
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__fired(void);







static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__fired(void);









static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);
//#line 139
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__SubAMSend__sendDone(message_t *msg, error_t error);
//#line 158
static  /*inline*/   message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__ReceiveAck__receive(message_t *ack_msg, void *payload, uint8_t len);
//#line 203
bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_started = FALSE;
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AtosControl__start(void);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMResource__send(am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);
//#line 39
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMResource__sendDone(message_t *msg, error_t error);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void AMResourceCenterP__AMResource__sendDone(
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
uint8_t arg_0x7e5f3dd8, 
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
message_t *arg_0x7e6080a8, error_t arg_0x7e608230);
//# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void AMResourceCenterP__Packet__setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t AMResourceCenterP__SubAtosControl__start(void);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  error_t AMResourceCenterP__CoreSend__send(message_t *arg_0x7e5e9998, uint8_t arg_0x7e5e9b20);
//# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t AMResourceCenterP__AMPacket__address(void);
//#line 110
static  void AMResourceCenterP__AMPacket__setSource(message_t *arg_0x7eb40a20, am_addr_t arg_0x7eb40bb0);
//#line 92
static  void AMResourceCenterP__AMPacket__setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
//#line 176
static  void AMResourceCenterP__AMPacket__setGroup(message_t *arg_0x7eb32010, am_group_t arg_0x7eb321a0);







static  am_group_t AMResourceCenterP__AMPacket__localGroup(void);
//# 17 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static  error_t AMResourceCenterP__AMResource__send(uint8_t resource_id, am_addr_t addr, message_t *msg, uint8_t len);
//#line 70
static  /*inline*/   void AMResourceCenterP__CoreSend__sendDone(message_t *msg, error_t result);





static   void AMResourceCenterP__AMResource__default__sendDone(uint8_t resource_id, message_t *msg, error_t error);





bool AMResourceCenterP__m_started = FALSE;
static  /*inline*/   error_t AMResourceCenterP__AtosControl__start(void);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SubCoreSend__send(message_t *arg_0x7e5e9998, uint8_t arg_0x7e5e9b20);
//# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__Random__rand16(void);
//# 49 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
static  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__enqueue(/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__t arg_0x7e5c8930);










static  /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__element(uint8_t arg_0x7e5c8ea8);






static  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__clear(void);
//#line 40
static  /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__dequeue(void);
//#line 9
static  bool /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__empty(void);







static  uint8_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__size(void);
//# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__CoreSend__sendDone(message_t *arg_0x7e5e84c0, error_t arg_0x7e5e8648);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext__postTask(void);
//# 23 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
enum /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0____nesc_unnamed4308 {
//#line 23
  RfMacBaseSendP__0__sendNext = 7U
};
//#line 23
typedef int /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0____nesc_sillytask_sendNext[/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext];
//#line 18
bool /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_sending = FALSE;

uint8_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_hardware_dsn = 0;


static  /*inline*/   void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext__runTask(void);
//#line 74
static  /*inline*/  int /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__indexOfMessage(uint8_t resource_id);
//#line 93
static  /*inline*/  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__enqueueMessage(message_t *msg);
//#line 117
static  /*inline*/   void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SubCoreSend__sendDone(message_t *msg, error_t result);
//#line 139
static  /*inline*/   error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__CoreSend__send(message_t *msg, uint8_t len);
//#line 185
bool /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_started = FALSE;
static  /*inline*/   error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__AtosControl__start(void);
//# 10 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue[4];
uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__head = 0;
uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__tail = 0;
uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__size = 0;

static  /*inline*/   bool /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__empty(void);







static  /*inline*/   uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__size(void);







static  /*inline*/   uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__maxSize(void);







static  /*inline*/   /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__head(void);







static  /*inline*/   /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__dequeue(void);
//#line 63
static  /*inline*/   error_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__enqueue(/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t newVal);
//#line 82
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__element(uint8_t idx);
//#line 96
static  /*inline*/   /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__remove(uint8_t idx);
//#line 124
static  /*inline*/   void /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__clear(void);
//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareTx.nc"
static  error_t RfMacBaseCsmaP__RfHardwareTx__txPrepare(uint8_t *arg_0x7e572c98, uint8_t arg_0x7e572e20);
static  error_t RfMacBaseCsmaP__RfHardwareTx__txGo(void);
//# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void RfMacBaseCsmaP__BackoffTimer__start(RfMacBaseCsmaP__BackoffTimer__size_type arg_0x7e953b10);






static   void RfMacBaseCsmaP__BackoffTimer__stop(void);
//# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RfMacBaseCsmaP__Random__rand16(void);
//# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
static  void RfMacBaseCsmaP__CoreSend__sendDone(message_t *arg_0x7e5e84c0, error_t arg_0x7e5e8648);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t RfMacBaseCsmaP__signalDoneTask__postTask(void);
//#line 56
static   error_t RfMacBaseCsmaP__doGo__postTask(void);
//# 7 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
static  void RfMacBaseCsmaP__FlashIEEE__GetIEEE(uint8_t *arg_0x7ea50068);
//# 53 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
enum RfMacBaseCsmaP____nesc_unnamed4309 {
//#line 53
  RfMacBaseCsmaP__signalDoneTask = 8U
};
//#line 53
typedef int RfMacBaseCsmaP____nesc_sillytask_signalDoneTask[RfMacBaseCsmaP__signalDoneTask];
//#line 105
enum RfMacBaseCsmaP____nesc_unnamed4310 {
//#line 105
  RfMacBaseCsmaP__doGo = 9U
};
//#line 105
typedef int RfMacBaseCsmaP____nesc_sillytask_doGo[RfMacBaseCsmaP__doGo];
//#line 20
enum RfMacBaseCsmaP____nesc_unnamed4311 {

  RfMacBaseCsmaP__RF_TIME_ACK_TURNAROUND = 7, 
  RfMacBaseCsmaP__RF_TIME_SYMBOL = 2, 
  RfMacBaseCsmaP__RF_BACKOFF_PERIOD = 20 / RfMacBaseCsmaP__RF_TIME_SYMBOL, 
  RfMacBaseCsmaP__RF_MIN_BACKOFF = 20 / RfMacBaseCsmaP__RF_TIME_SYMBOL, 
  RfMacBaseCsmaP__RF_CONGESTION_MAX = 100
};


enum RfMacBaseCsmaP____nesc_unnamed4312 {

  RfMacBaseCsmaP__CSMA_STATE_SAMPLE_CCA, 
  RfMacBaseCsmaP__CSMA_STATE_BEGIN_SEND
};


uint8_t RfMacBaseCsmaP__m_test_ieee[8];


uint8_t RfMacBaseCsmaP__m_state = RfMacBaseCsmaP__CSMA_STATE_SAMPLE_CCA;
uint8_t RfMacBaseCsmaP__m_congestion_count = 0;
error_t RfMacBaseCsmaP__m_result;
message_t *RfMacBaseCsmaP__m_msg = (void *)0;
bool RfMacBaseCsmaP__m_cancel = FALSE;


uint8_t RfMacBaseCsmaP__m_congestion_delay = 0;
uint16_t RfMacBaseCsmaP__m_this_delay = 0;
uint8_t RfMacBaseCsmaP__m_this_random = 0;



static  /*inline*/   void RfMacBaseCsmaP__signalDoneTask__runTask(void);










static void RfMacBaseCsmaP__signalDone(error_t result);










static  /*inline*/  uint32_t RfMacBaseCsmaP__initBackoffTimer(void);







static  /*inline*/  uint32_t RfMacBaseCsmaP__congestionBackoffTimer(void);







static  /*inline*/  void RfMacBaseCsmaP__congestion(void);
//#line 105
static  /*inline*/   void RfMacBaseCsmaP__doGo__runTask(void);
//#line 135
static  /*inline*/    void RfMacBaseCsmaP__BackoffTimer__fired(void);
//#line 164
static  /*inline*/   error_t RfMacBaseCsmaP__CoreSend__send(message_t *msg, uint8_t len);
//#line 225
bool RfMacBaseCsmaP__m_started = FALSE;
static  /*inline*/   error_t RfMacBaseCsmaP__AtosControl__start(void);
//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
static  void RfHardwareP__RfConfig__flush(void);
//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t RfHardwareP__RxControl__start(void);
//#line 74
static  error_t RfHardwareP__TxControl__start(void);
//# 13 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
static  void RfHardwareP__RfPower__oscOn(void);
//#line 6
static  void RfHardwareP__RfPower__radioOn(void);
//#line 4
static  void RfHardwareP__RfPower__reset(void);




static  void RfHardwareP__RfPower__rxOn(void);
//# 19 "/opt/atos/tos/chips/rf2530/hardware/RfHardwareP.nc"
static  /*inline*/   error_t RfHardwareP__AtosControl__start(void);
//# 11 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static  /*inline*/   void RfPowerP__RfPower__reset(void);




static  /*inline*/   void RfPowerP__RfPower__radioOn(void);
//#line 85
static  /*inline*/   void RfPowerP__RfPower__rxOn(void);
//#line 103
static  /*inline*/   void RfPowerP__RfPower__oscOn(void);
//# 17 "/opt/atos/tos/chips/rf2530/hardware/control/RfConfigP.nc"
uint8_t RfConfigP__m_channel;

uint8_t RfConfigP__m_tx_power;

bool RfConfigP__m_hw_auto_ack;

bool RfConfigP__m_address_recognition;


static  /*inline*/  void RfConfigP__writeChannel(void);







static  /*inline*/  void RfConfigP__writeFilter(void);
//#line 52
static  /*inline*/  void RfConfigP__writeFIFOPThrehold(void);




static  /*inline*/  void RfConfigP__writeTxPower(void);







static  /*inline*/  void RfConfigP__RfConfigWrite(void);
//#line 103
static  /*inline*/   error_t RfConfigP__Init__init(void);
//#line 135
static  /*inline*/   void RfConfigP__RfConfig__flush(void);







static  /*inline*/   uint8_t RfConfigP__RfConfig__getChannel(void);
//# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptRFErr__enableRisingEdge(void);
//# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareRx.nc"
static  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__RfHardwareRx__rxPacket(uint8_t *arg_0x7e5337e8, uint8_t arg_0x7e533970);
//# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptFIFOP__enableRisingEdge(void);
//# 23 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
uint8_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf__data[1 << 8] = { 0 };
//#line 23
uint8_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head = 0;
//#line 23
uint8_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail = 0;









static  /*inline*/   error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__StdControl__start(void);
//#line 58
uint8_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf[sizeof(message_t )];


static bool /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__readRfBuf(uint8_t *_data, uint8_t length);
//#line 78
static  /*inline*/  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__receiveNextPacket(void);
//#line 141
static  /*inline*/   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__TopTaskHandler__handler(void);
//#line 153
static  /*inline*/    void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptFIFOP__fired(void);
//#line 176
static  /*inline*/    void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptRFErr__fired(void);




static  /*inline*/   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__AtosScheduler__periodScheduler(void);
//# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void RfInterruptsP__InterruptRFErr__fired(void);
//#line 57
static   void RfInterruptsP__InterruptFIFOP__fired(void);
//# 36 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static  /*inline*/    error_t RfInterruptsP__InterruptFIFOP__enableRisingEdge(void);
//#line 59
static  /*inline*/    error_t RfInterruptsP__InterruptRFErr__enableRisingEdge(void);
//#line 80
static  /*inline*/   void RfInterruptsP__INT_RFERR__fired(void);
//#line 92
static  /*inline*/   void RfInterruptsP__INT_RF__fired(void);
//# 14 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareTxP.nc"
static  /*inline*/  void RfHardwareTxP__writeTxfifo(uint8_t *buf, uint8_t len);
//#line 27
static  /*inline*/   error_t RfHardwareTxP__StdControl__start(void);
//#line 45
static  /*inline*/   error_t RfHardwareTxP__RfHardwareTx__txPrepare(uint8_t *packet, uint8_t len);
//#line 91
static  /*inline*/   error_t RfHardwareTxP__RfHardwareTx__txGo(void);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired(void);
//#line 92
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type arg_0x7e952c28, /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type arg_0x7e952db8);
//#line 62
static   void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void);
//# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get(void);
//# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0;
/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;

enum /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1____nesc_unnamed4313 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 0, 
  TransformAlarmC__1__MAX_DELAY = (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )1 << /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static  /*inline*/    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void);
//#line 91
static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void);




static void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void);
//#line 140
static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt);









static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt);




static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void);
//#line 170
static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void);
//# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__get(void);






static   bool /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending(void);










static   void /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void);
//# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__upper_count_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper = 0;

enum /*Counter32khz32C.TransformCounterC*/TransformCounterC__1____nesc_unnamed4314 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type ) - /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__upper_count_type )2 << (/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__get(void);
//#line 125
static  /*inline*/    void /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void);
//# 10 "/opt/atos/tos/chips/cc2530/random/CC2530RandomLfsrP.nc"
static  /*inline*/   error_t CC2530RandomLfsrP__Init__init(void);
//#line 69
static   uint16_t CC2530RandomLfsrP__Random__rand16(void);
//# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
static  void RfPacketP__WatchDog__resetCpu(void);
//# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t RfPacketP__ActiveMessageAddress__amAddress(void);




static   am_group_t RfPacketP__ActiveMessageAddress__amGroup(void);
//# 17 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
bool RfPacketP__m_address_saved = FALSE;

am_addr_t RfPacketP__m_addr = TOS_AM_ADDRESS;


bool RfPacketP__m_group_saved = FALSE;
am_group_t RfPacketP__m_group = TOS_AM_GROUP;


static  am_addr_t RfPacketP__AMPacket__address(void);
//#line 49
static  /*inline*/   am_addr_t RfPacketP__AMPacket__destination(message_t *amsg);




static  /*inline*/   am_addr_t RfPacketP__AMPacket__source(message_t *amsg);




static  /*inline*/   void RfPacketP__AMPacket__setDestination(message_t *amsg, am_addr_t addr);




static  /*inline*/   void RfPacketP__AMPacket__setSource(message_t *amsg, am_addr_t addr);




static  /*inline*/   bool RfPacketP__AMPacket__isForMe(message_t *amsg);






static  /*inline*/   am_id_t RfPacketP__AMPacket__type(message_t *amsg);









static  /*inline*/   am_group_t RfPacketP__AMPacket__group(message_t *amsg);




static  /*inline*/   void RfPacketP__AMPacket__setGroup(message_t *amsg, am_group_t grp);




static  /*inline*/   am_group_t RfPacketP__AMPacket__localGroup(void);
//#line 124
static  /*inline*/   uint8_t RfPacketP__Packet__payloadLength(message_t *msg);




static  /*inline*/   void RfPacketP__Packet__setPayloadLength(message_t *msg, uint8_t len);




static  /*inline*/   uint8_t RfPacketP__Packet__maxPayloadLength(void);




static  void *RfPacketP__Packet__getPayload(message_t *msg, uint8_t *len);










static  /*inline*/   uint8_t RfPacketP__PacketEx__packetHeaderSize(void);









static  /*inline*/   bool RfPacketP__PacketEx__isValidPacket(message_t *msg);
//#line 182
static  /*inline*/    void RfPacketP__ActiveMessageAddress__changed(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t RfReliableMacPacketP__SubPacket__payloadLength(message_t *arg_0x7eb25e90);
//#line 108
static  void *RfReliableMacPacketP__SubPacket__getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
//#line 95
static  uint8_t RfReliableMacPacketP__SubPacket__maxPayloadLength(void);
//#line 83
static  void RfReliableMacPacketP__SubPacket__setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
//# 8 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  bool RfReliableMacPacketP__SubPacketEx__isValidPacket(message_t *arg_0x7e6b45f8);
//# 20 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  /*inline*/   uint8_t RfReliableMacPacketP__Packet__payloadLength(message_t *msg);




static  /*inline*/   void RfReliableMacPacketP__Packet__setPayloadLength(message_t *msg, uint8_t len);




static  /*inline*/   uint8_t RfReliableMacPacketP__Packet__maxPayloadLength(void);




static  void *RfReliableMacPacketP__Packet__getPayload(message_t *msg, uint8_t *len);










static  /*inline*/   uint8_t RfReliableMacPacketP__PacketEx__packetHeaderSize(void);




static  /*inline*/   void *RfReliableMacPacketP__PacketEx__getPacketHeader(message_t *msg);




static  bool RfReliableMacPacketP__PacketEx__isValidPacket(message_t *msg);
//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckEvent.nc"
static  uint8_t RfReliableMacAckP__RfReliableMacAckEvent__fillAckMessage(message_t *arg_0x7e3eab10, uint8_t arg_0x7e3eaca0, message_t *arg_0x7e3eae50, rf_ack_t *arg_0x7e3e7030);
static  void RfReliableMacAckP__RfReliableMacAckEvent__receiveAckMessage(message_t *arg_0x7e3e7508, message_t *arg_0x7e3e76b8, rf_ack_t *arg_0x7e3e7868);
//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static  /*inline*/  uint8_t RfReliableMacAckP__fillAckMessageDefault(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack);









static  uint8_t RfReliableMacAckP__RfReliableMacAck__fillAckMessage(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack);










static  /*inline*/   void RfReliableMacAckP__RfReliableMacAck__receiveAckMessage(message_t *send_msg, message_t *ack_msg, rf_ack_t *ack);




static  /*inline*/    uint8_t RfReliableMacAckP__RfReliableMacAckEvent__default__fillAckMessage(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack);




static  /*inline*/    void RfReliableMacAckP__RfReliableMacAckEvent__default__receiveAckMessage(message_t *send_msg, message_t *ack_msg, rf_ack_t *ack);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__PacketEx__getPacketHeader(message_t *arg_0x7e6b4120);

static  bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__PacketEx__isValidPacket(message_t *arg_0x7e6b45f8);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  uint8_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__RfReliableMacAck__fillAckMessage(message_t *arg_0x7e653b48, uint8_t arg_0x7e653cd8, message_t *arg_0x7e653e88, rf_ack_t *arg_0x7e652068);
//# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
static  bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__DsnFilter__filter(uint16_t arg_0x7e3c9ba8, uint8_t arg_0x7e3c9d30);
//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__SubPacket__getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAckTask__postTask(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__Receive__receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMSendAck__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 166 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_group_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__group(message_t *arg_0x7eb348b8);
//#line 77
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__source(message_t *arg_0x7eb42b90);
//#line 67
static  am_addr_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__destination(message_t *arg_0x7eb425b0);
//#line 92
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
//#line 176
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__setGroup(message_t *arg_0x7eb32010, am_group_t arg_0x7eb321a0);
//# 47 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
enum /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0____nesc_unnamed4315 {
//#line 47
  RfReliableMacReceiveP__0__sendAckTask = 10U
};
//#line 47
typedef int /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0____nesc_sillytask_sendAckTask[/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAckTask];
//#line 37
message_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_ack_msg;

static  /*inline*/  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAck(message_t *msg);







static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAckTask__runTask(void);




static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMSendAck__sendDone(message_t *msg, error_t result);




static  /*inline*/   message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
//#line 100
bool /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_started = FALSE;
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AtosControl__start(void);
//# 8 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  bool RfActiveMessageP__PacketEx__isValidPacket(message_t *arg_0x7e6b45f8);
//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *RfActiveMessageP__Packet__getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *RfActiveMessageP__Snoop__receive(
//# 8 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
uint8_t arg_0x7e398bb0, 
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//#line 67
static  message_t *RfActiveMessageP__Receive__receive(
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
uint8_t arg_0x7e3983f8, 
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_id_t RfActiveMessageP__AMPacket__type(message_t *arg_0x7eb35aa0);
//#line 125
static  bool RfActiveMessageP__AMPacket__isForMe(message_t *arg_0x7eb35370);
//# 20 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static  /*inline*/   void RfActiveMessageP__CoreReceive__receive(message_t *msg);
//#line 51
static  /*inline*/    message_t *RfActiveMessageP__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);
//#line 67
static  /*inline*/    message_t *RfActiveMessageP__Snoop__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);






bool RfActiveMessageP__m_started = FALSE;
static  /*inline*/   error_t RfActiveMessageP__AtosControl__start(void);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreReceive.nc"
static  void RfMacBaseReceiveP__CoreReceive__receive(message_t *arg_0x7e393030);
//# 12 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseReceiveP.nc"
static  /*inline*/   void RfMacBaseReceiveP__RfHardwareRx__rxPacket(uint8_t *buf, uint8_t len);
//# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t AtosMacP__Random__rand16(void);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t AtosMacP__SubAtosControl__start(void);
//#line 4
static  error_t AtosMacP__HardwareAtosControl__start(void);
//# 15 "/opt/atos/tos/lib/atos/net/AtosMac/AtosMacP.nc"
bool AtosMacP__m_started = FALSE;

static  /*inline*/   error_t AtosMacP__AtosControl__start(void);
//# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
static  uint8_t AtosNetStdP__RfConfig__getChannel(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t AtosNetStdP__Packet__payloadLength(message_t *arg_0x7eb25e90);
//#line 108
static  void *AtosNetStdP__Packet__getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t AtosNetStdP__AMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
static  void AtosNetStdP__WatchDog__resetCpu(void);
//# 17 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
static  void AtosNetStdP__AtosNetStd__receivedReboot(anstd_reboot_t *arg_0x7e2fc6a8);

static  void AtosNetStdP__AtosNetStd__receivedTraceAck(message_t *arg_0x7e2fa1f8, anstd_trace_ack_t *arg_0x7e2fa3b8);
//#line 15
static  void AtosNetStdP__AtosNetStd__receivedDiscovery(anstd_discovery_t *arg_0x7e2fdd20);


static  void AtosNetStdP__AtosNetStd__receivedTrace(message_t *arg_0x7e2fcb58, anstd_trace_t *arg_0x7e2fcd08);
//#line 12
static  void AtosNetStdP__AtosNetStd__beforeNodeStatusUp(anstd_node_status_t *arg_0x7e2fd1e0);

static  void AtosNetStdP__AtosNetStd__receivedNodeStatusUp(message_t *arg_0x7e2fd698, anstd_node_status_t *arg_0x7e2fd850);

static  void AtosNetStdP__AtosNetStd__receivedSetIEEE(anstd_setieee_t *arg_0x7e2fc1f8);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AtosNetStdP__nodeStatusUpTask__postTask(void);
//# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void AtosNetStdP__RebootTimer__startPeriodic(uint32_t arg_0x7e9a6788);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AtosNetStdP__rebootTask__postTask(void);
//# 8 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
static  void AtosNetStdP__FlashIEEE__WriteIEEE(uint8_t *arg_0x7ea50510);
//#line 7
static  void AtosNetStdP__FlashIEEE__GetIEEE(uint8_t *arg_0x7ea50068);
//# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t AtosNetStdP__AMPacket__source(message_t *arg_0x7eb42b90);
//#line 57
static  am_addr_t AtosNetStdP__AMPacket__address(void);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AtosNetStdP__sendDoneCheck__postTask(void);
//# 54 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
enum AtosNetStdP____nesc_unnamed4316 {
//#line 54
  AtosNetStdP__rebootTask = 11U
};
//#line 54
typedef int AtosNetStdP____nesc_sillytask_rebootTask[AtosNetStdP__rebootTask];




enum AtosNetStdP____nesc_unnamed4317 {
//#line 59
  AtosNetStdP__nodeStatusUpTask = 12U
};
//#line 59
typedef int AtosNetStdP____nesc_sillytask_nodeStatusUpTask[AtosNetStdP__nodeStatusUpTask];
//#line 350
enum AtosNetStdP____nesc_unnamed4318 {
//#line 350
  AtosNetStdP__sendDoneCheck = 13U
};
//#line 350
typedef int AtosNetStdP____nesc_sillytask_sendDoneCheck[AtosNetStdP__sendDoneCheck];
//#line 43
message_t AtosNetStdP__m_send_msg;
uint16_t AtosNetStdP__m_ack_addr = 0xFFFF;
uint8_t AtosNetStdP__m_node_status = 0;



static  /*inline*/   void AtosNetStdP__RebootTimer__fired(void);




static  /*inline*/   void AtosNetStdP__rebootTask__runTask(void);




static  /*inline*/   void AtosNetStdP__nodeStatusUpTask__runTask(void);









static  /*inline*/  void AtosNetStdP__receiveNodeStatusUp(message_t *msg, anstd_node_status_t *status);





static  /*inline*/  void AtosNetStdP__receiveDiscovery(message_t *msg, anstd_discovery_t *discovery);








static  /*inline*/  void AtosNetStdP__receiveSetIEEE(message_t *msg, anstd_setieee_t *setieee);









static  /*inline*/  void AtosNetStdP__receiveReboot(message_t *msg, anstd_reboot_t *reboot);







static int AtosNetStdP__indexOfTraceItem(anstd_trace_t *trace, uint16_t node_id);
//#line 116
static void AtosNetStdP__traceBackward(message_t *msg, anstd_trace_ack_t *trace_ack, int index);
//#line 128
static  /*inline*/  void AtosNetStdP__traceEnd(message_t *msg, anstd_trace_t *trace, int index);





static  /*inline*/  void AtosNetStdP__traceForward(message_t *msg, anstd_trace_t *trace, int index);
//#line 151
static  /*inline*/  void AtosNetStdP__receiveTrace(message_t *msg, anstd_trace_t *trace);
//#line 177
static  /*inline*/  void AtosNetStdP__receiveTraceAck(message_t *msg, anstd_trace_ack_t *trace_ack);
//#line 203
static  /*inline*/   message_t *AtosNetStdP__Receive__receive(message_t *msg, void *payload, uint8_t len);
//#line 241
static  /*inline*/   error_t AtosNetStdP__AtosNetStd__sendNodeStatusUp(uint16_t address);
//#line 350
static  /*inline*/   void AtosNetStdP__sendDoneCheck__runTask(void);
//#line 368
static  /*inline*/   void AtosNetStdP__AMSend__sendDone(message_t *msg, error_t error);









static  /*inline*/    void AtosNetStdP__AtosNetStd__default__beforeNodeStatusUp(anstd_node_status_t *status);



static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedNodeStatusUp(message_t *msg, anstd_node_status_t *status);



static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedDiscovery(anstd_discovery_t *discovery);



static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedSetIEEE(anstd_setieee_t *setieee);



static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedReboot(anstd_reboot_t *reboot);




static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedTrace(message_t *msg, anstd_trace_t *trace);



static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedTraceAck(message_t *msg, anstd_trace_t *trace_ack);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__SubAMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__PacketEx__getPacketHeader(message_t *arg_0x7e6b4120);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__resendTask__postTask(void);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__Packet__payloadLength(message_t *arg_0x7eb25e90);
//#line 83
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__Packet__setPayloadLength(message_t *arg_0x7eb24538, uint8_t arg_0x7eb246c0);
//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__SubAtosControl__start(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AMPacket__destination(message_t *arg_0x7eb425b0);
//#line 92
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AMPacket__setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
//# 48 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1____nesc_unnamed4319 {
//#line 48
  RfReliableMacRetrySendP__1__resendTask = 14U
};
//#line 48
typedef int /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1____nesc_sillytask_resendTask[/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__resendTask];
//#line 19
uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_sending = FALSE;
message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_msg;
uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_retry_times = 0;


static void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__signalDone(message_t *msg, error_t result);
//#line 43
static error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__doSend(message_t *msg);




static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__resendTask__runTask(void);
//#line 74
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);
//#line 129
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__SubAMSend__sendDone(message_t *msg, error_t error);
//#line 150
bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_started = FALSE;
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AtosControl__start(void);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__SubAMSend__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMPacket__source(message_t *arg_0x7eb42b90);
//#line 67
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMPacket__destination(message_t *arg_0x7eb425b0);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__PacketEx__getPacketHeader(message_t *arg_0x7e6b4120);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__startOneShot(uint32_t arg_0x7e9a6d58);




static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__stop(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__SubPacket__payloadLength(message_t *arg_0x7eb25e90);
//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__RfReliableMacAck__receiveAckMessage(message_t *arg_0x7e652540, message_t *arg_0x7e6526f0, rf_ack_t *arg_0x7e6528a0);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDoneTask__postTask(void);
//# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__startOneShot(uint32_t arg_0x7e9a6d58);




static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__stop(void);
//# 31 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1____nesc_unnamed4320 {
//#line 31
  RfReliableMacSendP__1__signalDoneTask = 15U
};
//#line 31
typedef int /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1____nesc_sillytask_signalDoneTask[/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDoneTask];
//#line 26
uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending = FALSE;
message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg;
error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_result;


static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDoneTask__runTask(void);
//#line 51
static void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDone(message_t *msg, error_t result);
//#line 71
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__fired(void);







static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__fired(void);









static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);
//#line 139
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__SubAMSend__sendDone(message_t *msg, error_t error);
//#line 158
static  /*inline*/   message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__ReceiveAck__receive(message_t *ack_msg, void *payload, uint8_t len);
//#line 203
bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_started = FALSE;
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AtosControl__start(void);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMResource__send(am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);
//#line 39
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMResource__sendDone(message_t *msg, error_t error);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
static  void */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__PacketEx__getPacketHeader(message_t *arg_0x7e6b4120);

static  bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__PacketEx__isValidPacket(message_t *arg_0x7e6b45f8);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
static  uint8_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__RfReliableMacAck__fillAckMessage(message_t *arg_0x7e653b48, uint8_t arg_0x7e653cd8, message_t *arg_0x7e653e88, rf_ack_t *arg_0x7e652068);
//# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
static  bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__DsnFilter__filter(uint16_t arg_0x7e3c9ba8, uint8_t arg_0x7e3c9d30);
//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__SubPacket__getPayload(message_t *arg_0x7eb23358, uint8_t *arg_0x7eb23500);
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAckTask__postTask(void);
//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__Receive__receive(message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010);
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMSendAck__send(am_addr_t arg_0x7eb61810, message_t *arg_0x7eb619c0, uint8_t arg_0x7eb61b48);
//# 166 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_group_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__group(message_t *arg_0x7eb348b8);
//#line 77
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__source(message_t *arg_0x7eb42b90);
//#line 67
static  am_addr_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__destination(message_t *arg_0x7eb425b0);
//#line 92
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__setDestination(message_t *arg_0x7eb40190, am_addr_t arg_0x7eb40320);
//#line 176
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__setGroup(message_t *arg_0x7eb32010, am_group_t arg_0x7eb321a0);
//# 47 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
enum /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1____nesc_unnamed4321 {
//#line 47
  RfReliableMacReceiveP__1__sendAckTask = 16U
};
//#line 47
typedef int /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1____nesc_sillytask_sendAckTask[/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAckTask];
//#line 37
message_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_ack_msg;

static  /*inline*/  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAck(message_t *msg);







static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAckTask__runTask(void);




static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMSendAck__sendDone(message_t *msg, error_t result);




static  /*inline*/   message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
//#line 100
bool /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_started = FALSE;
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AtosControl__start(void);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMResource__send(am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);
//#line 39
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMResource__sendDone(message_t *msg, error_t error);
//# 9 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
uint8_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_index = 0;
uint16_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_address[100];
uint8_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_dsn[1][100];


static  /*inline*/  int /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__indexOfAddress(uint16_t addr);
//#line 31
static  /*inline*/  int /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__findNextAddress(void);
//#line 51
static bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__filterDsn(uint16_t addr, uint8_t field_id, uint8_t dsn);
//#line 80
static  /*inline*/   error_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__Init__init(void);
//#line 92
static  /*inline*/   bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__DsnFilter__filter(uint8_t field_id, uint16_t addr, uint8_t dsn);
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMResource__send(am_addr_t arg_0x7e609888, message_t *arg_0x7e609a38, uint8_t arg_0x7e609bc0);
//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMSend__sendDone(message_t *arg_0x7eb60eb8, error_t arg_0x7eb55068);
//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);
//#line 39
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMResource__sendDone(message_t *msg, error_t error);
//# 71 "/opt/atos/tos/chips/cc2530/mcs51/mcs51hardware.h"
   /*inline*/   __nesc_atomic_t __nesc_atomic_start(void )
//#line 71
{
  __nesc_atomic_t tmp = EA;

//#line 73
  EA = 0;
  return tmp;
}

   /*inline*/   void __nesc_atomic_end(__nesc_atomic_t oldSreg)
//#line 77
{
  EA = oldSreg;
}

//# 181 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static  /*inline*/   void SchedulerBasicP__Scheduler__init(void)
{
  /* atomic removed: atomic calls only */
  {






    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = 0;
    SchedulerBasicP__m_tail = 0;
  }
}

//# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
#define RealMainP__Scheduler__init(void) SchedulerBasicP__Scheduler__init()
//# 129 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static  /*inline*/   error_t FlashIEEEP__Init__init(void)
{
  /* atomic removed: atomic calls only */
  {


    FlashIEEEP__readFromFlash();

    FlashIEEEP__FlashIEEE__WriteToRegister();
    FlashIEEEP__FlashIEEE__WriteToAM();

    {
      unsigned char __nesc_temp = 
//#line 140
      0;

//#line 140
      return __nesc_temp;
    }
  }
}

//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
#define PlatformP__PlatformInit__init(void) FlashIEEEP__Init__init()
//# 44 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static  /*inline*/  void uart0SetMode(void)
{
  U0CSR |= 0x80u | 0x40u;
  U0UCR |= 0x2u | 0x80u;
}

//#line 34
static  /*inline*/  void uart0PinMap(bool map)
{



  PERCFG &= ~0x1u;

  P0_ALT |= 0x0Cu;
}







static  /*inline*/  void uart0Init(uint32_t baud)
{
  uart0PinMap(TRUE);
  uart0SetBaud(baud);
  uart0SetMode();
}

//# 40 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
static  /*inline*/  void ATOS_DEBUG_UART_INIT(void)
{
  {
//#line 42
    uart0Init(9600);
  }
//#line 42
  ;
}

//# 52 "/opt/atos/tos/platforms/antc5/boot/PlatformP.nc"
static  /*inline*/   error_t PlatformP__Init__init(void)
//#line 52
{


  if (PlatformP__clockSelect32k(0) != 0) {
      PlatformP__clockSetMainSrc(1);
      if (PlatformP__clockSelect32k(0) != 0) {
        }
    }

  PlatformP__clockSetMainSrc(0);


  ATOS_DEBUG_UART_INIT();



  {
//#line 68
    {
//#line 68
      P1_DIR |= 1 << 2;
//#line 68
      P1_ALT &= ~(1 << 2);
    }
//#line 68
    ;
//#line 68
    {
//#line 68
      P1_DIR |= 1 << 3;
//#line 68
      P1_ALT &= ~(1 << 3);
    }
//#line 68
    ;
  }
//#line 68
  ;

  PlatformP__PlatformInit__init();

  return 0;
}

//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
#define RealMainP__PlatformInit__init(void) PlatformP__Init__init()
//# 51 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
static  /*inline*/   error_t HalFlashP__HalFlash__write(uint32_t destination, uint8_t *source, uint16_t length)
{
  HalFlashP__HalCC2530FlashWrite(destination, source, length);

  return 0;
}

//# 5 "/opt/atos/tos/chips/cc2530/flash/HalFlash.nc"
#define FlashIEEEP__HalFlash__write(arg_0x7ea32af8,arg_0x7ea32ca0,arg_0x7ea32e30) HalFlashP__HalFlash__write(arg_0x7ea32af8, arg_0x7ea32ca0, arg_0x7ea32e30)


#define FlashIEEEP__HalFlash__erase(arg_0x7ea30338) HalFlashP__HalFlash__erase(arg_0x7ea30338)
//# 44 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
static  /*inline*/   error_t HalFlashP__HalFlash__read(uint8_t *destination, uint32_t source, uint16_t length)
{
  HalFlashP__HalCC2530FlashRead(destination, source, length);

  return 0;
}

//# 3 "/opt/atos/tos/chips/cc2530/flash/HalFlash.nc"
#define FlashIEEEP__HalFlash__read(arg_0x7ea32330,arg_0x7ea324c0,arg_0x7ea32650) HalFlashP__HalFlash__read(arg_0x7ea32330, arg_0x7ea324c0, arg_0x7ea32650)
//# 52 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static  /*inline*/  void FlashIEEEP__ieeeProtect(void)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t i;
    uint8_t tmp[0x4];
    uint8_t tmp_ieee[sizeof FlashIEEEP__m_ieee_flash];




    for (i = 0; i < sizeof FlashIEEEP__m_ieee_flash; ++i) 
      {

        if (FlashIEEEP__m_ieee_flash[i] != 0xFF) 
          {
            break;
          }
      }

    if (i >= sizeof FlashIEEEP__m_ieee_flash) 
      {

        FlashIEEEP__HalFlash__read(FlashIEEEP__m_ieee_flash, 0xF800 + 0x4, sizeof FlashIEEEP__m_ieee_flash);
      }
    else 
      {

        FlashIEEEP__HalFlash__read(tmp_ieee, 0xF800 + 0x4, sizeof tmp_ieee);

        for (i = 0; i < sizeof tmp_ieee; ++i) 
          {


            if (tmp_ieee[i] != FlashIEEEP__m_ieee_flash[i]) 
              {
                break;
              }
          }

        if (i < sizeof tmp_ieee) 
          {

            FlashIEEEP__HalFlash__read(tmp, 0xF800, 0x4);
            FlashIEEEP__HalFlash__erase(0xF800);

            FlashIEEEP__HalFlash__write(0xF800, tmp, 0x4);
            FlashIEEEP__HalFlash__write(0xF800 + 0x4, FlashIEEEP__m_ieee_flash, sizeof FlashIEEEP__m_ieee_flash);
          }
      }
  }
}

//#line 228
static  /*inline*/    void FlashIEEEP__ActiveMessageAddress__changed(void)
{
}

//# 182 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/    void RfPacketP__ActiveMessageAddress__changed(void)
{
  /* atomic removed: atomic calls only */
  {
    RfPacketP__m_address_saved = FALSE;
    RfPacketP__m_group_saved = FALSE;
  }
}

//# 58 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
 /*inline*/  static   void ActiveMessageAddressC__ActiveMessageAddress__changed(void){
//#line 58
  RfPacketP__ActiveMessageAddress__changed();
//#line 58
  FlashIEEEP__ActiveMessageAddress__changed();
//#line 58
}
//#line 58
//# 70 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static  /*inline*/    void ActiveMessageAddressC__ActiveMessageAddress__setAddress(am_group_t myGroup, am_addr_t myAddr)
//#line 70
{
  /* atomic removed: atomic calls only */
//#line 71
  {
    ActiveMessageAddressC__addr = myAddr;
    ActiveMessageAddressC__group = myGroup;
  }
  ActiveMessageAddressC__ActiveMessageAddress__changed();
}

//# 43 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
#define FlashIEEEP__ActiveMessageAddress__setAddress(arg_0x7ea35030,arg_0x7ea351c0) ActiveMessageAddressC__ActiveMessageAddress__setAddress(arg_0x7ea35030, arg_0x7ea351c0)
//# 54 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
#define RealMainP__Scheduler__runNextTask(void) SchedulerBasicP__Scheduler__runNextTask()
//# 276 "/usr/lib/ncc/nesc_nx.h"
static   /*inline*/   uint16_t __nesc_ntoh_leuint16(const void *source)
//#line 276
{
  const uint8_t *base = source;

//#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

//# 49 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   am_addr_t RfPacketP__AMPacket__destination(message_t *amsg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->dest);
}

//# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP__1__AMPacket__destination(arg_0x7eb425b0) RfPacketP__AMPacket__destination(arg_0x7eb425b0)
//# 251 "/usr/lib/ncc/nesc_nx.h"
static   /*inline*/   uint8_t __nesc_hton_leuint8(void *target, uint8_t value)
//#line 251
{
  uint8_t *base = target;

//#line 253
  base[0] = value;
  return value;
}

//#line 240
static   /*inline*/   uint8_t __nesc_hton_uint8(void *target, uint8_t value)
//#line 240
{
  uint8_t *base = target;

//#line 242
  base[0] = value;
  return value;
}

//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
#define AMResourceP__2__AMResource__send(arg_0x7e609888,arg_0x7e609a38,arg_0x7e609bc0) AMResourceCenterP__AMResource__send(AMResourceC__3__AM_RESOURCE_ID, arg_0x7e609888, arg_0x7e609a38, arg_0x7e609bc0)
//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      __nesc_hton_uint8((unsigned char *)&((rf_meta_data_t *)msg->meta_data)->resource_id, 2);
      __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->type, 241);
    }
//#line 17
    __nesc_atomic_end(__nesc_atomic); }

  return /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMResource__send(addr, msg, len);
}

//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacReceiveP__1__AMSendAck__send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) AMResourceP__2__AMSend__send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
//# 39 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static  /*inline*/  void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAck(message_t *msg)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMSendAck__send(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__destination(msg), msg, sizeof(rf_ack_t )) != 0) 
    {
    }
}


static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAckTask__runTask(void)
{
  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAck(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_ack_msg);
}

//# 129 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   void RfPacketP__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length, len + (sizeof(rf_header_t ) - 1 + sizeof(uint16_t )));
}

//# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define AMResourceCenterP__Packet__setPayloadLength(arg_0x7eb24538,arg_0x7eb246c0) RfPacketP__Packet__setPayloadLength(arg_0x7eb24538, arg_0x7eb246c0)
//# 281 "/usr/lib/ncc/nesc_nx.h"
static   /*inline*/   uint16_t __nesc_hton_leuint16(void *target, uint16_t value)
//#line 281
{
  uint8_t *base = target;

//#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

//# 91 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   void RfPacketP__AMPacket__setGroup(message_t *amsg, am_group_t grp)
{
  __nesc_hton_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->destpan, grp);
}

//# 176 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AMResourceCenterP__AMPacket__setGroup(arg_0x7eb32010,arg_0x7eb321a0) RfPacketP__AMPacket__setGroup(arg_0x7eb32010, arg_0x7eb321a0)
//# 82 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static  /*inline*/    am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void)
//#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
//#line 84
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

//# 53 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
#define RfPacketP__ActiveMessageAddress__amGroup(void) ActiveMessageAddressC__ActiveMessageAddress__amGroup()
//# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
#define RfPacketP__WatchDog__resetCpu(void) WatchDogP__WatchDog__resetCpu()
//# 96 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   am_group_t RfPacketP__AMPacket__localGroup(void)
{
  /* atomic removed: atomic calls only */
  {
    if (!RfPacketP__m_group_saved) 
      {
        RfPacketP__m_group = RfPacketP__ActiveMessageAddress__amGroup();
        RfPacketP__m_group_saved = TRUE;
      }


    if (RfPacketP__m_group != RfPacketP__ActiveMessageAddress__amGroup()) 
      {


        RfPacketP__WatchDog__resetCpu();
      }
  }


  return RfPacketP__ActiveMessageAddress__amGroup();
}

//# 184 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AMResourceCenterP__AMPacket__localGroup(void) RfPacketP__AMPacket__localGroup()
//# 59 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   void RfPacketP__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
{
  __nesc_hton_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->dest, addr);
}

//# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AMResourceCenterP__AMPacket__setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP__AMPacket__setDestination(arg_0x7eb40190, arg_0x7eb40320)
//# 64 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   void RfPacketP__AMPacket__setSource(message_t *amsg, am_addr_t addr)
{
  __nesc_hton_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->src, addr);
}

//# 110 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AMResourceCenterP__AMPacket__setSource(arg_0x7eb40a20,arg_0x7eb40bb0) RfPacketP__AMPacket__setSource(arg_0x7eb40a20, arg_0x7eb40bb0)
//#line 57
#define AMResourceCenterP__AMPacket__address(void) RfPacketP__AMPacket__address()
//# 61 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static  /*inline*/    am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void)
//#line 61
{
  return ActiveMessageAddressC__amAddress();
}

//# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
#define RfPacketP__ActiveMessageAddress__amAddress(void) ActiveMessageAddressC__ActiveMessageAddress__amAddress()
//# 235 "/usr/lib/ncc/nesc_nx.h"
static   /*inline*/   uint8_t __nesc_ntoh_uint8(const void *source)
//#line 235
{
  const uint8_t *base = source;

//#line 237
  return base[0];
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfMacBaseSendP__0__sendNext__postTask(void) SchedulerBasicP__TaskBasic__postTask(RfMacBaseSendP__0__sendNext)
//# 31 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
static  /*inline*/   uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__maxSize(void)
{
  /* atomic removed: atomic calls only */
  {
    {
      unsigned char __nesc_temp = 
//#line 35
      4;

//#line 35
      return __nesc_temp;
    }
  }
}

//#line 23
static  /*inline*/   uint8_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__size(void)
{
  /* atomic removed: atomic calls only */
  {
    {
      unsigned char __nesc_temp = 
//#line 27
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__size;

//#line 27
      return __nesc_temp;
    }
  }
}

//#line 63
static  /*inline*/   error_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__enqueue(/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t newVal)
{
  /* atomic removed: atomic calls only */
  {
    if (/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__size() < /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__maxSize()) 
      {
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue[/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__tail] = newVal;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__tail++;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__tail %= 4;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__size++;
        {
          unsigned char __nesc_temp = 
//#line 73
          0;

//#line 73
          return __nesc_temp;
        }
      }
    else {
        {
          unsigned char __nesc_temp = 
//#line 77
          FAIL;

//#line 77
          return __nesc_temp;
        }
      }
  }
}

//# 49 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
#define RfMacBaseSendP__0__SendQueue__enqueue(arg_0x7e5c8930) QueueExC__0__QueueEx__enqueue(arg_0x7e5c8930)
//#line 60
#define RfMacBaseSendP__0__SendQueue__element(arg_0x7e5c8ea8) QueueExC__0__QueueEx__element(arg_0x7e5c8ea8)
//#line 17
#define RfMacBaseSendP__0__SendQueue__size(void) QueueExC__0__QueueEx__size()
//# 74 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
static  /*inline*/  int /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__indexOfMessage(uint8_t resource_id)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t i;
    uint8_t size = /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__size();

//#line 80
    for (i = 0; i < size; ++i) 
      {
        message_t *msg = (message_t *)/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__element(i);

//#line 83
        if (msg != (void *)0 && __nesc_ntoh_uint8((unsigned char *)&((rf_meta_data_t *)msg->meta_data)->resource_id) == resource_id) 
          {
            {
              int __nesc_temp = 
//#line 85
              i;

//#line 85
              return __nesc_temp;
            }
          }
      }
    {
      int __nesc_temp = 
//#line 89
      -1;

//#line 89
      return __nesc_temp;
    }
  }
}

//#line 93
static  /*inline*/  error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__enqueueMessage(message_t *msg)
{
  /* atomic removed: atomic calls only */
  {
    if (/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__indexOfMessage(__nesc_ntoh_uint8((unsigned char *)&((rf_meta_data_t *)msg->meta_data)->resource_id)) >= 0) 
      {
        {
          unsigned char __nesc_temp = 
//#line 99
          ERR_MAC_SEND_RESOURCE_EXISTS;

//#line 99
          return __nesc_temp;
        }
      }


    if (/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__enqueue(msg) != 0) 
      {
        {
          unsigned char __nesc_temp = 
//#line 106
          ERR_MAC_SEND_RESOURCE_FULL;

//#line 106
          return __nesc_temp;
        }
      }

    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext__postTask();

    {
      unsigned char __nesc_temp = 
//#line 112
      0;

//#line 112
      return __nesc_temp;
    }
  }
}

//#line 139
static  /*inline*/   error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__CoreSend__send(message_t *msg, uint8_t len)
{
  /* atomic removed: atomic calls only */

  {



    __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->dsn, ++/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_hardware_dsn);





    {
      unsigned char __nesc_temp = 
//#line 153
      /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__enqueueMessage(msg);

//#line 153
      return __nesc_temp;
    }
  }
}

//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
#define AMResourceCenterP__CoreSend__send(arg_0x7e5e9998,arg_0x7e5e9b20) RfMacBaseSendP__0__CoreSend__send(arg_0x7e5e9998, arg_0x7e5e9b20)
//# 108 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static  /*inline*/  bool SchedulerBasicP__isWaiting(uint8_t id)
{




  uint8_t i = SchedulerBasicP__m_head % SchedulerBasicP__NUM_TASKS;

  while (i != SchedulerBasicP__m_tail) 
    {
      if (SchedulerBasicP__m_next[i] == id) 
        {
          return TRUE;
        }

      i = (i + 1) % SchedulerBasicP__NUM_TASKS;
      SchedulerBasicP__m_tail = SchedulerBasicP__m_tail % SchedulerBasicP__NUM_TASKS;
    }

  return FALSE;
}



static  /*inline*/  bool SchedulerBasicP__pushTask(uint8_t id)
{
  /* atomic removed: atomic calls only */
//#line 156
  {
    id = id % SchedulerBasicP__NUM_TASKS;

    if (!SchedulerBasicP__isWaiting(id)) 
      {
        if ((SchedulerBasicP__m_tail + 1) % SchedulerBasicP__NUM_TASKS == SchedulerBasicP__m_head) 
          {

            {
              unsigned char __nesc_temp = 
//#line 164
              FALSE;

//#line 164
              return __nesc_temp;
            }
          }
        SchedulerBasicP__m_tail = SchedulerBasicP__m_tail % SchedulerBasicP__NUM_TASKS;
        SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
        SchedulerBasicP__m_tail = (SchedulerBasicP__m_tail + 1) % SchedulerBasicP__NUM_TASKS;
        {
          unsigned char __nesc_temp = 
//#line 170
          TRUE;

//#line 170
          return __nesc_temp;
        }
      }
    else {
        {
          unsigned char __nesc_temp = 
//#line 174
          FALSE;

//#line 174
          return __nesc_temp;
        }
      }
  }
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacRetrySendP__1__resendTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(RfReliableMacRetrySendP__1__resendTask)
//# 129 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__SubAMSend__sendDone(message_t *msg, error_t error)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_sending) 
    {
      if (error == 0) 
        {
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__signalDone(msg, error);
        }
      else 
        {
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__resendTask__postTask();
        }
    }
}

//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacSendP__1__AMSend__sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacRetrySendP__1__SubAMSend__sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
//# 31 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDoneTask__runTask(void)
{
  message_t *msg;
  error_t result;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending) 
        {
          {
//#line 40
            __nesc_atomic_end(__nesc_atomic); 
//#line 40
            return;
          }
        }
      msg = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg;
      result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_result;
    }
//#line 45
    __nesc_atomic_end(__nesc_atomic); }

  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMSend__sendDone(msg, result);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 48
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending = FALSE;
//#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define AtosNetStdP__sendDoneCheck__postTask(void) SchedulerBasicP__TaskBasic__postTask(AtosNetStdP__sendDoneCheck)
//# 368 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/   void AtosNetStdP__AMSend__sendDone(message_t *msg, error_t error)
{
  if (error != 0) 
    {
      AtosNetStdP__sendDoneCheck__postTask();
    }
}

//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacRetrySendP__1__AMSend__sendDone(arg_0x7eb60eb8,arg_0x7eb55068) AtosNetStdP__AMSend__sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
//# 48 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__resendTask__runTask(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_sending) 
        {
          {
//#line 54
            __nesc_atomic_end(__nesc_atomic); 
//#line 54
            return;
          }
        }
      if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_retry_times++ < 20) 
        {
          if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__doSend(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_msg) != 0) 
            {
              ;
              /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__resendTask__postTask();
            }
        }
      else 
        {

          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__signalDone(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_msg, ERR_MAC_RETRY_MAX);
        }
    }
//#line 70
    __nesc_atomic_end(__nesc_atomic); }
}

//# 257 "/usr/lib/ncc/nesc_nx.h"
static   /*inline*/   int8_t __nesc_hton_int8(void *target, int8_t value)
//#line 257
{
//#line 257
  __nesc_hton_uint8(target, value);
//#line 257
  return value;
}

//# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP__1__TimeoutTimer__startOneShot(arg_0x7e9a6d58) VirtualizeTimerC__0__Timer__startOneShot(4U, arg_0x7e9a6d58)
//# 246 "/usr/lib/ncc/nesc_nx.h"
static   /*inline*/   uint8_t __nesc_ntoh_leuint8(const void *source)
//#line 246
{
  const uint8_t *base = source;

//#line 248
  return base[0];
}

//# 124 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   uint8_t RfPacketP__Packet__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length) - (sizeof(rf_header_t ) - 1 + sizeof(uint16_t ));
}

//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacSendP__1__SubPacket__payloadLength(arg_0x7eb25e90) RfPacketP__Packet__payloadLength(arg_0x7eb25e90)
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
#define AMResourceP__1__AMResource__send(arg_0x7e609888,arg_0x7e609a38,arg_0x7e609bc0) AMResourceCenterP__AMResource__send(AMResourceC__2__AM_RESOURCE_ID, arg_0x7e609888, arg_0x7e609a38, arg_0x7e609bc0)
//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  /* atomic removed: atomic calls only */
  {
    __nesc_hton_uint8((unsigned char *)&((rf_meta_data_t *)msg->meta_data)->resource_id, 1);
    __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->type, 240U);
  }

  return /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMResource__send(addr, msg, len);
}

//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacSendP__1__SubAMSend__send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) AMResourceP__1__AMSend__send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacPacketP__SubPacket__getPayload(arg_0x7eb23358,arg_0x7eb23500) RfPacketP__Packet__getPayload(arg_0x7eb23358, arg_0x7eb23500)
//# 51 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  /*inline*/   void *RfReliableMacPacketP__PacketEx__getPacketHeader(message_t *msg)
{
  return RfReliableMacPacketP__SubPacket__getPayload(msg, (void *)0);
}

//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacSendP__1__PacketEx__getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP__PacketEx__getPacketHeader(arg_0x7e6b4120)
//# 89 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t result;

  /* atomic removed: atomic calls only */
  {
    rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__PacketEx__getPacketHeader(msg);
    rf_meta_data_t *meta_data = (rf_meta_data_t *)msg->meta_data;



    if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending) 
      {
        {
          unsigned char __nesc_temp = 
//#line 102
          FAIL;

//#line 102
          return __nesc_temp;
        }
      }
    header->ack_req = addr != 0xFFFF;

    __nesc_hton_int8((unsigned char *)&meta_data->ack, FALSE);

    result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__SubAMSend__send(addr, msg, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__SubPacket__payloadLength(msg));

    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__startOneShot(10000);

    if (result == 0) 
      {
        /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg = msg;
        /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending = TRUE;
      }

    {
      unsigned char __nesc_temp = 
//#line 119
      result;

//#line 119
      return __nesc_temp;
    }
  }
}

//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacRetrySendP__1__SubAMSend__send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) RfReliableMacSendP__1__AMSend__send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
//# 46 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
static  /*inline*/  void ATOS_DEBUG_UART_PUTC(char c)
{
  if (c == '\n') 
    {
      {
//#line 50
        uart0PutChar('\r');
      }
//#line 50
      ;
    }
  {
//#line 52
    uart0PutChar(c);
  }
//#line 52
  ;
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define VirtualizeTimerC__0__updateFromTimer__postTask(void) SchedulerBasicP__TaskBasic__postTask(VirtualizeTimerC__0__updateFromTimer)
//# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformCounterC__0__CounterFrom__get(void) HplCC2530Timer1P__0__Counter__get()
//# 327 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  /*inline*/    bool /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__isOverflowPending(void)
{
  /* atomic removed: atomic calls only */
//#line 329
  {
    unsigned char __nesc_temp = 
//#line 329
    T1STAT & CC2530_T1_OVFIF;

//#line 329
    return __nesc_temp;
  }
}

//# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformCounterC__0__CounterFrom__isOverflowPending(void) HplCC2530Timer1P__0__Counter__isOverflowPending()
//# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacRetrySendP__1__AMPacket__destination(arg_0x7eb425b0) RfPacketP__AMPacket__destination(arg_0x7eb425b0)
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacPacketP__SubPacket__payloadLength(arg_0x7eb25e90) RfPacketP__Packet__payloadLength(arg_0x7eb25e90)
//# 20 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  /*inline*/   uint8_t RfReliableMacPacketP__Packet__payloadLength(message_t *msg)
{
  return RfReliableMacPacketP__SubPacket__payloadLength(msg) - sizeof(rf_rmac_header_t );
}

//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacRetrySendP__1__Packet__payloadLength(arg_0x7eb25e90) RfReliableMacPacketP__Packet__payloadLength(arg_0x7eb25e90)
//# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AtosNetStdP__AMPacket__address(void) RfPacketP__AMPacket__address()
//# 128 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/  void AtosNetStdP__traceEnd(message_t *msg, anstd_trace_t *trace, int index)
{
  trace->_data_type = ANSTD_DATA_TYPE_TRACE_ACK;
  AtosNetStdP__traceBackward(msg, (anstd_trace_ack_t *)trace, index);
}

//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define AtosNetStdP__Packet__getPayload(arg_0x7eb23358,arg_0x7eb23500) RfReliableMacPacketP__Packet__getPayload(arg_0x7eb23358, arg_0x7eb23500)
//# 350 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/   void AtosNetStdP__sendDoneCheck__runTask(void)
{
  anstd_header_t *header = (anstd_header_t *)AtosNetStdP__Packet__getPayload(&AtosNetStdP__m_send_msg, (void *)0);

  if (header->_data_type == ANSTD_DATA_TYPE_TRACE) 
    {
      anstd_trace_t *trace = (anstd_trace_t *)header;
      int index = AtosNetStdP__indexOfTraceItem(trace, AtosNetStdP__AMPacket__address());

//#line 358
      AtosNetStdP__traceEnd(&AtosNetStdP__m_send_msg, trace, index);
    }
  else {
//#line 360
    if (header->_data_type == ANSTD_DATA_TYPE_TRACE_ACK) 
      {
        anstd_trace_ack_t *trace_ack = (anstd_trace_ack_t *)header;
        int index = AtosNetStdP__indexOfTraceItem(trace_ack, AtosNetStdP__AMPacket__address());

//#line 364
        AtosNetStdP__traceBackward(&AtosNetStdP__m_send_msg, trace_ack, index);
      }
    }
}

//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacRetrySendP__1__PacketEx__getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP__PacketEx__getPacketHeader(arg_0x7e6b4120)
//# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacRetrySendP__1__AMPacket__setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP__AMPacket__setDestination(arg_0x7eb40190, arg_0x7eb40320)
//# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacPacketP__SubPacket__setPayloadLength(arg_0x7eb24538,arg_0x7eb246c0) RfPacketP__Packet__setPayloadLength(arg_0x7eb24538, arg_0x7eb246c0)
//# 25 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  /*inline*/   void RfReliableMacPacketP__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  RfReliableMacPacketP__SubPacket__setPayloadLength(msg, len + sizeof(rf_rmac_header_t ));
}

//# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacRetrySendP__1__Packet__setPayloadLength(arg_0x7eb24538,arg_0x7eb246c0) RfReliableMacPacketP__Packet__setPayloadLength(arg_0x7eb24538, arg_0x7eb246c0)
//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AtosNetStdP__AMSend__send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) RfReliableMacRetrySendP__1__AMSend__send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
//# 378 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/    void AtosNetStdP__AtosNetStd__default__beforeNodeStatusUp(anstd_node_status_t *status)
{
}

//# 12 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP__AtosNetStd__beforeNodeStatusUp(arg_0x7e2fd1e0) AtosNetStdP__AtosNetStd__default__beforeNodeStatusUp(arg_0x7e2fd1e0)
//# 161 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static  /*inline*/   void FlashIEEEP__FlashIEEE__GetIEEE(uint8_t *ieee)
{
  memcpy(ieee, FlashIEEEP__m_ieee, sizeof FlashIEEEP__m_ieee);
}

//# 7 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
#define AtosNetStdP__FlashIEEE__GetIEEE(arg_0x7ea50068) FlashIEEEP__FlashIEEE__GetIEEE(arg_0x7ea50068)
//# 143 "/opt/atos/tos/chips/rf2530/hardware/control/RfConfigP.nc"
static  /*inline*/   uint8_t RfConfigP__RfConfig__getChannel(void)
{
  return RfConfigP__m_channel;
}

//# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
#define AtosNetStdP__RfConfig__getChannel(void) RfConfigP__RfConfig__getChannel()
//# 241 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/   error_t AtosNetStdP__AtosNetStd__sendNodeStatusUp(uint16_t address)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      anstd_node_status_t *status = (anstd_node_status_t *)AtosNetStdP__Packet__getPayload(&AtosNetStdP__m_send_msg, (void *)0);

//#line 246
      status->_data_type = ANSTD_DATA_TYPE_NODE_STATUS_UP;
      status->device_type = ATP_STD_EQUIPMENT_TYPE_NODE;
      status->industry_code = 0x00;
      status->application_code = 0x00;

      status->rf_channel = AtosNetStdP__RfConfig__getChannel();

      AtosNetStdP__FlashIEEE__GetIEEE(status->ieee);

      status->node_status = AtosNetStdP__m_node_status++;

      AtosNetStdP__AtosNetStd__beforeNodeStatusUp(status);

      if (AtosNetStdP__m_node_status == 0) 
        {
          AtosNetStdP__m_node_status = 1;
        }

      {
        unsigned char __nesc_temp = 
//#line 264
        AtosNetStdP__AMSend__send(address, &AtosNetStdP__m_send_msg, sizeof(anstd_node_status_t ));

        {
//#line 264
          __nesc_atomic_end(__nesc_atomic); 
//#line 264
          return __nesc_temp;
        }
      }
    }
//#line 267
    __nesc_atomic_end(__nesc_atomic); }
}

//#line 59
static  /*inline*/   void AtosNetStdP__nodeStatusUpTask__runTask(void)
{
  AtosNetStdP__AtosNetStd__sendNodeStatusUp(AtosNetStdP__m_ack_addr);
}

//# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformAlarmC__0__Counter__get(void) TransformCounterC__0__Counter__get()
//# 76 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void)
{
  /* atomic removed: atomic calls only */
//#line 78
  {
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type __nesc_temp = 
//#line 78
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();

//#line 78
    return __nesc_temp;
  }
}

//# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define AlarmToTimerC__0__Alarm__getNow(void) TransformAlarmC__0__Alarm__getNow()
//# 118 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static  /*inline*/   uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void)
{
  /* atomic removed: atomic calls only */
//#line 120
  {
    unsigned long __nesc_temp = 
//#line 120
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();

//#line 120
    return __nesc_temp;
  }
}

//# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define VirtualizeTimerC__0__TimerFrom__getNow(void) AlarmToTimerC__0__Timer__getNow()
//# 174 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static  /*inline*/   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      {
//#line 178
        {
//#line 178
          if (1 >= uart_debug_level) {
//#line 178
              {
//#line 178
                sprintf(uart_debug_buf, "VirtualizeTimerC.Timer.startPeriodic dt=%ld\n", dt);
              }
//#line 178
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 178
      ;
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
    }
//#line 180
    __nesc_atomic_end(__nesc_atomic); }
}

//# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define AtosNetStdP__RebootTimer__startPeriodic(arg_0x7e9a6788) VirtualizeTimerC__0__Timer__startPeriodic(5U, arg_0x7e9a6788)
//# 54 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/   void AtosNetStdP__rebootTask__runTask(void)
{
  AtosNetStdP__RebootTimer__startPeriodic(500);
}

//# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP__0__AMPacket__destination(arg_0x7eb425b0) RfPacketP__AMPacket__destination(arg_0x7eb425b0)
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
#define AMResourceP__3__AMResource__send(arg_0x7e609888,arg_0x7e609a38,arg_0x7e609bc0) AMResourceCenterP__AMResource__send(AMResourceC__1__AM_RESOURCE_ID, arg_0x7e609888, arg_0x7e609a38, arg_0x7e609bc0)
//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      __nesc_hton_uint8((unsigned char *)&((rf_meta_data_t *)msg->meta_data)->resource_id, 3);
      __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->type, 124);
    }
//#line 17
    __nesc_atomic_end(__nesc_atomic); }

  return /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMResource__send(addr, msg, len);
}

//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacReceiveP__0__AMSendAck__send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) AMResourceP__3__AMSend__send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
//# 39 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static  /*inline*/  void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAck(message_t *msg)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMSendAck__send(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__destination(msg), msg, sizeof(rf_ack_t )) != 0) 
    {
    }
}


static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAckTask__runTask(void)
{
  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAck(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_ack_msg);
}

//# 91 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareTxP.nc"
static  /*inline*/   error_t RfHardwareTxP__RfHardwareTx__txGo(void)
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
//#line 110
      S1CON = 0x00;
//#line 110
      RFIRQF1 = ~(1 << 1);
    }
  while (
//#line 110
  110 == -1);

  return result;
}

//# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareTx.nc"
#define RfMacBaseCsmaP__RfHardwareTx__txGo(void) RfHardwareTxP__RfHardwareTx__txGo()
//# 105 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static  /*inline*/   void RfMacBaseCsmaP__doGo__runTask(void)
{
  error_t result = RfMacBaseCsmaP__RfHardwareTx__txGo();

  if (RfMacBaseCsmaP__m_this_delay > 90) 
    {
      RfMacBaseCsmaP__m_congestion_delay = 90;
    }
  else 
    {
      if (RfMacBaseCsmaP__m_this_delay > RfMacBaseCsmaP__m_congestion_delay) 
        {
          RfMacBaseCsmaP__m_congestion_delay = (RfMacBaseCsmaP__m_this_delay + RfMacBaseCsmaP__m_congestion_delay) / 2;
        }
      else 
        {
          RfMacBaseCsmaP__m_congestion_delay = RfMacBaseCsmaP__m_this_delay;
        }
    }

  if (result != 0) 
    {
      RfMacBaseCsmaP__signalDone(result);
    }
  else 
    {
      RfMacBaseCsmaP__signalDone(0);
    }
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfMacBaseCsmaP__signalDoneTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(RfMacBaseCsmaP__signalDoneTask)
//# 70 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static  /*inline*/   void AMResourceCenterP__CoreSend__sendDone(message_t *msg, error_t result)
{
  AMResourceCenterP__AMResource__sendDone(__nesc_ntoh_uint8((unsigned char *)&((rf_meta_data_t *)msg->meta_data)->resource_id), msg, result);
}

//# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
#define RfMacBaseSendP__0__CoreSend__sendDone(arg_0x7e5e84c0,arg_0x7e5e8648) AMResourceCenterP__CoreSend__sendDone(arg_0x7e5e84c0, arg_0x7e5e8648)
//# 117 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
static  /*inline*/   void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SubCoreSend__sendDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_sending) {
        {
//#line 121
          __nesc_atomic_end(__nesc_atomic); 
//#line 121
          return;
        }
        }
    }
//#line 124
    __nesc_atomic_end(__nesc_atomic); }
  /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__CoreSend__sendDone(msg, result);

  if (result != 0) 
    {
      {
//#line 129
        {
//#line 129
          if (100 >= uart_debug_level) {
//#line 129
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 129
                {
//#line 129
                  sprintf(uart_debug_buf, "RfMacBaseSendP.SubCoreSend.sendDone result%d\n", (int )result);
                }
//#line 130
                __nesc_atomic_end(__nesc_atomic); }
//#line 129
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 129
      ;
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 133
    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_sending = FALSE;
//#line 133
    __nesc_atomic_end(__nesc_atomic); }
  /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext__postTask();
}

//# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
#define RfMacBaseCsmaP__CoreSend__sendDone(arg_0x7e5e84c0,arg_0x7e5e8648) RfMacBaseSendP__0__SubCoreSend__sendDone(arg_0x7e5e84c0, arg_0x7e5e8648)
//# 53 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static  /*inline*/   void RfMacBaseCsmaP__signalDoneTask__runTask(void)
{


  if (RfMacBaseCsmaP__m_msg != (void *)0) 
    {

      RfMacBaseCsmaP__CoreSend__sendDone(RfMacBaseCsmaP__m_msg, RfMacBaseCsmaP__m_result);
    }
}

//# 52 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMSendAck__sendDone(message_t *msg, error_t result)
{
}

//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AMResourceP__3__AMSend__sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacReceiveP__0__AMSendAck__sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
//# 39 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMResource__sendDone(message_t *msg, error_t error)
{



  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMSend__sendDone(msg, error);
}

//# 52 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMSendAck__sendDone(message_t *msg, error_t result)
{
}

//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AMResourceP__2__AMSend__sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacReceiveP__1__AMSendAck__sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
//# 39 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMResource__sendDone(message_t *msg, error_t error)
{



  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMSend__sendDone(msg, error);
}

//# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP__1__AckTimer__startOneShot(arg_0x7e9a6d58) VirtualizeTimerC__0__Timer__startOneShot(3U, arg_0x7e9a6d58)
//# 139 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__SubAMSend__sendDone(message_t *msg, error_t error)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending) 
    {
      if (error == 0) 
        {
          rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__PacketEx__getPacketHeader(msg);

//#line 146
          if (header->ack_req) 
            {
              /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__startOneShot(50);
              return;
            }
        }

      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDone(msg, error);
    }
}

//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AMResourceP__1__AMSend__sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacSendP__1__SubAMSend__sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
//# 39 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMResource__sendDone(message_t *msg, error_t error)
{



  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMSend__sendDone(msg, error);
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacSendP__1__signalDoneTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(RfReliableMacSendP__1__signalDoneTask)
//# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP__0__AckTimer__startOneShot(arg_0x7e9a6d58) VirtualizeTimerC__0__Timer__startOneShot(1U, arg_0x7e9a6d58)
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacSendP__0__PacketEx__getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP__PacketEx__getPacketHeader(arg_0x7e6b4120)
//# 139 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__SubAMSend__sendDone(message_t *msg, error_t error)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending) 
    {
      if (error == 0) 
        {
          rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__PacketEx__getPacketHeader(msg);

//#line 146
          if (header->ack_req) 
            {
              /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__startOneShot(50);
              return;
            }
        }

      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDone(msg, error);
    }
}

//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define AMResourceP__0__AMSend__sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacSendP__0__SubAMSend__sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
//# 39 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMResource__sendDone(message_t *msg, error_t error)
{



  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMSend__sendDone(msg, error);
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacSendP__0__signalDoneTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(RfReliableMacSendP__0__signalDoneTask)
//# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
#define RfMacBaseCsmaP__Random__rand16(void) CC2530RandomLfsrP__Random__rand16()
//# 75 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static  /*inline*/  uint32_t RfMacBaseCsmaP__initBackoffTimer(void)
{
  RfMacBaseCsmaP__m_this_random = RfMacBaseCsmaP__Random__rand16() % RfMacBaseCsmaP__m_congestion_delay;
  if (RfMacBaseCsmaP__m_this_random == 0) {
//#line 78
    RfMacBaseCsmaP__m_this_random = 1;
    }
//#line 79
  RfMacBaseCsmaP__m_this_delay += RfMacBaseCsmaP__m_this_random;
  return (uint32_t )RfMacBaseCsmaP__m_this_random * RfMacBaseCsmaP__RF_BACKOFF_PERIOD;
}

//# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformAlarmC__1__Counter__get(void) TransformCounterC__1__Counter__get()
//# 76 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void)
{
  /* atomic removed: atomic calls only */
//#line 78
  {
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type __nesc_temp = 
//#line 78
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();

//#line 78
    return __nesc_temp;
  }
}

//#line 140
static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = t0;
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = dt;
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
  }
}

static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  /* atomic removed: atomic calls only */
//#line 152
  /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(), dt);
}

//# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define RfMacBaseCsmaP__BackoffTimer__start(arg_0x7e953b10) TransformAlarmC__1__Alarm__start(arg_0x7e953b10)
//# 14 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareTxP.nc"
static  /*inline*/  void RfHardwareTxP__writeTxfifo(uint8_t *buf, uint8_t len)
{
  uint8_t i;

//#line 17
  for (i = 0; i < len; ++i) 
    {
      RFD = buf[i];
    }
}

//#line 45
static  /*inline*/   error_t RfHardwareTxP__RfHardwareTx__txPrepare(uint8_t *packet, uint8_t len)
{

  do {
//#line 48
      RFST = 0xEE;
    }
  while (
//#line 48
  48 == -1);


  do {
//#line 51
      S1CON = 0x00;
//#line 51
      RFIRQF1 = ~(1 << 1);
    }
  while (
//#line 51
  51 == -1);

  len &= 0x7f;
  packet[0] = len;
//#line 86
  RfHardwareTxP__writeTxfifo(packet, len);

  return 0;
}

//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareTx.nc"
#define RfMacBaseCsmaP__RfHardwareTx__txPrepare(arg_0x7e572c98,arg_0x7e572e20) RfHardwareTxP__RfHardwareTx__txPrepare(arg_0x7e572c98, arg_0x7e572e20)
//# 164 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static  /*inline*/   error_t RfMacBaseCsmaP__CoreSend__send(message_t *msg, uint8_t len)
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;

  /* atomic removed: atomic calls only */
//#line 168
  {
    if (msg == (void *)0) 
      {
        {
          unsigned char __nesc_temp = 
//#line 171
          FAIL;

//#line 171
          return __nesc_temp;
        }
      }
    RfMacBaseCsmaP__m_msg = msg;
    RfMacBaseCsmaP__m_cancel = FALSE;
    RfMacBaseCsmaP__m_state = RfMacBaseCsmaP__CSMA_STATE_SAMPLE_CCA;
    RfMacBaseCsmaP__m_congestion_count = 0;
    RfMacBaseCsmaP__m_this_delay = 0;
//#line 192
    (__nesc_temp44 = (unsigned char *)&((rf_header_t *)msg->header)->length, __nesc_hton_leuint8(__nesc_temp44, __nesc_ntoh_leuint8(__nesc_temp44) + 0));
    RfMacBaseCsmaP__RfHardwareTx__txPrepare((uint8_t *)msg->header, __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length));
    (__nesc_temp45 = (unsigned char *)&((rf_header_t *)msg->header)->length, __nesc_hton_leuint8(__nesc_temp45, __nesc_ntoh_leuint8(__nesc_temp45) - 0));

    ;

    RfMacBaseCsmaP__BackoffTimer__start(RfMacBaseCsmaP__initBackoffTimer());
  }

  return 0;
}

//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreSend.nc"
#define RfMacBaseSendP__0__SubCoreSend__send(arg_0x7e5e9998,arg_0x7e5e9b20) RfMacBaseCsmaP__CoreSend__send(arg_0x7e5e9998, arg_0x7e5e9b20)
//# 15 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
static  /*inline*/   bool /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__empty(void)
{
  /* atomic removed: atomic calls only */
  {
    {
      unsigned char __nesc_temp = 
//#line 19
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__size == 0;

//#line 19
      return __nesc_temp;
    }
  }
}

//#line 39
static  /*inline*/   /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__head(void)
{
  /* atomic removed: atomic calls only */
  {
    {
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t __nesc_temp = 
//#line 43
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue[/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__head];

//#line 43
      return __nesc_temp;
    }
  }
}

//#line 47
static  /*inline*/   /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__dequeue(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t t = /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__head();

//#line 52
    if (!/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__empty()) 
      {
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__head++;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__head %= 4;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__size--;
      }

    {
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t __nesc_temp = 
//#line 59
      t;

//#line 59
      return __nesc_temp;
    }
  }
}

//# 40 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
#define RfMacBaseSendP__0__SendQueue__dequeue(void) QueueExC__0__QueueEx__dequeue()
//#line 9
#define RfMacBaseSendP__0__SendQueue__empty(void) QueueExC__0__QueueEx__empty()
//# 23 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
static  /*inline*/   void /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext__runTask(void)
{
  error_t result;
  message_t *msg;
  rf_header_t *header;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_sending) {
        {
//#line 31
          __nesc_atomic_end(__nesc_atomic); 
//#line 31
          return;
        }
        }
//#line 33
      if (/*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__empty()) 
        {
          {
//#line 35
            __nesc_atomic_end(__nesc_atomic); 
//#line 35
            return;
          }
        }

      msg = /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__dequeue();



      if (msg == (void *)0) 
        {

          ;


          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_sending = FALSE;

          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext__postTask();
          {
//#line 52
            __nesc_atomic_end(__nesc_atomic); 
//#line 52
            return;
          }
        }
      result = /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SubCoreSend__send(msg, __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length));
      if (result == 0) 
        {
          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_sending = TRUE;
        }
      else 
        {


          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__CoreSend__sendDone(msg, FAIL);
          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_sending = FALSE;

          /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext__postTask();
        }
    }
//#line 69
    __nesc_atomic_end(__nesc_atomic); }
}

//# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformCounterC__1__CounterFrom__get(void) HplCC2530Timer1P__0__Counter__get()







#define TransformCounterC__1__CounterFrom__isOverflowPending(void) HplCC2530Timer1P__0__Counter__isOverflowPending()
//# 200 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  /*inline*/    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__startAt(uint16_t t0, uint16_t dt)
{
  uint16_t set;
//#line 202
  uint16_t now;
//#line 202
  uint16_t elapsed;

  /* atomic removed: atomic calls only */
//#line 204
  {
    {
//#line 205
      now = T1CNTL;
//#line 205
      now += T1CNTH << 8;
    }
//#line 205
    ;

    elapsed = now - t0;

    if (elapsed >= dt) 
      {
        set = now + 5;
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

//#line 216
        if (remaining <= 5) {
            set = now + 5;
          }
        else 
          {
            set = remaining + now;
          }
      }

    {
//#line 225
      T1CCTL1 &= ~(1 << CC2530_T1CCTLx_MODE);
//#line 225
      T1CC1L = (uint16_t )set & 0xFF;
//#line 225
      T1CC1H = ((uint16_t )set >> 8) & 0xFF;
//#line 225
      T1CCTL1 |= 1 << CC2530_T1CCTLx_MODE;
    }
//#line 225
    ;

    T1CCTL1 |= 1 << CC2530_T1CCTLx_IM;
  }
}

//# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC__1__AlarmFrom__startAt(arg_0x7e952c28,arg_0x7e952db8) HplCC2530Timer1P__0__Alarm1__startAt(arg_0x7e952c28, arg_0x7e952db8)
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacRetrySendP__0__resendTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(RfReliableMacRetrySendP__0__resendTask)
//# 129 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__SubAMSend__sendDone(message_t *msg, error_t error)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_sending) 
    {
      if (error == 0) 
        {
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__signalDone(msg, error);
        }
      else 
        {
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__resendTask__postTask();
        }
    }
}

//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacSendP__0__AMSend__sendDone(arg_0x7eb60eb8,arg_0x7eb55068) RfReliableMacRetrySendP__0__SubAMSend__sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
//# 31 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDoneTask__runTask(void)
{
  message_t *msg;
  error_t result;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending) 
        {
          {
//#line 40
            __nesc_atomic_end(__nesc_atomic); 
//#line 40
            return;
          }
        }
      msg = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg;
      result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_result;
    }
//#line 45
    __nesc_atomic_end(__nesc_atomic); }

  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMSend__sendDone(msg, result);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 48
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending = FALSE;
//#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define DigBaseP__showMenu__postTask(void) SchedulerBasicP__TaskBasic__postTask(DigBaseP__showMenu)
//# 114 "DigBaseP.nc"
static  /*inline*/   void DigBaseP__AMSend__sendDone(message_t *msg, error_t success)
{
  {
//#line 116
    {
//#line 116
      if (1000 >= uart_debug_level) {
//#line 116
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 116
            {
//#line 116
              sprintf(uart_debug_buf, "* Sent%s!\r\n", success == 0 ? "OK" : "FAIL");
            }
//#line 117
            __nesc_atomic_end(__nesc_atomic); }
//#line 116
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
//#line 116
  ;

  DigBaseP__m_len = 0;
  DigBaseP__m_input_type = DigBaseP__INPUT_ADDRESS;

  DigBaseP__showMenu__postTask();
}

//# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacRetrySendP__0__AMSend__sendDone(arg_0x7eb60eb8,arg_0x7eb55068) DigBaseP__AMSend__sendDone(arg_0x7eb60eb8, arg_0x7eb55068)
//# 48 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__resendTask__runTask(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_sending) 
        {
          {
//#line 54
            __nesc_atomic_end(__nesc_atomic); 
//#line 54
            return;
          }
        }
      if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_retry_times++ < 20) 
        {
          if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__doSend(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_msg) != 0) 
            {
              ;
              /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__resendTask__postTask();
            }
        }
      else 
        {

          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__signalDone(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_msg, ERR_MAC_RETRY_MAX);
        }
    }
//#line 70
    __nesc_atomic_end(__nesc_atomic); }
}

//# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP__0__TimeoutTimer__startOneShot(arg_0x7e9a6d58) VirtualizeTimerC__0__Timer__startOneShot(2U, arg_0x7e9a6d58)
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacSendP__0__SubPacket__payloadLength(arg_0x7eb25e90) RfPacketP__Packet__payloadLength(arg_0x7eb25e90)
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
#define AMResourceP__0__AMResource__send(arg_0x7e609888,arg_0x7e609a38,arg_0x7e609bc0) AMResourceCenterP__AMResource__send(AMResourceC__0__AM_RESOURCE_ID, arg_0x7e609888, arg_0x7e609a38, arg_0x7e609bc0)
//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceP.nc"
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  /* atomic removed: atomic calls only */
  {
    __nesc_hton_uint8((unsigned char *)&((rf_meta_data_t *)msg->meta_data)->resource_id, 0);
    __nesc_hton_leuint8((unsigned char *)&((rf_header_t *)msg->header)->type, 123);
  }

  return /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMResource__send(addr, msg, len);
}

//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacSendP__0__SubAMSend__send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) AMResourceP__0__AMSend__send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
//# 89 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t result;

  /* atomic removed: atomic calls only */
  {
    rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__PacketEx__getPacketHeader(msg);
    rf_meta_data_t *meta_data = (rf_meta_data_t *)msg->meta_data;



    if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending) 
      {
        {
          unsigned char __nesc_temp = 
//#line 102
          FAIL;

//#line 102
          return __nesc_temp;
        }
      }
    header->ack_req = addr != 0xFFFF;

    __nesc_hton_int8((unsigned char *)&meta_data->ack, FALSE);

    result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__SubAMSend__send(addr, msg, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__SubPacket__payloadLength(msg));

    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__startOneShot(10000);

    if (result == 0) 
      {
        /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg = msg;
        /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending = TRUE;
      }

    {
      unsigned char __nesc_temp = 
//#line 119
      result;

//#line 119
      return __nesc_temp;
    }
  }
}

//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define RfReliableMacRetrySendP__0__SubAMSend__send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) RfReliableMacSendP__0__AMSend__send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
//# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacRetrySendP__0__AMPacket__destination(arg_0x7eb425b0) RfPacketP__AMPacket__destination(arg_0x7eb425b0)
//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacRetrySendP__0__Packet__payloadLength(arg_0x7eb25e90) RfReliableMacPacketP__Packet__payloadLength(arg_0x7eb25e90)
//# 140 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = t0;
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = dt;
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
  }
}

//# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define AlarmToTimerC__0__Alarm__startAt(arg_0x7e952c28,arg_0x7e952db8) TransformAlarmC__0__Alarm__startAt(arg_0x7e952c28, arg_0x7e952db8)
//# 47 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static  /*inline*/  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
  }
}

//#line 113
static  /*inline*/   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
  /* atomic removed: atomic calls only */
//#line 115
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

//# 118 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define VirtualizeTimerC__0__TimerFrom__startOneShotAt(arg_0x7e9a39b8,arg_0x7e9a3b48) AlarmToTimerC__0__Timer__startOneShotAt(arg_0x7e9a39b8, arg_0x7e9a3b48)
//# 78 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  /*inline*/    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__stop(void)
{
  /* atomic removed: atomic calls only */
//#line 80
  T1CCTL0 &= ~(1 << CC2530_T1CCTLx_IM);
}

//# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC__0__AlarmFrom__stop(void) HplCC2530Timer1P__0__Alarm0__stop()
//# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void)
{
  /* atomic removed: atomic calls only */
//#line 93
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

//# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define AlarmToTimerC__0__Alarm__stop(void) TransformAlarmC__0__Alarm__stop()
//# 73 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static  /*inline*/   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
  }
}

//# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define VirtualizeTimerC__0__TimerFrom__stop(void) AlarmToTimerC__0__Timer__stop()
//# 98 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static  /*inline*/   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {




      uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
      int32_t min_remaining = (1UL << 31) - 1;
      bool min_remaining_isset = FALSE;
      uint8_t num;

      {
//#line 111
        {
//#line 111
          if (1 >= uart_debug_level) {
//#line 111
              {
//#line 111
                sprintf(uart_debug_buf, "updateFromTimer NUM_TIMERS=%d\n", (int )/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS);
              }
//#line 111
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 111
      ;

      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

      for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
        {
          /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];


          if (timer->isrunning) 
            {
              uint32_t elapsed = now - timer->t0;
              int32_t remaining = (timer->dt - elapsed) % (timer->dt + 1);

              {
//#line 125
                {
//#line 125
                  if (1 >= uart_debug_level) {
//#line 125
                      {
//#line 125
                        sprintf(uart_debug_buf, "elapsed = 0x%lx, remaining=0x%lx\n", elapsed, remaining);
                      }
//#line 125
                      ATOS_DEBUG_UART_PRINT();
                    }
                }
              }
//#line 125
              ;

              if (remaining < min_remaining) 
                {
                  min_remaining = remaining;
                  min_remaining_isset = TRUE;
                }
            }
        }

      {
//#line 135
        {
//#line 135
          if (1 >= uart_debug_level) {
//#line 135
              {
//#line 135
                sprintf(uart_debug_buf, "updateFromTimer min_remaining_isset=%d, min_remaining=0x%x,\n", (int )min_remaining_isset, (int )min_remaining);
              }
//#line 135
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 135
      ;

      if (min_remaining_isset) 
        {
          if (min_remaining <= 0) 
            {
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
            }
          else 
            {
              {
//#line 145
                {
//#line 145
                  if (1 >= uart_debug_level) {
//#line 145
                      {
//#line 145
                        sprintf(uart_debug_buf, "VirtualizeTimerC call TimerFrom.startOneShotAt\n");
                      }
//#line 145
                      ATOS_DEBUG_UART_PRINT();
                    }
                }
              }
//#line 145
              ;
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
            }
        }
    }
//#line 149
    __nesc_atomic_end(__nesc_atomic); }
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RealMainP__fakeTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(RealMainP__fakeTask)
//# 111 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
static  /*inline*/   void RealMainP__FakeTimer__fired(void)
{

  RealMainP__fakeTask__postTask();
}

//# 71 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__fired(void)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending) 
    {
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDone(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg, ERR_MAC_NO_ACK);
    }
}

static  /*inline*/   void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__fired(void)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending) 
    {
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDone(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg, ERR_MAC_NO_ACK);
    }
}

//#line 71
static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__fired(void)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending) 
    {
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDone(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg, ERR_MAC_NO_ACK);
    }
}

static  /*inline*/   void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__fired(void)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending) 
    {
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDone(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg, ERR_MAC_NO_ACK);
    }
}

//# 4 "/opt/atos/tos/chips/cc2530/watchdog/WatchDog.nc"
#define AtosNetStdP__WatchDog__resetCpu(void) WatchDogP__WatchDog__resetCpu()
//# 49 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/   void AtosNetStdP__RebootTimer__fired(void)
{
  AtosNetStdP__WatchDog__resetCpu();
}

//# 232 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static  /*inline*/    void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
//#line 232
{
}

//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
 /*inline*/  static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7e794030){
//#line 72
  switch (arg_0x7e794030) {
//#line 72
    case 0U:
//#line 72
      RealMainP__FakeTimer__fired();
//#line 72
      break;
//#line 72
    case 1U:
//#line 72
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__fired();
//#line 72
      break;
//#line 72
    case 2U:
//#line 72
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__fired();
//#line 72
      break;
//#line 72
    case 3U:
//#line 72
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__fired();
//#line 72
      break;
//#line 72
    case 4U:
//#line 72
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__fired();
//#line 72
      break;
//#line 72
    case 5U:
//#line 72
      AtosNetStdP__RebootTimer__fired();
//#line 72
      break;
//#line 72
    default:
//#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7e794030);
//#line 72
      break;
//#line 72
    }
//#line 72
}
//#line 72
//# 121 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  /*inline*/    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__startAt(uint16_t t0, uint16_t dt)
{
  uint16_t set;
//#line 123
  uint16_t now;
//#line 123
  uint16_t elapsed;

  /* atomic removed: atomic calls only */
  {
    {
//#line 127
      now = T1CNTL;
//#line 127
      now += T1CNTH << 8;
    }
//#line 127
    ;

    elapsed = now - t0;

    if (elapsed >= dt) 
      {
        set = now + 5;
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

//#line 138
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
//#line 148
      T1CCTL0 &= ~(1 << CC2530_T1CCTLx_MODE);
//#line 148
      T1CC0L = (uint16_t )set & 0xFF;
//#line 148
      T1CC0H = ((uint16_t )set >> 8) & 0xFF;
//#line 148
      T1CCTL0 |= 1 << CC2530_T1CCTLx_MODE;
    }
//#line 148
    ;

    T1CCTL0 |= 1 << CC2530_T1CCTLx_IM;

    {
//#line 152
      {
//#line 152
        if (1 >= uart_debug_level) {
//#line 152
            {
//#line 152
              sprintf(uart_debug_buf, "Alarm0.startAt T1CCTL0=0x%x\n", T1CCTL0);
            }
//#line 152
            ATOS_DEBUG_UART_PRINT();
          }
      }
    }
//#line 152
    ;
  }
}

//# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC__0__AlarmFrom__startAt(arg_0x7e952c28,arg_0x7e952db8) HplCC2530Timer1P__0__Alarm0__startAt(arg_0x7e952c28, arg_0x7e952db8)
//# 152 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static  /*inline*/   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void)
{
  /* atomic removed: atomic calls only */
  {
    {
//#line 156
      {
//#line 156
        if (1 >= uart_debug_level) {
//#line 156
            {
//#line 156
              sprintf(uart_debug_buf, "VirtualizeTimerC.TimerFrom.fired\n");
            }
//#line 156
            ATOS_DEBUG_UART_PRINT();
          }
      }
    }
//#line 156
    ;
    /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
  }
}

//# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define AlarmToTimerC__0__Timer__fired(void) VirtualizeTimerC__0__TimerFrom__fired()
//# 81 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void)
{
  /* atomic removed: atomic calls only */
//#line 83
  {
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type __nesc_temp = 
//#line 83
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

//#line 83
    return __nesc_temp;
  }
}

//# 105 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define AlarmToTimerC__0__Alarm__getAlarm(void) TransformAlarmC__0__Alarm__getAlarm()
//# 81 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static  /*inline*/   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__firedTask__runTask(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) 
        {
          /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
        }
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
    }
//#line 90
    __nesc_atomic_end(__nesc_atomic); }
}

//# 103 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
static  /*inline*/   void RealMainP__fakeTask__runTask(void)
{
}

//# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacRetrySendP__0__Packet__setPayloadLength(arg_0x7eb24538,arg_0x7eb246c0) RfReliableMacPacketP__Packet__setPayloadLength(arg_0x7eb24538, arg_0x7eb246c0)
//# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacRetrySendP__0__AMPacket__setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP__AMPacket__setDestination(arg_0x7eb40190, arg_0x7eb40320)
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacRetrySendP__0__PacketEx__getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP__PacketEx__getPacketHeader(arg_0x7e6b4120)
//# 74 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t result;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__PacketEx__getPacketHeader(msg);
      rf_meta_data_t *meta_data = (rf_meta_data_t *)msg->meta_data;

      if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_sending) 
        {
          {
            unsigned char __nesc_temp = 
//#line 85
            FAIL;

            {
//#line 85
              __nesc_atomic_end(__nesc_atomic); 
//#line 85
              return __nesc_temp;
            }
          }
        }
      header->ack_req = addr != 0xFFFF;

      __nesc_hton_int8((unsigned char *)&meta_data->ack, FALSE);

      header->dsn = rf_rmac_dsn;

      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AMPacket__setDestination(msg, addr);
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__Packet__setPayloadLength(msg, len);


      result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__doSend(msg);

      if (result == 0) 
        {
          rf_rmac_dsn++;
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_sending = TRUE;
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_msg = msg;
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_retry_times = 0;
        }

      {
        unsigned char __nesc_temp = 
//#line 109
        result;

        {
//#line 109
          __nesc_atomic_end(__nesc_atomic); 
//#line 109
          return __nesc_temp;
        }
      }
    }
//#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

//# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
#define DigBaseP__AMSend__send(arg_0x7eb61810,arg_0x7eb619c0,arg_0x7eb61b48) RfReliableMacRetrySendP__0__AMSend__send(arg_0x7eb61810, arg_0x7eb619c0, arg_0x7eb61b48)
//# 52 "DigBaseP.nc"
static  /*inline*/  uint16_t DigBaseP__getDestAddress(void)
{
  uint16_t address = 0;
  uint8_t i = 0;

  if (DigBaseP__m_address_index > DigBaseP__MAX_ADDRESS_LEN) 
    {
      DigBaseP__m_address_index = DigBaseP__MAX_ADDRESS_LEN - 1;
    }

  for (i = 0; i < DigBaseP__m_address_index; ++i) 
    {
      uint8_t digital = DigBaseP__m_address_str[i];

//#line 65
      if (digital >= 'A' && digital <= 'F') 
        {
          digital = digital - 'A' + 10;
        }
      else {
//#line 69
        if (digital >= 'a' && digital <= 'f') 
          {
            digital = digital - 'a' + 10;
          }
        else {
//#line 73
          if (digital >= '0' && digital <= '9') 
            {
              digital = digital - '0';
            }
          }
        }
//#line 78
      address = address * 16 + digital;
    }

  return address;
}

//# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define DigBaseP__AMPacket__address(void) RfPacketP__AMPacket__address()
//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define DigBaseP__Packet__getPayload(arg_0x7eb23358,arg_0x7eb23500) RfReliableMacPacketP__Packet__getPayload(arg_0x7eb23358, arg_0x7eb23500)
//# 85 "DigBaseP.nc"
static  /*inline*/   void DigBaseP__sendData__runTask(void)
{
  uint8_t i;
  uint8_t *payload = DigBaseP__Packet__getPayload(&DigBaseP__m_msg, (void *)0);
  uint16_t address = DigBaseP__AMPacket__address();
  uint16_t dest_address = DigBaseP__getDestAddress();

  {
//#line 92
    {
//#line 92
      if (1000 >= uart_debug_level) {
//#line 92
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 92
            {
//#line 92
              sprintf(uart_debug_buf, "\npayload = %c\n", *payload);
            }
//#line 93
            __nesc_atomic_end(__nesc_atomic); }
//#line 92
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
//#line 92
  ;
  DigBaseP__m_len = 1;

  if (*payload == 'Y' || *payload == 'y') 
    {
      {
//#line 97
        {
//#line 97
          if (1000 >= uart_debug_level) {
//#line 97
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 97
                {
//#line 97
                  sprintf(uart_debug_buf, "\r\n\r\n* Sending ... from [%d], to [%d], len=[%d]\r\n", (int )address, (int )dest_address, (int )DigBaseP__m_len);
                }
//#line 98
                __nesc_atomic_end(__nesc_atomic); }
//#line 97
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 97
      ;



      DigBaseP__AMSend__send(dest_address, &DigBaseP__m_msg, DigBaseP__m_len);
    }
  else 
    {
      DigBaseP__m_input_type = DigBaseP__INPUT_ADDRESS;

      DigBaseP__showMenu__postTask();
    }
  {
//#line 109
    P1_2 = ~P1_2;
  }
//#line 109
  ;
}

//#line 34
static  /*inline*/   void DigBaseP__showMenu__runTask(void)
{
  if (DigBaseP__m_input_type == DigBaseP__INPUT_DATA) 
    {
      {
//#line 38
        {
//#line 38
          if (1000 >= uart_debug_level) {
//#line 38
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 38
                {
//#line 38
                  sprintf(uart_debug_buf, "\r\n* To Send:(Y or N)\r\n");
                }
//#line 39
                __nesc_atomic_end(__nesc_atomic); }
//#line 38
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 38
      ;
    }
  else 
    {
      {
//#line 42
        {
//#line 42
          if (1000 >= uart_debug_level) {
//#line 42
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 42
                {
//#line 42
                  sprintf(uart_debug_buf, "\r\n###################################################\r\n* MY NodeId = 0x%x, Group=0x%x, destination ?\r\n", (int )DigBaseP__AMPacket__address(), (int )TOS_IEEE_PANID);
                }
//#line 43
                __nesc_atomic_end(__nesc_atomic); }
//#line 42
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 42
      ;



      DigBaseP__m_input_type = DigBaseP__INPUT_ADDRESS;
      DigBaseP__m_address_index = 0;
    }
}

//# 50 "/opt/tinyos-2.x/tos/types/TinyError.h"
static  /*inline*/  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

//# 38 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
static  /*inline*/   error_t HalFlashP__Init__init(void)
{
  return 0;
}

//# 103 "/opt/atos/tos/chips/rf2530/hardware/control/RfConfigP.nc"
static  /*inline*/   error_t RfConfigP__Init__init(void)
{
  /* atomic removed: atomic calls only */
  {
    RfConfigP__m_channel = 11;






    if (RfConfigP__m_channel < 11 || RfConfigP__m_channel > 26) 
      {
        RfConfigP__m_channel = 11;
      }

    RfConfigP__m_tx_power = 0xF5;
    RfConfigP__m_hw_auto_ack = FALSE;





    RfConfigP__m_address_recognition = TRUE;
  }


  return 0;
}

//# 10 "/opt/atos/tos/chips/cc2530/random/CC2530RandomLfsrP.nc"
static  /*inline*/   error_t CC2530RandomLfsrP__Init__init(void)
//#line 10
{
  /* atomic removed: atomic calls only */
//#line 11
  {
    uint16_t rndSeed;
    uint8_t i;


    ADCCON1 = ((ADCCON1 & ~((1 << 3) | (1 << 2))) | (1 << 3)) | (1 << 2);
    (




    (uint8_t xdata *)0)[0x6189] = 0x40 | (2 << 2);


    RFST = 0xE3;






    while (!(((uint8_t xdata *)0)[0x6199] & 0x01)) ;

    rndSeed = 0;
    for (i = 0; i < 16; i++) 
      {

        rndSeed = (rndSeed << 1) | (((uint8_t xdata *)0)[0x61A7] & 0x01);
      }






    if (rndSeed == 0x0000 || rndSeed == 0x0380) 
      {
        rndSeed = 0xBABE;
      }





    RNDL = rndSeed & 0xFF;
    RNDL = rndSeed >> 8;


    RFST = 0xEF;
    (

    (uint8_t xdata *)0)[0x6189] = 0x40 | (0 << 2);
  }

  return 0;
}

//# 80 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
static  /*inline*/   error_t /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__Init__init(void)
{
  /* atomic removed: atomic calls only */
  {
    memset(/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_address, 0, sizeof /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_address);
    memset(/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_dsn, 0, sizeof /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_dsn);

    {
      unsigned char __nesc_temp = 
//#line 87
      0;

//#line 87
      return __nesc_temp;
    }
  }
}

//# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
 /*inline*/  static  error_t RealMainP__SoftwareInit__init(void){
//#line 51
  unsigned char result;
//#line 51

//#line 51
  result = /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__Init__init();
//#line 51
  result = ecombine(result, CC2530RandomLfsrP__Init__init());
//#line 51
  result = ecombine(result, RfConfigP__Init__init());
//#line 51
  result = ecombine(result, /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Init__init());
//#line 51
  result = ecombine(result, /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Init__init());
//#line 51
  result = ecombine(result, HalFlashP__Init__init());
//#line 51

//#line 51
  return result;
//#line 51
}
//#line 51
//# 14 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static  /*inline*/  void uart0IntEnable(void)
{

  UTX0IF = 0;
  URX0IF = 0;

  URX0IE = 1;
}

//# 22 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static  /*inline*/  error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__doUart0Init(uint32_t baud)
{
  uart0Init(baud);
  uart0IntEnable();

  return 0;
}

static  /*inline*/   error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0StdControl__start(void)
{
  return /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__doUart0Init(9600);
}

//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
#define HplCC2530UartGenericP__0__subUartStdControl__start(void) HalCC2530Uart0IsrP__0__uart0StdControl__start()
//# 18 "/opt/atos/tos/chips/cc2530/usart/HplCC2530UartGenericP.nc"
static  /*inline*/   error_t /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__UartStdControl__start(void)
{
  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_buf = (void *)0;
  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_buf = (void *)0;

  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_len = 0;
  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_len = 0;

  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_pos = 0;
  /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_pos = 0;

  return /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__subUartStdControl__start();
}

//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
#define DigBaseP__UartStdControl__start(void) HplCC2530UartGenericP__0__UartStdControl__start()
//# 27 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareTxP.nc"
static  /*inline*/   error_t RfHardwareTxP__StdControl__start(void)
{
  /* atomic removed: atomic calls only */
  {

    do {
        (
//#line 32
        (uint8_t xdata *)0)[0x61A4] &= ~(1 << 1);
      }
    while (
//#line 32
    32 == -1);
    do {
//#line 33
        S1CON = 0x00;
//#line 33
        RFIRQF1 = ~(1 << 1);
      }
    while (
//#line 33
    33 == -1);
  }

  return 0;
}

//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
#define RfHardwareP__TxControl__start(void) RfHardwareTxP__StdControl__start()
//# 59 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static  /*inline*/    error_t RfInterruptsP__InterruptRFErr__enableRisingEdge(void)
{
  /* atomic removed: atomic calls only */
//#line 61
  {
    RFERRIF = 0;
    ((uint8_t xdata *)0)[0x61A5] = 1 << 2;
    RFERRIE = 1;
  }
  return 0;
}

//# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
#define RfHardwareRxP__0__InterruptRFErr__enableRisingEdge(void) RfInterruptsP__InterruptRFErr__enableRisingEdge()
//# 36 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static  /*inline*/    error_t RfInterruptsP__InterruptFIFOP__enableRisingEdge(void)
{
  /* atomic removed: atomic calls only */
//#line 38
  {
    do {
        (
//#line 39
        (uint8_t xdata *)0)[0x61A3] |= 1 << 2;
      }
    while (
//#line 39
    39 == -1);
  }
  return 0;
}

//# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
#define RfHardwareRxP__0__InterruptFIFOP__enableRisingEdge(void) RfInterruptsP__InterruptFIFOP__enableRisingEdge()
//# 33 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static  /*inline*/   error_t /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__StdControl__start(void)
{
  {
//#line 35
    /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head = /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail = 0;
  }
//#line 35
  ;
  {
//#line 36
    do {
//#line 36
        RFST = 0xED;
//#line 36
        RFST = 0xED;
      }
    while (
//#line 36
    36 == -1);
//#line 36
    do {
//#line 36
        S1CON = 0x00;
//#line 36
        RFIRQF0 = ~(1 << 2);
      }
    while (
//#line 36
    36 == -1);
  }
//#line 36
  ;

  /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptFIFOP__enableRisingEdge();
  /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptRFErr__enableRisingEdge();

  return 0;
}

//# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
#define RfHardwareP__RxControl__start(void) RfHardwareRxP__0__StdControl__start()
//# 57 "/opt/atos/tos/chips/rf2530/hardware/control/RfConfigP.nc"
static  /*inline*/  void RfConfigP__writeTxPower(void)
{
  /* atomic removed: atomic calls only */
  {
    do {
        (
//#line 61
        (uint8_t xdata *)0)[0x6190] = RfConfigP__m_tx_power;
      }
    while (
//#line 61
    61 == -1);
  }
}

//#line 52
static  /*inline*/  void RfConfigP__writeFIFOPThrehold(void)
{
  do {
      (
//#line 54
      (uint8_t xdata *)0)[0x6194] = 128 - 1;
    }
  while (
//#line 54
  54 == -1);
}

//#line 34
static  /*inline*/  void RfConfigP__writeFilter(void)
{
  /* atomic removed: atomic calls only */
  {

    if (RfConfigP__m_hw_auto_ack) {
      ((uint8_t xdata *)0)[0x6189] = 0x40 | (1 << 5);
      }
    else {
      (
//#line 42
      (uint8_t xdata *)0)[0x6189] = 0x40;
      }

    if (RfConfigP__m_address_recognition) {
      do {
          (
//#line 46
          (uint8_t xdata *)0)[0x6180] |= 1 << 0;
        }
      while (
//#line 46
      46 == -1);
      }
    else {
//#line 48
      do {
          (
//#line 48
          (uint8_t xdata *)0)[0x6180] &= ~(1 << 0);
        }
      while (
//#line 48
      48 == -1);
      }
  }
}

//#line 26
static  /*inline*/  void RfConfigP__writeChannel(void)
{
  /* atomic removed: atomic calls only */
  {
    do {
        (
//#line 30
        (uint8_t xdata *)0)[0x618F] = 0x0B + 5 * (RfConfigP__m_channel - 11);
      }
    while (
//#line 30
    30 == -1);
  }
}

//#line 65
static  /*inline*/  void RfConfigP__RfConfigWrite(void)
{
  /* atomic removed: atomic calls only */
  {
    RfConfigP__writeChannel();
    RfConfigP__writeFilter();
    RfConfigP__writeFIFOPThrehold();
    RfConfigP__writeTxPower();
  }
}

//#line 135
static  /*inline*/   void RfConfigP__RfConfig__flush(void)
{
  RfConfigP__RfConfigWrite();
}

//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfConfig.nc"
#define RfHardwareP__RfConfig__flush(void) RfConfigP__RfConfig__flush()
//# 85 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static  /*inline*/   void RfPowerP__RfPower__rxOn(void)
{
  /* atomic removed: atomic calls only */
//#line 87
  do {
//#line 87
      RFST = 0xED;
//#line 87
      RFST = 0xED;
    }
  while (
//#line 87
  87 == -1);
  /* atomic removed: atomic calls only */
  do {
//#line 89
      RFST = 0xE3;
    }
  while (
//#line 89
  89 == -1);
}

//# 9 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
#define RfHardwareP__RfPower__rxOn(void) RfPowerP__RfPower__rxOn()
//# 103 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static  /*inline*/   void RfPowerP__RfPower__oscOn(void)
{
}

//# 13 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
#define RfHardwareP__RfPower__oscOn(void) RfPowerP__RfPower__oscOn()
//# 16 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static  /*inline*/   void RfPowerP__RfPower__radioOn(void)
{
  (
//#line 31
  (uint8_t xdata *)0)[0x6196] = 0xF8;
  (









  (uint8_t xdata *)0)[0x61AE] = 0x00;
  (

  (uint8_t xdata *)0)[0x61B2] = 0x15;
  (
//#line 58
  (uint8_t xdata *)0)[0x61FA] = 0x09;
  (

  (uint8_t xdata *)0)[0x61E5] = 0xFF;


  IEN2 |= 1 << 0;


  RFERRIE = 1;







  do {
      (
//#line 75
      (uint8_t xdata *)0)[0x6164] = 0;
      (
//#line 75
      (uint8_t xdata *)0)[0x6165] = 0;
      (
//#line 75
      (uint8_t xdata *)0)[0x6166] = 0;
    }
  while (
//#line 75
  75 == -1);
  do {
      (
//#line 76
      (uint8_t xdata *)0)[0x6167] = 0;
      (
//#line 76
      (uint8_t xdata *)0)[0x6168] = 0;
      (
//#line 76
      (uint8_t xdata *)0)[0x6169] = 0;
    }
  while (
//#line 76
  76 == -1);
}

//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
#define RfHardwareP__RfPower__radioOn(void) RfPowerP__RfPower__radioOn()
//# 11 "/opt/atos/tos/chips/rf2530/hardware/control/RfPowerP.nc"
static  /*inline*/   void RfPowerP__RfPower__reset(void)
{
}

//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfPower.nc"
#define RfHardwareP__RfPower__reset(void) RfPowerP__RfPower__reset()
//# 19 "/opt/atos/tos/chips/rf2530/hardware/RfHardwareP.nc"
static  /*inline*/   error_t RfHardwareP__AtosControl__start(void)
{

  RfHardwareP__RfPower__reset();
  RfHardwareP__RfPower__radioOn();
  RfHardwareP__RfPower__oscOn();
  RfHardwareP__RfPower__rxOn();


  RfHardwareP__RfConfig__flush();








  RfHardwareP__RxControl__start();
  RfHardwareP__TxControl__start();

  return 0;
}

//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define AtosMacP__HardwareAtosControl__start(void) RfHardwareP__AtosControl__start()
//# 7 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
#define RfMacBaseCsmaP__FlashIEEE__GetIEEE(arg_0x7ea50068) FlashIEEEP__FlashIEEE__GetIEEE(arg_0x7ea50068)
//# 159 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  /*inline*/    void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__stop(void)
{
  /* atomic removed: atomic calls only */
//#line 161
  T1CCTL1 &= ~(1 << CC2530_T1CCTLx_IM);
}

//# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC__1__AlarmFrom__stop(void) HplCC2530Timer1P__0__Alarm1__stop()
//# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void)
{
  /* atomic removed: atomic calls only */
//#line 93
  /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop();
}

//# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define RfMacBaseCsmaP__BackoffTimer__stop(void) TransformAlarmC__1__Alarm__stop()
//# 226 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static  /*inline*/   error_t RfMacBaseCsmaP__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    RfMacBaseCsmaP__BackoffTimer__stop();
    RfMacBaseCsmaP__m_cancel = FALSE;
    RfMacBaseCsmaP__m_state = RfMacBaseCsmaP__CSMA_STATE_SAMPLE_CCA;
    RfMacBaseCsmaP__m_congestion_count = 0;

    RfMacBaseCsmaP__m_started = TRUE;

    RfMacBaseCsmaP__m_congestion_delay = 0;

    RfMacBaseCsmaP__FlashIEEE__GetIEEE(RfMacBaseCsmaP__m_test_ieee);

    {
      unsigned char __nesc_temp = 
//#line 241
      0;

//#line 241
      return __nesc_temp;
    }
  }
}

//# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
#define RfMacBaseSendP__0__Random__rand16(void) CC2530RandomLfsrP__Random__rand16()
//# 96 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
static  /*inline*/   /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__remove(uint8_t idx)
{
  /* atomic removed: atomic calls only */
  {
    /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t t = /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__element(idx);
    uint8_t end = (/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__tail + 4 - 1) % 4;
    uint8_t next_idx;

    if (!/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__empty()) 
      {
        idx += /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__head;
        idx %= 4;

        while (idx != end) 
          {
            next_idx = (idx + 1) % 4;
            /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue[idx] = /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue[next_idx];
            idx = next_idx;
          }

        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__tail = end;
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__size--;
      }

    {
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t __nesc_temp = 
//#line 120
      t;

//#line 120
      return __nesc_temp;
    }
  }
}

//#line 124
static  /*inline*/   void /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__clear(void)
{
  /* atomic removed: atomic calls only */
  {
    while (/*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__size() > 0) 
      {
        /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__remove(0);
      }
  }
}

//# 67 "/opt/atos/tos/lib/atos/utils/QueueEx.nc"
#define RfMacBaseSendP__0__SendQueue__clear(void) QueueExC__0__QueueEx__clear()
//# 186 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseSendP.nc"
static  /*inline*/   error_t /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__SendQueue__clear();
    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_sending = FALSE;

    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_started = TRUE;

    /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__m_hardware_dsn = /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__Random__rand16();

    {
      unsigned char __nesc_temp = 
//#line 197
      0;

//#line 197
      return __nesc_temp;
    }
  }
}

//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define AMResourceCenterP__SubAtosControl__start(void) RfMacBaseSendP__0__AtosControl__start()
//# 83 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static  /*inline*/   error_t AMResourceCenterP__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    AMResourceCenterP__SubAtosControl__start();

    AMResourceCenterP__m_started = TRUE;

    {
      unsigned char __nesc_temp = 
//#line 91
      0;

//#line 91
      return __nesc_temp;
    }
  }
}

//# 75 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static  /*inline*/   error_t RfActiveMessageP__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    RfActiveMessageP__m_started = TRUE;

    {
      unsigned char __nesc_temp = 
//#line 81
      0;

//#line 81
      return __nesc_temp;
    }
  }
}

//# 192 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static  /*inline*/   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /* atomic removed: atomic calls only */
//#line 194
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

//# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP__0__AckTimer__stop(void) VirtualizeTimerC__0__Timer__stop(1U)
#define RfReliableMacSendP__0__TimeoutTimer__stop(void) VirtualizeTimerC__0__Timer__stop(2U)
//# 204 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending = FALSE;
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_result = FAIL;


    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__stop();
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__stop();

    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_started = TRUE;

    {
      unsigned char __nesc_temp = 
//#line 217
      0;

//#line 217
      return __nesc_temp;
    }
  }
}

//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define RfReliableMacRetrySendP__0__SubAtosControl__start(void) RfReliableMacSendP__0__AtosControl__start()
//# 151 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_sending = FALSE;
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_retry_times = 0;

    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__SubAtosControl__start();

    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_started = TRUE;

    {
      unsigned char __nesc_temp = 
//#line 162
      0;

//#line 162
      return __nesc_temp;
    }
  }
}

//# 101 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static  /*inline*/   error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_started = TRUE;

    memset(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_ack_msg, 0, sizeof /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_ack_msg);

    {
      unsigned char __nesc_temp = 
//#line 109
      0;

//#line 109
      return __nesc_temp;
    }
  }
}

//# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
#define RfReliableMacSendP__1__AckTimer__stop(void) VirtualizeTimerC__0__Timer__stop(3U)
#define RfReliableMacSendP__1__TimeoutTimer__stop(void) VirtualizeTimerC__0__Timer__stop(4U)
//# 204 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending = FALSE;
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_result = FAIL;


    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__stop();
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__stop();

    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_started = TRUE;

    {
      unsigned char __nesc_temp = 
//#line 217
      0;

//#line 217
      return __nesc_temp;
    }
  }
}

//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define RfReliableMacRetrySendP__1__SubAtosControl__start(void) RfReliableMacSendP__1__AtosControl__start()
//# 151 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_sending = FALSE;
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_retry_times = 0;

    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__SubAtosControl__start();

    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_started = TRUE;

    {
      unsigned char __nesc_temp = 
//#line 162
      0;

//#line 162
      return __nesc_temp;
    }
  }
}

//# 101 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static  /*inline*/   error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AtosControl__start(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_started = TRUE;

    memset(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_ack_msg, 0, sizeof /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_ack_msg);

    {
      unsigned char __nesc_temp = 
//#line 109
      0;

//#line 109
      return __nesc_temp;
    }
  }
}

//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
 /*inline*/  static  error_t AtosMacP__SubAtosControl__start(void){
//#line 4
  unsigned char result;
//#line 4

//#line 4
  result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AtosControl__start();
//#line 4
  result = ecombine(result, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AtosControl__start());
//#line 4
  result = ecombine(result, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AtosControl__start());
//#line 4
  result = ecombine(result, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AtosControl__start());
//#line 4
  result = ecombine(result, RfActiveMessageP__AtosControl__start());
//#line 4
  result = ecombine(result, AMResourceCenterP__AtosControl__start());
//#line 4
  result = ecombine(result, RfMacBaseCsmaP__AtosControl__start());
//#line 4

//#line 4
  return result;
//#line 4
}
//#line 4
//# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
#define AtosMacP__Random__rand16(void) CC2530RandomLfsrP__Random__rand16()
//# 17 "/opt/atos/tos/lib/atos/net/AtosMac/AtosMacP.nc"
static  /*inline*/   error_t AtosMacP__AtosControl__start(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      rf_rmac_dsn = AtosMacP__Random__rand16();

      AtosMacP__SubAtosControl__start();
      AtosMacP__HardwareAtosControl__start();

      AtosMacP__m_started = TRUE;

      {
        unsigned char __nesc_temp = 
//#line 28
        0;

        {
//#line 28
          __nesc_atomic_end(__nesc_atomic); 
//#line 28
          return __nesc_temp;
        }
      }
    }
//#line 31
    __nesc_atomic_end(__nesc_atomic); }
}

//# 4 "/opt/atos/tos/lib/atos/common/AtosControl.nc"
#define DigBaseP__AtosControl__start(void) AtosMacP__AtosControl__start()
//# 176 "DigBaseP.nc"
static  /*inline*/   void DigBaseP__Boot__booted(void)
{

  DigBaseP__AtosControl__start();


  DigBaseP__UartStdControl__start();
  {
//#line 183
    P1_3 = 1;
  }
//#line 183
  ;
  {
//#line 184
    P1_2 = 1;
  }
//#line 184
  ;

  {
//#line 186
    {
//#line 186
      if (1000 >= uart_debug_level) {
//#line 186
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 186
            {
//#line 186
              sprintf(uart_debug_buf, "\r\n###############################################\r\n");
            }
//#line 187
            __nesc_atomic_end(__nesc_atomic); }
//#line 186
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
//#line 186
  ;
  {
//#line 187
    {
//#line 187
      if (1000 >= uart_debug_level) {
//#line 187
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 187
            {
//#line 187
              sprintf(uart_debug_buf, "   My Address = 0x%x, Group = 0x%x\r\n", (int )DigBaseP__AMPacket__address(), (int )TOS_IEEE_PANID);
            }
//#line 188
            __nesc_atomic_end(__nesc_atomic); }
//#line 187
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
//#line 187
  ;
  {
//#line 188
    {
//#line 188
      if (1000 >= uart_debug_level) {
//#line 188
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 188
            {
//#line 188
              sprintf(uart_debug_buf, "###############################################\r\n");
            }
//#line 189
            __nesc_atomic_end(__nesc_atomic); }
//#line 188
          ATOS_DEBUG_UART_PRINT();
        }
    }
  }
//#line 188
  ;

  DigBaseP__m_input_type = DigBaseP__INPUT_ADDRESS;
  DigBaseP__showMenu__postTask();
}

//# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
#define RealMainP__Boot__booted(void) DigBaseP__Boot__booted()
//# 81 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
static  /*inline*/    void McuSleepP__McuSleepControl__default__afterWakeup(void)
{
}

//# 10 "/opt/atos/tos/lib/atos/power/McuSleepControl.nc"
#define McuSleepP__McuSleepControl__afterWakeup(void) McuSleepP__McuSleepControl__default__afterWakeup()
//# 84 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
static  /*inline*/    error_t McuSleepP__ModuleReset__default__reset(uint8_t reset_level)
{
}

//# 6 "/opt/atos/tos/lib/atos/utils/ModuleReset.nc"
#define McuSleepP__ModuleReset__reset(arg_0x7ebe5310) McuSleepP__ModuleReset__default__reset(arg_0x7ebe5310)
//# 65 "/opt/atos/tos/chips/cc2530/mcs51/mcs51hardware.h"
static   /*inline*/   void __nesc_enable_interrupt(void)
//#line 65
{
//#line 65
  EA = 1;
}

//# 78 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
static  /*inline*/    void McuSleepP__McuSleepControl__default__beforeSleep(void)
{
}

//# 8 "/opt/atos/tos/lib/atos/power/McuSleepControl.nc"
#define McuSleepP__McuSleepControl__beforeSleep(void) McuSleepP__McuSleepControl__default__beforeSleep()
//# 36 "/opt/atos/tos/lib/atos/power/McuSleepP.nc"
static  /*inline*/    void McuSleepP__McuSleep__sleep(void)
{


  if (McuSleepP__m_need_sleep) 
    {

      ;

      do {
//#line 45
          SLEEPCMD = (SLEEPCMD & ~CC2530_SLEEP_MODE_MASK) | CC2530_SLEEP_POWERMODE_2;
        }
      while (
//#line 45
      0);

      McuSleepP__McuSleepControl__beforeSleep();

      ;
      __nesc_enable_interrupt();

      {
//#line 52
        P1_3 = 1;
      }
//#line 52
      ;

      McuSleepP__m_need_sleep = FALSE;
      {
//#line 55
        PCON = 0x01;
      }
//#line 55
      ;






      ;

      {
//#line 64
        P1_3 = 0;
      }
//#line 64
      ;

      McuSleepP__ModuleReset__reset(0);
      ;

      McuSleepP__McuSleepControl__afterWakeup();
    }
  else 
    {
    }
}

//# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
#define SchedulerBasicP__McuSleep__sleep(void) McuSleepP__McuSleep__sleep()
//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgr.nc"
#define SchedulerBasicP__TopTaskMgr__hasTasks(void) TopTaskMgrP__TopTaskMgr__hasTasks()
//# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static  /*inline*/    void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void)
{
}

//# 170 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void)
{
}

//# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
 /*inline*/  static   void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void){
//#line 71
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow();
//#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
//#line 71
}
//#line 71
//# 125 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static  /*inline*/    void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper++;

      if ((/*CounterMilli32C.Transform*/TransformCounterC__0__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) 
        {
          /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow();
        }
    }
//#line 135
    __nesc_atomic_end(__nesc_atomic); }
}

//# 170 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void)
{
}

//# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
#define TransformCounterC__1__Counter__overflow(void) TransformAlarmC__1__Counter__overflow()
//# 125 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static  /*inline*/    void /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper++;

      if ((/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper & /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__OVERFLOW_MASK) == 0) 
        {
          /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__overflow();
        }
    }
//#line 135
    __nesc_atomic_end(__nesc_atomic); }
}

//# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
 /*inline*/  static   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__overflow(void){
//#line 71
  /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow();
//#line 71
  /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
//#line 71
}
//#line 71
//# 534 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  /*inline*/     void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm2__default__fired(void)
//#line 534
{
}

//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define HplCC2530Timer1P__0__Alarm2__fired(void) HplCC2530Timer1P__0__Alarm2__default__fired()
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfMacBaseCsmaP__doGo__postTask(void) SchedulerBasicP__TaskBasic__postTask(RfMacBaseCsmaP__doGo)
//# 83 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static  /*inline*/  uint32_t RfMacBaseCsmaP__congestionBackoffTimer(void)
{
  RfMacBaseCsmaP__m_this_random = RfMacBaseCsmaP__Random__rand16() % RfMacBaseCsmaP__m_congestion_delay;
  if (RfMacBaseCsmaP__m_this_random == 0) {
//#line 86
    RfMacBaseCsmaP__m_this_random = 1;
    }
//#line 87
  RfMacBaseCsmaP__m_this_delay += RfMacBaseCsmaP__m_this_random;
  return (uint32_t )RfMacBaseCsmaP__m_this_random * RfMacBaseCsmaP__RF_BACKOFF_PERIOD;
}

static  /*inline*/  void RfMacBaseCsmaP__congestion(void)
{


  if (RfMacBaseCsmaP__m_congestion_count++ < RfMacBaseCsmaP__RF_CONGESTION_MAX) 
    {
      RfMacBaseCsmaP__BackoffTimer__start(RfMacBaseCsmaP__congestionBackoffTimer());
    }
  else 
    {
      RfMacBaseCsmaP__signalDone(ERR_MAC_CONGESTION_FAIL);
    }
}

//#line 135
static  /*inline*/    void RfMacBaseCsmaP__BackoffTimer__fired(void)
{
  if (!(((uint8_t xdata *)0)[0x6193] & (1 << 4))) 
    {
      RfMacBaseCsmaP__congestion();
      return;
    }




  if (RfMacBaseCsmaP__m_state == RfMacBaseCsmaP__CSMA_STATE_SAMPLE_CCA) 
    {
      RfMacBaseCsmaP__m_state = RfMacBaseCsmaP__CSMA_STATE_BEGIN_SEND;


      RfMacBaseCsmaP__BackoffTimer__start(RfMacBaseCsmaP__RF_TIME_ACK_TURNAROUND);
    }
  else {
//#line 153
    if (RfMacBaseCsmaP__m_state == RfMacBaseCsmaP__CSMA_STATE_BEGIN_SEND) 
      {
        RfMacBaseCsmaP__doGo__postTask();
      }
    else 
      {
      }
    }
}

//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC__1__Alarm__fired(void) RfMacBaseCsmaP__BackoffTimer__fired()
//# 155 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt == 0) 
        {
          /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired();
        }
      else 
        {
          /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
        }
    }
//#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define HplCC2530Timer1P__0__Alarm1__fired(void) TransformAlarmC__1__AlarmFrom__fired()
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define AlarmToTimerC__0__firedTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(AlarmToTimerC__0__firedTask)
//# 93 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static  /*inline*/    void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__firedTask__postTask();
}

//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define TransformAlarmC__0__Alarm__fired(void) AlarmToTimerC__0__Alarm__fired()
//# 155 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static  /*inline*/    void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt == 0) 
        {
          /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired();
        }
      else 
        {
          /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
        }
    }
//#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

//# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
#define HplCC2530Timer1P__0__Alarm0__fired(void) TransformAlarmC__0__AlarmFrom__fired()
//# 403 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  /*inline*/   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__TopTaskHandler__handler(void)
{
  uint8_t flag;

  do {
//#line 407
      m_critical_state = EA;
//#line 407
      EA = 0;
    }
  while (
//#line 407
  407 == -1);

  {
    flag = /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag;
    /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag = 0x00;
  }

  do {
//#line 414
      EA = m_critical_state;
    }
  while (
//#line 414
  414 == -1);


  if (flag & (1 << 0)) 
    {
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm0__fired();
    }

  if (flag & (1 << 1)) 
    {
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm1__fired();
    }

  if (flag & (1 << 2)) 
    {
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Alarm2__fired();
    }

  if (flag & (1 << 3)) 
    {
    }


  if (flag & (1 << 4)) 
    {
    }


  if (flag & (1 << 5)) 
    {
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__overflow();
    }


  if (/*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag) 
    {
      {
//#line 450
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 450
          {
//#line 450
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
//#line 451
          __nesc_atomic_end(__nesc_atomic); }
      }
//#line 450
      ;
    }
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define DigBaseP__sendData__postTask(void) SchedulerBasicP__TaskBasic__postTask(DigBaseP__sendData)
//# 134 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   uint8_t RfPacketP__Packet__maxPayloadLength(void)
{
  return 127 - (sizeof(rf_header_t ) - 1 + sizeof(uint16_t )) - 0;
}

//# 95 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacPacketP__SubPacket__maxPayloadLength(void) RfPacketP__Packet__maxPayloadLength()
//# 30 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  /*inline*/   uint8_t RfReliableMacPacketP__Packet__maxPayloadLength(void)
{
  return RfReliableMacPacketP__SubPacket__maxPayloadLength() - sizeof(rf_rmac_header_t );
}

//# 95 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define DigBaseP__Packet__maxPayloadLength(void) RfReliableMacPacketP__Packet__maxPayloadLength()
//# 125 "DigBaseP.nc"
static  /*inline*/    void DigBaseP__UartStream__receivedByte(uint8_t c)
{

  if (c != '\r') 
    {
      if (DigBaseP__m_input_type == DigBaseP__INPUT_DATA) 
        {
          uint8_t *payload = (uint8_t *)DigBaseP__Packet__getPayload(&DigBaseP__m_msg, (void *)0);

//#line 133
          if (DigBaseP__m_len >= DigBaseP__Packet__maxPayloadLength()) 
            {
              return;
            }

          *payload = c;
          {
//#line 139
            {
//#line 139
              if (1000 >= uart_debug_level) {
//#line 139
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 139
                    {
//#line 139
                      sprintf(uart_debug_buf, "%c", c);
                    }
//#line 140
                    __nesc_atomic_end(__nesc_atomic); }
//#line 139
                  ATOS_DEBUG_UART_PRINT();
                }
            }
          }
//#line 139
          ;

          if (DigBaseP__m_len < DigBaseP__Packet__maxPayloadLength()) 
            {
              return;
            }
        }
      else 
        {
          if (DigBaseP__m_address_index < DigBaseP__MAX_ADDRESS_LEN) 
            {
              DigBaseP__m_address_str[DigBaseP__m_address_index++] = c;
              {
//#line 151
                {
//#line 151
                  if (1000 >= uart_debug_level) {
//#line 151
                      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 151
                        {
//#line 151
                          sprintf(uart_debug_buf, "%c", c);
                        }
//#line 152
                        __nesc_atomic_end(__nesc_atomic); }
//#line 151
                      ATOS_DEBUG_UART_PRINT();
                    }
                }
              }
//#line 151
              ;
            }

          if (DigBaseP__m_address_index < DigBaseP__MAX_ADDRESS_LEN) 
            {
              return;
            }
        }
    }
  else {

      if (DigBaseP__m_input_type == DigBaseP__INPUT_DATA) 
        {
          DigBaseP__sendData__postTask();
        }
      else 
        {

          DigBaseP__m_input_type = DigBaseP__INPUT_DATA;
          DigBaseP__showMenu__postTask();
        }
    }
}

//# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
#define HplCC2530UartGenericP__0__UartStream__receivedByte(arg_0x7eb73860) DigBaseP__UartStream__receivedByte(arg_0x7eb73860)
//# 199 "DigBaseP.nc"
static  /*inline*/    void DigBaseP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
{
}

//# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
#define HplCC2530UartGenericP__0__UartStream__receiveDone(arg_0x7eb72540,arg_0x7eb726d0,arg_0x7eb72858) DigBaseP__UartStream__receiveDone(arg_0x7eb72540, arg_0x7eb726d0, arg_0x7eb72858)
//# 70 "/opt/atos/tos/chips/cc2530/usart/HplCC2530UartGenericP.nc"
static  /*inline*/    void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__Uart__get(uint8_t _data)
{
  if (/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_buf) 
    {
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_buf[/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_pos++] = _data;
      if (/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_pos >= /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_len) 
        {
          uint8_t *buf = /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_buf;

//#line 78
          /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_buf = (void *)0;
          /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__UartStream__receiveDone(buf, /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_rx_len, 0);
        }
    }
  else 
    {
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__UartStream__receivedByte(_data);
    }
}

//# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
#define HalCC2530Uart0IsrP__0__uart0__get(arg_0x7e7108d8) HplCC2530UartGenericP__0__Uart__get(arg_0x7e7108d8)
//# 104 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static  /*inline*/   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__RxTaskHandler__handler(void)
{
  uint8_t _data;

  if (!(/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_head == /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_tail)) 
    {
      {
//#line 110
        _data = /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf__data[/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_head & ((1 << 6) - 1)];
//#line 110
        /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_head = (/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_head + 1) & ((1 << 6) - 1);
      }
//#line 110
      ;

      /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0__get(_data);

      if (!(/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_head == /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_tail)) 
        {
          {
//#line 116
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 116
              {
//#line 116
                TopTaskMgrP__m_task_flag[1] = TRUE;
              }
//#line 117
              __nesc_atomic_end(__nesc_atomic); }
          }
//#line 116
          ;
        }
    }
}

//# 195 "DigBaseP.nc"
static  /*inline*/    void DigBaseP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error)
{
}

//# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
#define HplCC2530UartGenericP__0__UartStream__sendDone(arg_0x7eb747c8,arg_0x7eb74958,arg_0x7eb74ae0) DigBaseP__UartStream__sendDone(arg_0x7eb747c8, arg_0x7eb74958, arg_0x7eb74ae0)
//# 41 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static  /*inline*/    error_t /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0__put(uint8_t _data)
{



  uart0PutChar(_data);
  {
//#line 47
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 47
      {
//#line 47
        TopTaskMgrP__m_task_flag[2] = TRUE;
      }
//#line 48
      __nesc_atomic_end(__nesc_atomic); }
  }
//#line 47
  ;


  return 0;
}

//# 41 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
#define HplCC2530UartGenericP__0__Uart__put(arg_0x7e710338) HalCC2530Uart0IsrP__0__uart0__put(arg_0x7e710338)
//# 106 "/opt/atos/tos/chips/cc2530/usart/HplCC2530UartGenericP.nc"
static  /*inline*/    void /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__Uart__putDone(void)
{
  if (/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_pos < /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_len) 
    {
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__Uart__put(/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_buf[/*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_pos++]);
    }
  else 
    {
      uint8_t *buf = /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_buf;

//#line 115
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_buf = (void *)0;
      /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__UartStream__sendDone(buf, /*HplCC2530Uart0C.HplCC2530UartGenericP*/HplCC2530UartGenericP__0__m_tx_len, 0);
    }
}

//# 53 "/opt/tinyos-2.x/tos/lib/serial/SerialByteComm.nc"
#define HalCC2530Uart0IsrP__0__uart0__putDone(void) HplCC2530UartGenericP__0__Uart__putDone()
//# 121 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static  /*inline*/   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__TxTaskHandler__handler(void)
{
  /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uart0__putDone();
}

//# 257 "/usr/lib/ncc/nesc_nx.h"
static   /*inline*/   int8_t __nesc_ntoh_int8(const void *source)
//#line 257
{
//#line 257
  return __nesc_ntoh_uint8(source);
}

//# 67 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static  /*inline*/    message_t *RfActiveMessageP__Snoop__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
{
}

//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
#define RfActiveMessageP__Snoop__receive(arg_0x7e398bb0,arg_0x7eb51ca0,arg_0x7eb51e40,arg_0x7eb50010) RfActiveMessageP__Snoop__default__receive(arg_0x7e398bb0, arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010)
//# 204 "DigBaseP.nc"
static  /*inline*/   message_t *DigBaseP__Receive__receive(message_t *msg, void *payload, uint8_t len)
{
  float temp;
//#line 206
  float hum;
  uint8_t i;

//#line 208
  if (len == 2) 
    {
      {
//#line 210
        {
//#line 210
          if (1000 >= uart_debug_level) {
//#line 210
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 210
                {
//#line 210
                  sprintf(uart_debug_buf, "l%02x", (int )((uint8_t *)payload)[0]);
                }
//#line 211
                __nesc_atomic_end(__nesc_atomic); }
//#line 210
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 210
      ;
      {
//#line 211
        {
//#line 211
          if (1000 >= uart_debug_level) {
//#line 211
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 211
                {
//#line 211
                  sprintf(uart_debug_buf, "%02x\r\n", (int )((uint8_t *)payload)[1]);
                }
//#line 212
                __nesc_atomic_end(__nesc_atomic); }
//#line 211
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 211
      ;
    }
  else 
//#line 212
    {
      memcpy(&temp, (float *)payload, 4);
      memcpy(&hum, (float *)(payload + 4), 4);
      if (DigBaseP__sensor_type == 0) 
        {
          {
//#line 217
            {
//#line 217
              if (1000 >= uart_debug_level) {
//#line 217
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 217
                    {
//#line 217
                      sprintf(uart_debug_buf, "h%f\r\n", temp);
                    }
//#line 218
                    __nesc_atomic_end(__nesc_atomic); }
//#line 217
                  ATOS_DEBUG_UART_PRINT();
                }
            }
          }
//#line 217
          ;
          DigBaseP__sensor_type = 1;
        }
      else 
//#line 219
        {
          {
//#line 220
            {
//#line 220
              if (1000 >= uart_debug_level) {
//#line 220
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 220
                    {
//#line 220
                      sprintf(uart_debug_buf, "s%f\r\n", hum);
                    }
//#line 221
                    __nesc_atomic_end(__nesc_atomic); }
//#line 220
                  ATOS_DEBUG_UART_PRINT();
                }
            }
          }
//#line 220
          ;
          DigBaseP__sensor_type = 0;
        }






      {
//#line 229
        P1_3 = ~P1_3;
      }
//#line 229
      ;

      DigBaseP__m_input_type = DigBaseP__INPUT_ADDRESS;
    }
}

//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
#define RfReliableMacReceiveP__0__Receive__receive(arg_0x7eb51ca0,arg_0x7eb51e40,arg_0x7eb50010) DigBaseP__Receive__receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010)
//# 54 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   am_addr_t RfPacketP__AMPacket__source(message_t *amsg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->src);
}

//# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP__0__AMPacket__source(arg_0x7eb42b90) RfPacketP__AMPacket__source(arg_0x7eb42b90)
//# 92 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
static  /*inline*/   bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__DsnFilter__filter(uint8_t field_id, uint16_t addr, uint8_t dsn)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      {
        unsigned char __nesc_temp = 
//#line 96
        /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__filterDsn(addr, field_id, dsn);

        {
//#line 96
          __nesc_atomic_end(__nesc_atomic); 
//#line 96
          return __nesc_temp;
        }
      }
    }
//#line 99
    __nesc_atomic_end(__nesc_atomic); }
}

//# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
#define RfReliableMacReceiveP__0__DsnFilter__filter(arg_0x7e3c9ba8,arg_0x7e3c9d30) DsnFilterCenterP__0__DsnFilter__filter(0U, arg_0x7e3c9ba8, arg_0x7e3c9d30)
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacReceiveP__0__sendAckTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(RfReliableMacReceiveP__0__sendAckTask)
//# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP__0__AMPacket__setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP__AMPacket__setDestination(arg_0x7eb40190, arg_0x7eb40320)
//# 86 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   am_group_t RfPacketP__AMPacket__group(message_t *amsg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->destpan);
}

//# 166 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP__0__AMPacket__group(arg_0x7eb348b8) RfPacketP__AMPacket__group(arg_0x7eb348b8)










#define RfReliableMacReceiveP__0__AMPacket__setGroup(arg_0x7eb32010,arg_0x7eb321a0) RfPacketP__AMPacket__setGroup(arg_0x7eb32010, arg_0x7eb321a0)
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
#define RfReliableMacReceiveP__0__RfReliableMacAck__fillAckMessage(arg_0x7e653b48,arg_0x7e653cd8,arg_0x7e653e88,arg_0x7e652068) RfReliableMacAckP__RfReliableMacAck__fillAckMessage(arg_0x7e653b48, arg_0x7e653cd8, arg_0x7e653e88, arg_0x7e652068)
//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacReceiveP__0__SubPacket__getPayload(arg_0x7eb23358,arg_0x7eb23500) RfPacketP__Packet__getPayload(arg_0x7eb23358, arg_0x7eb23500)
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacReceiveP__0__PacketEx__getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP__PacketEx__getPacketHeader(arg_0x7e6b4120)


#define RfReliableMacReceiveP__0__PacketEx__isValidPacket(arg_0x7e6b45f8) RfReliableMacPacketP__PacketEx__isValidPacket(arg_0x7e6b45f8)
//# 57 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static  /*inline*/   message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__PacketEx__isValidPacket(msg)) 
    {
      rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__PacketEx__getPacketHeader(msg);
      rf_ack_t *ack_header = (rf_ack_t *)/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__SubPacket__getPayload(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_ack_msg, (void *)0);

      payload = (uint8_t *)payload + sizeof(rf_rmac_header_t );
      len -= sizeof(rf_rmac_header_t );





      if (header->ack_req) 
        {
          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__RfReliableMacAck__fillAckMessage(msg, header->dsn, &/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_ack_msg, ack_header);

          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__setGroup(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_ack_msg, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__group(msg));

          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__setDestination(&/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__m_ack_msg, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__source(msg));

          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAckTask__postTask();
        }


      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__DsnFilter__filter(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__AMPacket__source(msg), header->dsn)) 
        {
          return msg;
        }

      return /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__Receive__receive(msg, payload, len);
    }


  return msg;
}

//# 403 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedTraceAck(message_t *msg, anstd_trace_t *trace_ack)
{
}

//# 19 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP__AtosNetStd__receivedTraceAck(arg_0x7e2fa1f8,arg_0x7e2fa3b8) AtosNetStdP__AtosNetStd__default__receivedTraceAck(arg_0x7e2fa1f8, arg_0x7e2fa3b8)
//# 177 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/  void AtosNetStdP__receiveTraceAck(message_t *msg, anstd_trace_ack_t *trace_ack)
{
  int index = AtosNetStdP__indexOfTraceItem(trace_ack, AtosNetStdP__AMPacket__address());

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
      trace_ack->items[index + 1].backward_rssi = __nesc_ntoh_int8((unsigned char *)&((rf_meta_data_t *)msg->meta_data)->rssi);
    }

  AtosNetStdP__traceBackward(msg, trace_ack, index);
  AtosNetStdP__AtosNetStd__receivedTraceAck(msg, trace_ack);
}

//#line 399
static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedTrace(message_t *msg, anstd_trace_t *trace)
{
}

//# 18 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP__AtosNetStd__receivedTrace(arg_0x7e2fcb58,arg_0x7e2fcd08) AtosNetStdP__AtosNetStd__default__receivedTrace(arg_0x7e2fcb58, arg_0x7e2fcd08)
//# 134 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/  void AtosNetStdP__traceForward(message_t *msg, anstd_trace_t *trace, int index)
{
  uint16_t node_id = 0xFFFF;

//#line 137
  memcpy(&AtosNetStdP__m_send_msg, msg, sizeof AtosNetStdP__m_send_msg);

  if (index < trace->total_count - 1) 
    {
      node_id = trace->items[index + 1].node_id;
      AtosNetStdP__AMSend__send(node_id, &AtosNetStdP__m_send_msg, AtosNetStdP__Packet__payloadLength(&AtosNetStdP__m_send_msg));
    }
  else 
    {
      AtosNetStdP__traceEnd(msg, trace, index);
    }
}


static  /*inline*/  void AtosNetStdP__receiveTrace(message_t *msg, anstd_trace_t *trace)
{
  int index = AtosNetStdP__indexOfTraceItem(trace, AtosNetStdP__AMPacket__address());

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
      trace->items[index - 1].forward_rssi = __nesc_ntoh_int8((unsigned char *)&((rf_meta_data_t *)msg->meta_data)->rssi);
    }


  trace->traced_count = index + 1;

  AtosNetStdP__traceForward(msg, trace, index);
  AtosNetStdP__AtosNetStd__receivedTrace(msg, trace);
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define AtosNetStdP__rebootTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(AtosNetStdP__rebootTask)
//# 394 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedReboot(anstd_reboot_t *reboot)
{
}

//# 17 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP__AtosNetStd__receivedReboot(arg_0x7e2fc6a8) AtosNetStdP__AtosNetStd__default__receivedReboot(arg_0x7e2fc6a8)
//# 94 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/  void AtosNetStdP__receiveReboot(message_t *msg, anstd_reboot_t *reboot)
{
  AtosNetStdP__AtosNetStd__receivedReboot(reboot);
  AtosNetStdP__rebootTask__postTask();
}

//# 166 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static  /*inline*/   void FlashIEEEP__FlashIEEE__WriteIEEE(uint8_t *ieee)
{
  /* atomic removed: atomic calls only */
  {
    memcpy(FlashIEEEP__m_ieee, ieee, sizeof FlashIEEEP__m_ieee);
    FlashIEEEP__m_ieee_flash[0] = FlashIEEEP__m_ieee[7];
    FlashIEEEP__m_ieee_flash[1] = FlashIEEEP__m_ieee[6];
    FlashIEEEP__m_ieee_flash[2] = FlashIEEEP__m_ieee[5];
    FlashIEEEP__m_ieee_flash[3] = FlashIEEEP__m_ieee[4];
    FlashIEEEP__m_ieee_flash[4] = FlashIEEEP__m_ieee[3];
    FlashIEEEP__m_ieee_flash[5] = FlashIEEEP__m_ieee[2];
    FlashIEEEP__m_ieee_flash[6] = FlashIEEEP__m_ieee[1];
    FlashIEEEP__m_ieee_flash[7] = FlashIEEEP__m_ieee[0];


    FlashIEEEP__HalFlash__erase(0x3FFE8);
    FlashIEEEP__HalFlash__write(0x3FFE8, FlashIEEEP__m_ieee_flash, sizeof FlashIEEEP__m_ieee_flash);




    FlashIEEEP__readFromFlash();
    FlashIEEEP__FlashIEEE__WriteToRegister();
    FlashIEEEP__FlashIEEE__WriteToAM();
  }
}

//# 8 "/opt/atos/tos/platforms/antc5/devices/FlashIEEE.nc"
#define AtosNetStdP__FlashIEEE__WriteIEEE(arg_0x7ea50510) FlashIEEEP__FlashIEEE__WriteIEEE(arg_0x7ea50510)
//# 390 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedSetIEEE(anstd_setieee_t *setieee)
{
}

//# 16 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP__AtosNetStd__receivedSetIEEE(arg_0x7e2fc1f8) AtosNetStdP__AtosNetStd__default__receivedSetIEEE(arg_0x7e2fc1f8)
//# 84 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/  void AtosNetStdP__receiveSetIEEE(message_t *msg, anstd_setieee_t *setieee)
{
  AtosNetStdP__AtosNetStd__receivedSetIEEE(setieee);


  AtosNetStdP__FlashIEEE__WriteIEEE(setieee->ieee);

  AtosNetStdP__rebootTask__postTask();
}

//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define AtosNetStdP__nodeStatusUpTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(AtosNetStdP__nodeStatusUpTask)
//# 386 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedDiscovery(anstd_discovery_t *discovery)
{
}

//# 15 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP__AtosNetStd__receivedDiscovery(arg_0x7e2fdd20) AtosNetStdP__AtosNetStd__default__receivedDiscovery(arg_0x7e2fdd20)
//# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define AtosNetStdP__AMPacket__source(arg_0x7eb42b90) RfPacketP__AMPacket__source(arg_0x7eb42b90)
//# 75 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/  void AtosNetStdP__receiveDiscovery(message_t *msg, anstd_discovery_t *discovery)
{
  AtosNetStdP__m_ack_addr = AtosNetStdP__AMPacket__source(msg);
  AtosNetStdP__AtosNetStd__receivedDiscovery(discovery);


  AtosNetStdP__nodeStatusUpTask__postTask();
}

//#line 382
static  /*inline*/    void AtosNetStdP__AtosNetStd__default__receivedNodeStatusUp(message_t *msg, anstd_node_status_t *status)
{
}

//# 14 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStd.nc"
#define AtosNetStdP__AtosNetStd__receivedNodeStatusUp(arg_0x7e2fd698,arg_0x7e2fd850) AtosNetStdP__AtosNetStd__default__receivedNodeStatusUp(arg_0x7e2fd698, arg_0x7e2fd850)
//# 69 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static  /*inline*/  void AtosNetStdP__receiveNodeStatusUp(message_t *msg, anstd_node_status_t *status)
{
  AtosNetStdP__AtosNetStd__receivedNodeStatusUp(msg, status);
}

//#line 203
static  /*inline*/   message_t *AtosNetStdP__Receive__receive(message_t *msg, void *payload, uint8_t len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      anstd_header_t *anstd_header = (anstd_header_t *)payload;

      switch (anstd_header->_data_type) 
        {
          case ANSTD_DATA_TYPE_NODE_STATUS_UP: 
            AtosNetStdP__receiveNodeStatusUp(msg, (anstd_node_status_t *)payload);
          break;

          case ANSTD_DATA_TYPE_DISCOVERY: 
            AtosNetStdP__receiveDiscovery(msg, (anstd_discovery_t *)payload);
          break;

          case ANSTD_DATA_TYPE_SETIEEE: 
            AtosNetStdP__receiveSetIEEE(msg, (anstd_setieee_t *)payload);
          break;

          case ANSTD_DATA_TYPE_REBOOT: 
            AtosNetStdP__receiveReboot(msg, (anstd_reboot_t *)payload);
          break;

          case ANSTD_DATA_TYPE_TRACE: 
            AtosNetStdP__receiveTrace(msg, (anstd_trace_t *)payload);
          break;

          case ANSTD_DATA_TYPE_TRACE_ACK: 
            AtosNetStdP__receiveTraceAck(msg, (anstd_trace_ack_t *)payload);
          break;
        }

      {
        nx_struct message_t *__nesc_temp = 
//#line 236
        msg;

        {
//#line 236
          __nesc_atomic_end(__nesc_atomic); 
//#line 236
          return __nesc_temp;
        }
      }
    }
//#line 239
    __nesc_atomic_end(__nesc_atomic); }
}

//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
#define RfReliableMacReceiveP__1__Receive__receive(arg_0x7eb51ca0,arg_0x7eb51e40,arg_0x7eb50010) AtosNetStdP__Receive__receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010)
//# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP__1__AMPacket__source(arg_0x7eb42b90) RfPacketP__AMPacket__source(arg_0x7eb42b90)
//# 4 "/opt/atos/tos/lib/atos/utils/DsnFilter.nc"
#define RfReliableMacReceiveP__1__DsnFilter__filter(arg_0x7e3c9ba8,arg_0x7e3c9d30) DsnFilterCenterP__0__DsnFilter__filter(0U, arg_0x7e3c9ba8, arg_0x7e3c9d30)
//# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
#define RfReliableMacReceiveP__1__sendAckTask__postTask(void) SchedulerBasicP__TaskBasic__postTask(RfReliableMacReceiveP__1__sendAckTask)
//# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacReceiveP__1__AMPacket__setDestination(arg_0x7eb40190,arg_0x7eb40320) RfPacketP__AMPacket__setDestination(arg_0x7eb40190, arg_0x7eb40320)
//#line 166
#define RfReliableMacReceiveP__1__AMPacket__group(arg_0x7eb348b8) RfPacketP__AMPacket__group(arg_0x7eb348b8)










#define RfReliableMacReceiveP__1__AMPacket__setGroup(arg_0x7eb32010,arg_0x7eb321a0) RfPacketP__AMPacket__setGroup(arg_0x7eb32010, arg_0x7eb321a0)
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
#define RfReliableMacReceiveP__1__RfReliableMacAck__fillAckMessage(arg_0x7e653b48,arg_0x7e653cd8,arg_0x7e653e88,arg_0x7e652068) RfReliableMacAckP__RfReliableMacAck__fillAckMessage(arg_0x7e653b48, arg_0x7e653cd8, arg_0x7e653e88, arg_0x7e652068)
//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfReliableMacReceiveP__1__SubPacket__getPayload(arg_0x7eb23358,arg_0x7eb23500) RfPacketP__Packet__getPayload(arg_0x7eb23358, arg_0x7eb23500)
//# 6 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacReceiveP__1__PacketEx__getPacketHeader(arg_0x7e6b4120) RfReliableMacPacketP__PacketEx__getPacketHeader(arg_0x7e6b4120)


#define RfReliableMacReceiveP__1__PacketEx__isValidPacket(arg_0x7e6b45f8) RfReliableMacPacketP__PacketEx__isValidPacket(arg_0x7e6b45f8)
//# 57 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacReceiveP.nc"
static  /*inline*/   message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__PacketEx__isValidPacket(msg)) 
    {
      rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__PacketEx__getPacketHeader(msg);
      rf_ack_t *ack_header = (rf_ack_t *)/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__SubPacket__getPayload(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_ack_msg, (void *)0);

      payload = (uint8_t *)payload + sizeof(rf_rmac_header_t );
      len -= sizeof(rf_rmac_header_t );





      if (header->ack_req) 
        {
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__RfReliableMacAck__fillAckMessage(msg, header->dsn, &/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_ack_msg, ack_header);

          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__setGroup(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_ack_msg, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__group(msg));

          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__setDestination(&/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__m_ack_msg, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__source(msg));

          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAckTask__postTask();
        }


      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__DsnFilter__filter(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__AMPacket__source(msg), header->dsn)) 
        {
          return msg;
        }

      return /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__Receive__receive(msg, payload, len);
    }


  return msg;
}

//# 42 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static  /*inline*/    void RfReliableMacAckP__RfReliableMacAckEvent__default__receiveAckMessage(message_t *send_msg, message_t *ack_msg, rf_ack_t *ack)
{
}

//# 5 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckEvent.nc"
#define RfReliableMacAckP__RfReliableMacAckEvent__receiveAckMessage(arg_0x7e3e7508,arg_0x7e3e76b8,arg_0x7e3e7868) RfReliableMacAckP__RfReliableMacAckEvent__default__receiveAckMessage(arg_0x7e3e7508, arg_0x7e3e76b8, arg_0x7e3e7868)
//# 32 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static  /*inline*/   void RfReliableMacAckP__RfReliableMacAck__receiveAckMessage(message_t *send_msg, message_t *ack_msg, rf_ack_t *ack)
{
  RfReliableMacAckP__RfReliableMacAckEvent__receiveAckMessage(send_msg, ack_msg, ack);
}

//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
#define RfReliableMacSendP__1__RfReliableMacAck__receiveAckMessage(arg_0x7e652540,arg_0x7e6526f0,arg_0x7e6528a0) RfReliableMacAckP__RfReliableMacAck__receiveAckMessage(arg_0x7e652540, arg_0x7e6526f0, arg_0x7e6528a0)
//# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacSendP__1__AMPacket__source(arg_0x7eb42b90) RfPacketP__AMPacket__source(arg_0x7eb42b90)
//#line 67
#define RfReliableMacSendP__1__AMPacket__destination(arg_0x7eb425b0) RfPacketP__AMPacket__destination(arg_0x7eb425b0)
//# 158 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   message_t */*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__ReceiveAck__receive(message_t *ack_msg, void *payload, uint8_t len)
{
  if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending) 
    {
      rf_meta_data_t *meta_data = (rf_meta_data_t *)/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg->meta_data;
      rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__PacketEx__getPacketHeader(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg);

      rf_ack_t *ack_header = (rf_ack_t *)payload;






      if (
//#line 169
      header->ack_req
       && header->dsn == __nesc_ntoh_uint8((unsigned char *)&ack_header->dsn)
       && /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMPacket__source(ack_msg) == /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMPacket__destination(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg)
       && /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMPacket__destination(ack_msg) == /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AMPacket__source(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg)) 

        {
          rf_meta_data_t *ack_meta_data = (rf_meta_data_t *)ack_msg->meta_data;


          __nesc_hton_int8((unsigned char *)&meta_data->rssi, __nesc_ntoh_int8((unsigned char *)&ack_meta_data->rssi));
          __nesc_hton_uint8((unsigned char *)&meta_data->lqi, __nesc_ntoh_uint8((unsigned char *)&ack_meta_data->lqi));
          __nesc_hton_int8((unsigned char *)&meta_data->crc, __nesc_ntoh_int8((unsigned char *)&ack_meta_data->crc));
          __nesc_hton_int8((unsigned char *)&meta_data->ack, TRUE);


          memcpy((void *)& meta_data->ack_msg, (void *)ack_header, sizeof  meta_data->ack_msg);


          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__RfReliableMacAck__receiveAckMessage(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg, ack_msg, ack_header);


          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDone(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg, 0);
        }
    }

  return ack_msg;
}

//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAck.nc"
#define RfReliableMacSendP__0__RfReliableMacAck__receiveAckMessage(arg_0x7e652540,arg_0x7e6526f0,arg_0x7e6528a0) RfReliableMacAckP__RfReliableMacAck__receiveAckMessage(arg_0x7e652540, arg_0x7e6526f0, arg_0x7e6528a0)
//# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfReliableMacSendP__0__AMPacket__source(arg_0x7eb42b90) RfPacketP__AMPacket__source(arg_0x7eb42b90)
//#line 67
#define RfReliableMacSendP__0__AMPacket__destination(arg_0x7eb425b0) RfPacketP__AMPacket__destination(arg_0x7eb425b0)
//# 158 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static  /*inline*/   message_t */*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__ReceiveAck__receive(message_t *ack_msg, void *payload, uint8_t len)
{
  if (/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending) 
    {
      rf_meta_data_t *meta_data = (rf_meta_data_t *)/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg->meta_data;
      rf_rmac_header_t *header = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__PacketEx__getPacketHeader(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg);

      rf_ack_t *ack_header = (rf_ack_t *)payload;






      if (
//#line 169
      header->ack_req
       && header->dsn == __nesc_ntoh_uint8((unsigned char *)&ack_header->dsn)
       && /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMPacket__source(ack_msg) == /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMPacket__destination(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg)
       && /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMPacket__destination(ack_msg) == /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AMPacket__source(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg)) 

        {
          rf_meta_data_t *ack_meta_data = (rf_meta_data_t *)ack_msg->meta_data;


          __nesc_hton_int8((unsigned char *)&meta_data->rssi, __nesc_ntoh_int8((unsigned char *)&ack_meta_data->rssi));
          __nesc_hton_uint8((unsigned char *)&meta_data->lqi, __nesc_ntoh_uint8((unsigned char *)&ack_meta_data->lqi));
          __nesc_hton_int8((unsigned char *)&meta_data->crc, __nesc_ntoh_int8((unsigned char *)&ack_meta_data->crc));
          __nesc_hton_int8((unsigned char *)&meta_data->ack, TRUE);


          memcpy((void *)& meta_data->ack_msg, (void *)ack_header, sizeof  meta_data->ack_msg);


          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__RfReliableMacAck__receiveAckMessage(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg, ack_msg, ack_header);


          /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDone(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg, 0);
        }
    }

  return ack_msg;
}

//# 51 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static  /*inline*/    message_t *RfActiveMessageP__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
{
}

//# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
 /*inline*/  static  message_t *RfActiveMessageP__Receive__receive(uint8_t arg_0x7e3983f8, message_t *arg_0x7eb51ca0, void *arg_0x7eb51e40, uint8_t arg_0x7eb50010){
//#line 67
  nx_struct message_t *result;
//#line 67

//#line 67
  switch (arg_0x7e3983f8) {
//#line 67
    case 123:
//#line 67
      result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__SubReceive__receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
//#line 67
      break;
//#line 67
    case 124:
//#line 67
      result = /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__ReceiveAck__receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
//#line 67
      break;
//#line 67
    case 240U:
//#line 67
      result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__SubReceive__receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
//#line 67
      break;
//#line 67
    case 241:
//#line 67
      result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__ReceiveAck__receive(arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
//#line 67
      break;
//#line 67
    default:
//#line 67
      result = RfActiveMessageP__Receive__default__receive(arg_0x7e3983f8, arg_0x7eb51ca0, arg_0x7eb51e40, arg_0x7eb50010);
//#line 67
      break;
//#line 67
    }
//#line 67

//#line 67
  return result;
//#line 67
}
//#line 67
//# 69 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   bool RfPacketP__AMPacket__isForMe(message_t *amsg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->dest) == RfPacketP__AMPacket__address()
   || __nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)amsg->header)->dest) == 0xFFFF;
}

//# 125 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfActiveMessageP__AMPacket__isForMe(arg_0x7eb35370) RfPacketP__AMPacket__isForMe(arg_0x7eb35370)
//# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
#define RfActiveMessageP__Packet__getPayload(arg_0x7eb23358,arg_0x7eb23500) RfPacketP__Packet__getPayload(arg_0x7eb23358, arg_0x7eb23500)
//# 76 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   am_id_t RfPacketP__AMPacket__type(message_t *amsg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)amsg->header)->type);
}

//# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
#define RfActiveMessageP__AMPacket__type(arg_0x7eb35aa0) RfPacketP__AMPacket__type(arg_0x7eb35aa0)
//# 150 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  /*inline*/   uint8_t RfPacketP__PacketEx__packetHeaderSize(void)
{
  return sizeof(rf_header_t ) - 1 + sizeof(uint16_t );
}






static  /*inline*/   bool RfPacketP__PacketEx__isValidPacket(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&((rf_header_t *)msg->header)->length) >= RfPacketP__PacketEx__packetHeaderSize();
}

//# 8 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfActiveMessageP__PacketEx__isValidPacket(arg_0x7e6b45f8) RfPacketP__PacketEx__isValidPacket(arg_0x7e6b45f8)
//# 20 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfActiveMessageP.nc"
static  /*inline*/   void RfActiveMessageP__CoreReceive__receive(message_t *msg)
{
  if (RfActiveMessageP__PacketEx__isValidPacket(msg)) 
    {
      uint8_t type = RfActiveMessageP__AMPacket__type(msg);
      uint8_t len;
      void *payload = RfActiveMessageP__Packet__getPayload(msg, &len);

//#line 27
      if (RfActiveMessageP__AMPacket__isForMe(msg)) 
        {
          RfActiveMessageP__Receive__receive(type, msg, payload, len);
        }
      else 
        {
          RfActiveMessageP__Snoop__receive(type, msg, payload, len);
        }
    }
}

//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/CoreReceive.nc"
#define RfMacBaseReceiveP__CoreReceive__receive(arg_0x7e393030) RfActiveMessageP__CoreReceive__receive(arg_0x7e393030)
//# 12 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseReceiveP.nc"
static  /*inline*/   void RfMacBaseReceiveP__RfHardwareRx__rxPacket(uint8_t *buf, uint8_t len)
{
  unsigned char *__nesc_temp48;
//#line 14
  message_t *msg = (message_t *)buf;


  uint8_t frame_type = (__nesc_ntoh_leuint16((unsigned char *)&((rf_header_t *)msg->header)->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7;

  if (frame_type == IEEE154_TYPE_ACK) 
    {
    }
  else {
//#line 22
    if (frame_type == IEEE154_TYPE_DATA) 
      {


        rf_meta_data_t *meta_data = (rf_meta_data_t *)msg->meta_data;

//#line 27
        __nesc_hton_int8((unsigned char *)&meta_data->crc, buf[len - 1] >> 7);
        __nesc_hton_int8((unsigned char *)&meta_data->rssi, buf[len - 2]);
        __nesc_hton_uint8((unsigned char *)&meta_data->lqi, __nesc_ntoh_int8((unsigned char *)&meta_data->rssi) + 0x7F);


        (__nesc_temp48 = (unsigned char *)&((rf_header_t *)msg->header)->length, __nesc_hton_leuint8(__nesc_temp48, __nesc_ntoh_leuint8(__nesc_temp48) - 0));
//#line 50
        RfMacBaseReceiveP__CoreReceive__receive(msg);
      }
    }
}

//# 5 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/RfHardwareRx.nc"
#define RfHardwareRxP__0__RfHardwareRx__rxPacket(arg_0x7e5337e8,arg_0x7e533970) RfMacBaseReceiveP__RfHardwareRx__rxPacket(arg_0x7e5337e8, arg_0x7e533970)
//# 78 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static  /*inline*/  void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__receiveNextPacket(void)
{
  if (!/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__readRfBuf(/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf, 1)) {
//#line 80
    return;
    }
//#line 81
  if (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf[0] > 0x7f) 
    {


      {
//#line 85
        do {
//#line 85
            RFST = 0xED;
//#line 85
            RFST = 0xED;
          }
        while (
//#line 85
        85 == -1);
//#line 85
        do {
//#line 85
            S1CON = 0x00;
//#line 85
            RFIRQF0 = ~(1 << 2);
          }
        while (
//#line 85
        85 == -1);
      }
//#line 85
      ;
      {
//#line 86
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head = /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail = 0;
      }
//#line 86
      ;
    }
  /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf[0] &= 0x7f;


  if (!/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__readRfBuf(&/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf[1], /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf[0])) {
//#line 91
    return;
    }

  if (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf[/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf[0]] & 0x80) 
    {
//#line 131
      /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__RfHardwareRx__rxPacket(/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf, /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__m_frame_buf[0] + 1);
    }
  else 
    {

      {
//#line 136
        do {
//#line 136
            RFST = 0xED;
//#line 136
            RFST = 0xED;
          }
        while (
//#line 136
        136 == -1);
//#line 136
        do {
//#line 136
            S1CON = 0x00;
//#line 136
            RFIRQF0 = ~(1 << 2);
          }
        while (
//#line 136
        136 == -1);
      }
//#line 136
      ;
      {
//#line 137
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head = /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail = 0;
      }
//#line 137
      ;
    }
}

static  /*inline*/   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__TopTaskHandler__handler(void)
{
  /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__receiveNextPacket();

  if (!(/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head == /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail)) 
    {
      {
//#line 147
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 147
          {
//#line 147
            TopTaskMgrP__m_task_flag[3] = TRUE;
          }
//#line 148
          __nesc_atomic_end(__nesc_atomic); }
      }
//#line 147
      ;
    }
}

//# 57 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
static  /*inline*/    void TopTaskMgrP__TopTaskHandler__default__handler(uint8_t n)
{
}

//# 4 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskHandler.nc"
 /*inline*/  static  void TopTaskMgrP__TopTaskHandler__handler(uint8_t arg_0x7ebb1360){
//#line 4
  switch (arg_0x7ebb1360) {
//#line 4
    case 0:
//#line 4
      /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__TopTaskHandler__handler();
//#line 4
      break;
//#line 4
    case 1:
//#line 4
      /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__RxTaskHandler__handler();
//#line 4
      break;
//#line 4
    case 2:
//#line 4
      /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__TxTaskHandler__handler();
//#line 4
      break;
//#line 4
    case 3:
//#line 4
      /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__TopTaskHandler__handler();
//#line 4
      break;
//#line 4
    default:
//#line 4
      TopTaskMgrP__TopTaskHandler__default__handler(arg_0x7ebb1360);
//#line 4
      break;
//#line 4
    }
//#line 4
}
//#line 4
//# 40 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
static  /*inline*/   void TopTaskMgrP__TopTaskMgr__runTasks(void)
{
  uint8_t i;

  for (i = 0; i < TopTaskMgrP__TOP_TASK_COUNT; ++i) 
    {
      if (TopTaskMgrP__m_task_flag[i] != FALSE) 
        {
          EA = 0;
          TopTaskMgrP__m_task_flag[i] = FALSE;
          EA = 1;

          TopTaskMgrP__TopTaskHandler__handler(i);
        }
    }
}

//# 5 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgr.nc"
#define SchedulerBasicP__TopTaskMgr__runTasks(void) TopTaskMgrP__TopTaskMgr__runTasks()
//# 181 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static  /*inline*/   void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__AtosScheduler__periodScheduler(void)
{
  if (((uint8_t xdata *)0)[0x619B] > 0x80) 
    {
      {
//#line 185
        do {
//#line 185
            RFST = 0xED;
//#line 185
            RFST = 0xED;
          }
        while (
//#line 185
        185 == -1);
//#line 185
        do {
//#line 185
            S1CON = 0x00;
//#line 185
            RFIRQF0 = ~(1 << 2);
          }
        while (
//#line 185
        185 == -1);
      }
//#line 185
      ;
    }
}

//# 9 "/opt/tinyos-2.x/tos/interfaces/AtosScheduler.nc"
#define SchedulerBasicP__AtosScheduler__periodScheduler(void) RfHardwareRxP__0__AtosScheduler__periodScheduler()
//# 71 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static   /*inline*/   uint8_t SchedulerBasicP__popTask(void)
{
//#line 91
  if (SchedulerBasicP__m_head == SchedulerBasicP__m_tail) 
    {
      return SchedulerBasicP__NO_TASK;
    }
  else 
    {
      uint8_t id = SchedulerBasicP__m_next[SchedulerBasicP__m_head];

      SchedulerBasicP__m_next[SchedulerBasicP__m_head] = SchedulerBasicP__NO_TASK;

      SchedulerBasicP__m_head = (SchedulerBasicP__m_head + 1) % SchedulerBasicP__NUM_TASKS;
      return id % SchedulerBasicP__NUM_TASKS;
    }
}

//#line 215
static  /*inline*/   void SchedulerBasicP__Scheduler__taskLoop(void)
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          nextTask = SchedulerBasicP__popTask();
        }
//#line 224
        __nesc_atomic_end(__nesc_atomic); }

      current_task_id = nextTask;


      SchedulerBasicP__AtosScheduler__periodScheduler();

      while (SchedulerBasicP__TopTaskMgr__hasTasks()) 
        {
          SchedulerBasicP__TopTaskMgr__runTasks();
        }

      if (nextTask != SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__TaskBasic__runTask(nextTask);
        }
      else 
        {
          if (!SchedulerBasicP__TopTaskMgr__hasTasks()) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
    }
}

//# 61 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
#define RealMainP__Scheduler__taskLoop(void) SchedulerBasicP__Scheduler__taskLoop()
//# 8 "/opt/atos/tos/lib/atos/net/AtosMac/interfaces/PacketEx.nc"
#define RfReliableMacPacketP__SubPacketEx__isValidPacket(arg_0x7e6b45f8) RfPacketP__PacketEx__isValidPacket(arg_0x7e6b45f8)
//# 46 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  /*inline*/   uint8_t RfReliableMacPacketP__PacketEx__packetHeaderSize(void)
{
  return sizeof(rf_rmac_header_t );
}

//# 11 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static  /*inline*/  uint8_t RfReliableMacAckP__fillAckMessageDefault(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack)
{
  memset(ack, 0, sizeof(rf_ack_t ));


  __nesc_hton_uint8((unsigned char *)&ack->dsn, receive_dsn);

  return sizeof(rf_ack_t );
}

//#line 37
static  /*inline*/    uint8_t RfReliableMacAckP__RfReliableMacAckEvent__default__fillAckMessage(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack)
{
  return sizeof(rf_ack_t );
}

//# 4 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckEvent.nc"
#define RfReliableMacAckP__RfReliableMacAckEvent__fillAckMessage(arg_0x7e3eab10,arg_0x7e3eaca0,arg_0x7e3eae50,arg_0x7e3e7030) RfReliableMacAckP__RfReliableMacAckEvent__default__fillAckMessage(arg_0x7e3eab10, arg_0x7e3eaca0, arg_0x7e3eae50, arg_0x7e3e7030)
//# 14 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
static  /*inline*/  int /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__indexOfAddress(uint16_t addr)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t i;

//#line 19
    for (i = 0; i < 100; ++i) 
      {
        if (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_address[i] == addr) 
          {
            {
              int __nesc_temp = 
//#line 23
              i;

//#line 23
              return __nesc_temp;
            }
          }
      }
    {
      int __nesc_temp = 
//#line 27
      -1;

//#line 27
      return __nesc_temp;
    }
  }
}

//#line 31
static  /*inline*/  int /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__findNextAddress(void)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t i;

//#line 36
    for (i = 0; i < 100; ++i) 
      {
        if (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_address[i] == 0) 
          {
            {
              int __nesc_temp = 
//#line 40
              i;

//#line 40
              return __nesc_temp;
            }
          }
      }
    i = /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_index;
    /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_index = (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_index + 1) % 100;

    {
      int __nesc_temp = 
//#line 47
      i;

//#line 47
      return __nesc_temp;
    }
  }
}

//# 176 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static  /*inline*/    void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptRFErr__fired(void)
{
  {
//#line 178
    do {
//#line 178
        RFST = 0xED;
//#line 178
        RFST = 0xED;
      }
    while (
//#line 178
    178 == -1);
//#line 178
    do {
//#line 178
        S1CON = 0x00;
//#line 178
        RFIRQF0 = ~(1 << 2);
      }
    while (
//#line 178
    178 == -1);
  }
//#line 178
  ;
}

//# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
#define RfInterruptsP__InterruptRFErr__fired(void) RfHardwareRxP__0__InterruptRFErr__fired()
//# 80 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static  /*inline*/   void RfInterruptsP__INT_RFERR__fired(void)
{


  if ((RFERRF & (1 << 2)) & ((uint8_t xdata *)0)[0x61A5]) 
    {
      RFERRF &= ~(1 << 2);
      RfInterruptsP__InterruptRFErr__fired();
    }
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_RFERR__fired(void) RfInterruptsP__INT_RFERR__fired()
//# 153 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static  /*inline*/    void /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__InterruptFIFOP__fired(void)
{


  while (((uint8_t xdata *)0)[0x619B] > 0) 
    {
      if (((uint8_t xdata *)0)[0x619B] > 0x80) 
        {
          {
//#line 161
            do {
//#line 161
                RFST = 0xED;
//#line 161
                RFST = 0xED;
              }
            while (
//#line 161
            161 == -1);
//#line 161
            do {
//#line 161
                S1CON = 0x00;
//#line 161
                RFIRQF0 = ~(1 << 2);
              }
            while (
//#line 161
            161 == -1);
          }
//#line 161
          ;
        }

      if (((/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail + 1) & ((1 << 8) - 1)) == (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head & ((1 << 8) - 1))) 
        {
        }


      {
//#line 169
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf__data[/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail & ((1 << 8) - 1)] = RFD;
//#line 169
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail = (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail + 1) & ((1 << 8) - 1);
      }
//#line 169
      ;
    }


  {
//#line 173
    TopTaskMgrP__m_task_flag[3] = TRUE;
  }
//#line 173
  ;
}

//# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
#define RfInterruptsP__InterruptFIFOP__fired(void) RfHardwareRxP__0__InterruptFIFOP__fired()
//# 92 "/opt/atos/tos/chips/rf2530/hardware/control/RfInterruptsP.nc"
static  /*inline*/   void RfInterruptsP__INT_RF__fired(void)
{


  if ((RFIRQF1 & (1 << 3)) & ((uint8_t xdata *)0)[0x61A4]) 
    {






      RFIRQF1 = ~(1 << 3);
    }
  else {
    if ((RFIRQF1 & (1 << 4)) & ((uint8_t xdata *)0)[0x61A4]) 
      {

        RFIRQF1 = ~(1 << 4);
      }
    else {
      if ((RFIRQF1 & (1 << 0)) & ((uint8_t xdata *)0)[0x61A4]) 
        {
          (
          (uint8_t xdata *)0)[0x61A4] &= ~(1 << 0);
        }
      }
    }



  if ((RFIRQF0 & (1 << 2)) & ((uint8_t xdata *)0)[0x61A3]) 
    {




      RfInterruptsP__InterruptFIFOP__fired();

      RFIRQF0 = ~(1 << 2);
    }



  S1CON = 0x00;
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_RF__fired(void) RfInterruptsP__INT_RF__fired()
//# 536 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  /*inline*/     void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__CaptureChannel2__default__captured(uint16_t time)
//#line 536
{
}

//# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
#define HplCC2530Timer1P__0__CaptureChannel2__captured(arg_0x7e921bc8) HplCC2530Timer1P__0__CaptureChannel2__default__captured(arg_0x7e921bc8)
//# 454 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  /*inline*/   void /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__INT_TIM1__fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (((uint8_t xdata *)0)[0x62A4] & (1 << CC2530_T1CCTLx_IM) && T1STAT & CC2530_T1_CH4IF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_CH4IF);
          T1CCTL1 &= ~(1 << CC2530_T1CCTLx_IM);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag |= 1 << 4;
          {
//#line 465
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
//#line 465
          ;
        }

      if (((uint8_t xdata *)0)[0x62A3] & (1 << CC2530_T1CCTLx_IM) && T1STAT & CC2530_T1_CH3IF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_CH3IF);
          T1CCTL0 &= ~(1 << CC2530_T1CCTLx_IM);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag |= 1 << 3;
          {
//#line 475
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
//#line 475
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

              /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__CaptureChannel2__captured(value);
            }
          else 
            {
              T1CCTL2 &= ~(1 << CC2530_T1CCTLx_IM);


              /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag |= 1 << 2;
              {
//#line 497
                TopTaskMgrP__m_task_flag[0] = TRUE;
              }
//#line 497
              ;
            }
        }

      if (T1CCTL1 & (1 << CC2530_T1CCTLx_IM) && T1STAT & CC2530_T1_CH1IF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_CH1IF);
          T1CCTL1 &= ~(1 << CC2530_T1CCTLx_IM);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag |= 1 << 1;
          {
//#line 508
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
//#line 508
          ;
        }
      if (T1CCTL0 & (1 << CC2530_T1CCTLx_IM) && T1STAT & CC2530_T1_CH0IF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_CH0IF);
          T1CCTL0 &= ~(1 << CC2530_T1CCTLx_IM);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag |= 1 << 0;
          {
//#line 517
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
//#line 517
          ;
        }

      if (T1STAT & CC2530_T1_OVFIF) 
        {
          T1STAT &= ~(1 << CC2530_T1STAT_OVFIF);


          /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__m_alarm_flag |= 1 << 5;
          {
//#line 526
            TopTaskMgrP__m_task_flag[0] = TRUE;
          }
//#line 526
          ;
        }
    }
//#line 528
    __nesc_atomic_end(__nesc_atomic); }
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_TIM1__fired(void) HplCC2530Timer1P__0__INT_TIM1__fired()
//# 82 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static  /*inline*/   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__INT_UART0_RX__fired(void)
{
  URX0IF = 0;

  {
//#line 86
    /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf__data[/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_tail & ((1 << 6) - 1)] = U0DBUF;
//#line 86
    /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_tail = (/*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__uartRxBuf_tail + 1) & ((1 << 6) - 1);
  }
//#line 86
  ;
  {
//#line 87
    TopTaskMgrP__m_task_flag[1] = TRUE;
  }
//#line 87
  ;
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_UART0_RX__fired(void) HalCC2530Uart0IsrP__0__INT_UART0_RX__fired()
//# 90 "/opt/atos/tos/chips/cc2530/usart/HalCC2530Uart0IsrP.nc"
static  /*inline*/   void /*HalCC2530Uart0IsrC.HalCC2530Uart0IsrP*/HalCC2530Uart0IsrP__0__INT_UART0_TX__fired(void)
{
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_UART0_TX__fired(void) HalCC2530Uart0IsrP__0__INT_UART0_TX__fired()
//# 101 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static  /*inline*/    void PlatformInterruptC__INT_UART1_RX__default__fired(void)
{
  URX1IF = 0;
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_UART1_RX__fired(void) PlatformInterruptC__INT_UART1_RX__default__fired()
//# 113 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static  /*inline*/    void PlatformInterruptC__INT_UART1_TX__default__fired(void)
{
  UTX1IF = 0;
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_UART1_TX__fired(void) PlatformInterruptC__INT_UART1_TX__default__fired()
//# 126 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static  /*inline*/    void PlatformInterruptC__INT_ST__default__fired(void)
{
  STIF = 0;
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_ST__fired(void) PlatformInterruptC__INT_ST__default__fired()
//# 146 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static  /*inline*/    void PlatformInterruptC__INT_P0__default__fired(void)
{
  P0IFG = 0x00;
  P0IF = 0;
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_P0__fired(void) PlatformInterruptC__INT_P0__default__fired()
//# 152 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
static  /*inline*/    void PlatformInterruptC__INT_P1__default__fired(void)
{
  P1IFG = 0x00;
  P1IF = 0;
}

//# 4 "/opt/atos/tos/platforms/antc5/interrupt/PlatformIntHandler.nc"
#define PlatformInterruptC__INT_P1__fired(void) PlatformInterruptC__INT_P1__default__fired()
//# 64 "/opt/atos/tos/chips/cc2530/mcs51/mcs51hardware.h"
static   /*inline*/   void __nesc_disable_interrupt(void)
//#line 64
{
//#line 64
  EA = 0;
}

//# 56 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void)
//#line 56
{


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
//#line 66
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
//#line 83
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

//# 11 "/opt/atos/tos/platforms/antc5/boot/PlatformP.nc"
static error_t PlatformP__clockSelect32k(uint8_t source)
{


  if (!(CLKCONSTA & 0x40)) {
    return FAIL;
    }
  if (source == 0) {
      CLKCONCMD &= ~0x80;
    }
  else {
//#line 21
    if (source == 1) {
        CLKCONCMD |= 0x80;
      }
    }
//#line 24
  do {
//#line 24
      uint8_t ____clkcon;
//#line 24
      uint8_t ____clkconsta;

//#line 24
      ____clkcon = CLKCONCMD;
//#line 24
      do {
//#line 24
          ____clkconsta = CLKCONSTA;
        }
      while (
//#line 24
      ____clkconsta != ____clkcon);
    }
  while (
//#line 24
  24 == -1);

  return 0;
}

static void PlatformP__clockSetMainSrc(uint8_t source)
{
  register uint8_t osc32k_bm = CLKCONCMD & 0x80;





  SLEEPCMD &= ~0x04;
  while (!(SLEEPSTA & 0x20) || (SLEEPSTA & 0x04) != 0) ;



  if (source == 1) {
      CLKCONCMD = ((osc32k_bm | 0x40) | (0x01 << 3)) | 0x01;
    }
  else {
//#line 45
    if (source == 0) {
        CLKCONCMD = osc32k_bm | (0x00 << 3);
      }
    }
//#line 48
  do {
//#line 48
      uint8_t ____clkcon;
//#line 48
      uint8_t ____clkconsta;

//#line 48
      ____clkcon = CLKCONCMD;
//#line 48
      do {
//#line 48
          ____clkconsta = CLKCONSTA;
        }
      while (
//#line 48
      ____clkconsta != ____clkcon);
    }
  while (
//#line 48
  48 == -1);
  SLEEPCMD |= 0x04;
}

//# 8 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static void uart0SetBaud(uint32_t baud)
{
  U0GCR = baud == 1200 ? 5 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 2400 ? 6 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 4800 ? 7 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 9600 ? 8 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 14400 ? 8 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 19200 ? 9 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 28800 ? 9 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 38400 ? 10 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 57600 ? 10 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 76800 ? 11 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 115200 ? 11 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 153600 ? 12 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 230400 ? 12 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : baud == 307200 ? 13 + ((CLKCON & (1 << CC2530_CLKCON_OSC)) >> CC2530_CLKCON_OSC) : 0;
  U0BAUD = baud == 1200 ? 59 : baud == 2400 ? 59 : baud == 4800 ? 59 : baud == 9600 ? 59 : baud == 14400 ? 216 : baud == 19200 ? 59 : baud == 28800 ? 216 : baud == 38400 ? 59 : baud == 57600 ? 216 : baud == 76800 ? 59 : baud == 115200 ? 216 : baud == 153600 ? 59 : baud == 230400 ? 216 : baud == 307200 ? 59 : 0;
}

//# 108 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static void FlashIEEEP__readFromFlash(void)
{
  /* atomic removed: atomic calls only */
  {
    FlashIEEEP__HalFlash__read(FlashIEEEP__m_ieee_flash, 0x3FFE8, sizeof FlashIEEEP__m_ieee_flash);


    FlashIEEEP__ieeeProtect();


    FlashIEEEP__m_ieee[0] = FlashIEEEP__m_ieee_flash[7];
    FlashIEEEP__m_ieee[1] = FlashIEEEP__m_ieee_flash[6];
    FlashIEEEP__m_ieee[2] = FlashIEEEP__m_ieee_flash[5];
    FlashIEEEP__m_ieee[3] = FlashIEEEP__m_ieee_flash[4];
    FlashIEEEP__m_ieee[4] = FlashIEEEP__m_ieee_flash[3];
    FlashIEEEP__m_ieee[5] = FlashIEEEP__m_ieee_flash[2];
    FlashIEEEP__m_ieee[6] = FlashIEEEP__m_ieee_flash[1];
    FlashIEEEP__m_ieee[7] = FlashIEEEP__m_ieee_flash[0];
  }
}

//# 58 "/opt/atos/tos/chips/cc2530/flash/HalFlashP.nc"
static  error_t HalFlashP__HalFlash__erase(uint32_t address)
{
  uint8_t page;
  uint16_t old;
  uint8_t old_ea;

  /* atomic removed: atomic calls only */
  {
    page = address >> 11;



    while (((uint8_t xdata *)0)[0x6270] & 0x80) ;
    ((uint8_t xdata *)0)[0x6272] = page << 1;
    ((uint8_t xdata *)0)[0x6270] |= 0x01;
    while (((uint8_t xdata *)0)[0x6270] & 0x80) ;
  }

  return 0;
}

//# 193 "/opt/atos/tos/platforms/antc5/devices/FlashIEEEP.nc"
static  void FlashIEEEP__FlashIEEE__WriteToRegister(void)
{
  uint16_t addr;
//#line 195
  uint16_t pan;

  (
  (uint8_t xdata *)0)[0x616A] = FlashIEEEP__m_ieee[0];
  ((uint8_t xdata *)0)[0x616B] = FlashIEEEP__m_ieee[1];
  ((uint8_t xdata *)0)[0x616C] = FlashIEEEP__m_ieee[2];
  ((uint8_t xdata *)0)[0x616D] = FlashIEEEP__m_ieee[3];
  ((uint8_t xdata *)0)[0x616E] = FlashIEEEP__m_ieee[4];
  ((uint8_t xdata *)0)[0x616F] = FlashIEEEP__m_ieee[5];
  ((uint8_t xdata *)0)[0x6170] = FlashIEEEP__m_ieee[6];
  ((uint8_t xdata *)0)[0x6171] = FlashIEEEP__m_ieee[7];

  pan = FlashIEEEP__FlashIEEE__GetPANID();
  addr = FlashIEEEP__FlashIEEE__GetShortAddress();
  (
  (uint8_t xdata *)0)[0x6172] = (uint16_t )pan & 0xFF;
  ((uint8_t xdata *)0)[0x6173] = ((uint16_t )pan >> 8) & 0xFF;
  (
  (uint8_t xdata *)0)[0x6174] = (uint16_t )addr & 0xFF;
  ((uint8_t xdata *)0)[0x6175] = ((uint16_t )addr >> 8) & 0xFF;
}

//#line 144
static  uint16_t FlashIEEEP__FlashIEEE__GetPANID(void)
{
  return (FlashIEEEP__m_ieee[4] << 8) | FlashIEEEP__m_ieee[5];
}


static  uint16_t FlashIEEEP__FlashIEEE__GetShortAddress(void)
{
  return (FlashIEEEP__m_ieee[6] << 8) | FlashIEEEP__m_ieee[7];
}

//#line 217
static  void FlashIEEEP__FlashIEEE__WriteToAM(void)
{
  FlashIEEEP__ActiveMessageAddress__setAddress((uint8_t )(FlashIEEEP__FlashIEEE__GetPANID() & 0xFF), 
  FlashIEEEP__FlashIEEE__GetShortAddress());

  TOS_NODE_ID = FlashIEEEP__FlashIEEE__GetShortAddress();

  TOS_IEEE_SADDR = FlashIEEEP__FlashIEEE__GetShortAddress();
  TOS_IEEE_PANID = FlashIEEEP__FlashIEEE__GetPANID();
}

//# 198 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static  bool SchedulerBasicP__Scheduler__runNextTask(void)
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
//#line 202
  {
    nextTask = SchedulerBasicP__popTask();

    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
//#line 207
          FALSE;

//#line 207
          return __nesc_temp;
        }
      }
  }
//#line 210
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

//#line 269
static   void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

//# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7ec64200){
//#line 64
  switch (arg_0x7ec64200) {
//#line 64
    case DigBaseP__showMenu:
//#line 64
      DigBaseP__showMenu__runTask();
//#line 64
      break;
//#line 64
    case DigBaseP__sendData:
//#line 64
      DigBaseP__sendData__runTask();
//#line 64
      break;
//#line 64
    case RealMainP__fakeTask:
//#line 64
      RealMainP__fakeTask__runTask();
//#line 64
      break;
//#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__firedTask:
//#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__firedTask__runTask();
//#line 64
      break;
//#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
//#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
//#line 64
      break;
//#line 64
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__resendTask:
//#line 64
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__resendTask__runTask();
//#line 64
      break;
//#line 64
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDoneTask:
//#line 64
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDoneTask__runTask();
//#line 64
      break;
//#line 64
    case /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext:
//#line 64
      /*AMResourceCenterC.RfMacBaseSendC.RfMacBaseSendP*/RfMacBaseSendP__0__sendNext__runTask();
//#line 64
      break;
//#line 64
    case RfMacBaseCsmaP__signalDoneTask:
//#line 64
      RfMacBaseCsmaP__signalDoneTask__runTask();
//#line 64
      break;
//#line 64
    case RfMacBaseCsmaP__doGo:
//#line 64
      RfMacBaseCsmaP__doGo__runTask();
//#line 64
      break;
//#line 64
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAckTask:
//#line 64
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__0__sendAckTask__runTask();
//#line 64
      break;
//#line 64
    case AtosNetStdP__rebootTask:
//#line 64
      AtosNetStdP__rebootTask__runTask();
//#line 64
      break;
//#line 64
    case AtosNetStdP__nodeStatusUpTask:
//#line 64
      AtosNetStdP__nodeStatusUpTask__runTask();
//#line 64
      break;
//#line 64
    case AtosNetStdP__sendDoneCheck:
//#line 64
      AtosNetStdP__sendDoneCheck__runTask();
//#line 64
      break;
//#line 64
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__resendTask:
//#line 64
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__resendTask__runTask();
//#line 64
      break;
//#line 64
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDoneTask:
//#line 64
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDoneTask__runTask();
//#line 64
      break;
//#line 64
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAckTask:
//#line 64
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.RfReliableMacReceiveP*/RfReliableMacReceiveP__1__sendAckTask__runTask();
//#line 64
      break;
//#line 64
    default:
//#line 64
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7ec64200);
//#line 64
      break;
//#line 64
    }
//#line 64
}
//#line 64
//# 17 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static  error_t AMResourceCenterP__AMResource__send(uint8_t resource_id, am_addr_t addr, message_t *msg, uint8_t len)
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;

//#line 19
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      rf_header_t *header = (rf_header_t *)msg->header;
      rf_meta_data_t *meta_data = (rf_meta_data_t *)msg->meta_data;



      AMResourceCenterP__Packet__setPayloadLength(msg, len);


      __nesc_hton_leuint16((unsigned char *)&header->fcf, 0);
      if (addr != 0xFFFF) 
        {
          (__nesc_temp42 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) | (1 << IEEE154_FCF_ACK_REQ)));
        }
      (__nesc_temp43 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
      1 << IEEE154_FCF_INTRAPAN)) | (
      IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
      IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));









      AMResourceCenterP__AMPacket__setGroup(msg, AMResourceCenterP__AMPacket__localGroup());



      AMResourceCenterP__AMPacket__setDestination(msg, addr);


      AMResourceCenterP__AMPacket__setSource(msg, AMResourceCenterP__AMPacket__address());


      __nesc_hton_int8((unsigned char *)&meta_data->rssi, 0);
      __nesc_hton_uint8((unsigned char *)&meta_data->lqi, 0);





      {
        unsigned char __nesc_temp = 
//#line 64
        AMResourceCenterP__CoreSend__send(msg, __nesc_ntoh_leuint8((unsigned char *)&header->length));

        {
//#line 64
          __nesc_atomic_end(__nesc_atomic); 
//#line 64
          return __nesc_temp;
        }
      }
    }
//#line 67
    __nesc_atomic_end(__nesc_atomic); }
}

//# 8 "/opt/atos/tos/chips/cc2530/watchdog/WatchDogP.nc"
static  void WatchDogP__WatchDog__resetCpu(void)
{
  /* atomic removed: atomic calls only */
  {
    uint32_t i = 0;

    WDCTL = 0x00;
    WDCTL = 0x0B;


    while (i++ < 0xFFFFFF) ;
  }
}

//# 26 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  am_addr_t RfPacketP__AMPacket__address(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!RfPacketP__m_address_saved) 
        {
          RfPacketP__m_addr = RfPacketP__ActiveMessageAddress__amAddress();
          RfPacketP__m_address_saved = TRUE;
        }


      if (RfPacketP__m_addr != RfPacketP__ActiveMessageAddress__amAddress()) 
        {


          RfPacketP__WatchDog__resetCpu();
        }
    }
//#line 43
    __nesc_atomic_end(__nesc_atomic); }


  return RfPacketP__ActiveMessageAddress__amAddress();
}

//# 95 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC__amAddress(void)
//#line 95
{
  am_addr_t myAddr;

//#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 97
    myAddr = ActiveMessageAddressC__addr;
//#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

//# 82 "/opt/atos/tos/lib/atos/utils/QueueExC.nc"
static  /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__QueueEx__element(uint8_t idx)
{
  /* atomic removed: atomic calls only */
  {
    idx += /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__head;
    idx %= 4;
    {
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue_t __nesc_temp = 
//#line 88
      /*AMResourceCenterC.RfMacBaseSendC.QueueExC*/QueueExC__0__queue[idx];

//#line 88
      return __nesc_temp;
    }
  }
}

//# 264 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static   error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 266
    {
//#line 266
      {
        unsigned char __nesc_temp = 
//#line 266
        SchedulerBasicP__pushTask(id) ? 0 : EBUSY;

        {
//#line 266
          __nesc_atomic_end(__nesc_atomic); 
//#line 266
          return __nesc_temp;
        }
      }
    }
//#line 269
    __nesc_atomic_end(__nesc_atomic); }
}

//# 24 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__signalDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_sending) 
        {
          {
//#line 30
            __nesc_atomic_end(__nesc_atomic); 
//#line 30
            return;
          }
        }
    }
//#line 33
    __nesc_atomic_end(__nesc_atomic); }



  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AMSend__sendDone(msg, result);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 38
    /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_sending = FALSE;
//#line 38
    __nesc_atomic_end(__nesc_atomic); }
}



static error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__doSend(message_t *msg)
{
  return /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__SubAMSend__send(/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AMPacket__destination(msg), msg, /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__Packet__payloadLength(msg));
}

//# 139 "/opt/atos/tos/lib/atos/net/AtosMac/AM/RfPacketP.nc"
static  void *RfPacketP__Packet__getPayload(message_t *msg, uint8_t *len)
{
  if (len != (void *)0) 
    {
      *len = RfPacketP__Packet__payloadLength(msg);
    }

  return (uint8_t *)msg->_data;
}

//# 183 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      {
//#line 187
        {
//#line 187
          if (1 >= uart_debug_level) {
//#line 187
              {
//#line 187
                sprintf(uart_debug_buf, "VirtualizeTimerC.Timer.startOneShot dt=%ld\n", dt);
              }
//#line 187
              ATOS_DEBUG_UART_PRINT();
            }
        }
      }
//#line 187
      ;
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
    }
//#line 189
    __nesc_atomic_end(__nesc_atomic); }
}

//# 55 "/opt/atos/tos/lib/atos/common/AtosDebugUart.h"
static void ATOS_DEBUG_UART_PRINT(void)
{
  int i = 0;

//#line 58
  while (i < 256 && uart_debug_buf[i] != '\0') 
    {
      ATOS_DEBUG_UART_PUTC(uart_debug_buf[i++]);
    }
}

//# 57 "/opt/atos/tos/chips/cc2530/usart/uart0.h"
static void uart0PutChar(char c)
{
  uint16_t i;

  for (i = 0; i < 10000; i++) 
    {
      if (!(U0CSR & 0x01)) {
        break;
        }
    }
//#line 66
  U0DBUF = c;

  for (i = 0; i < 10000; i++) 
    {
      if (!(U0CSR & 0x01)) {
        break;
        }
    }
}

//# 161 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

//#line 166
    timer->t0 = t0;
    timer->dt = dt;
    timer->isoneshot = isoneshot;
    timer->isrunning = TRUE;
    /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
  }
}

//# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void)
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type rv = 0;
    /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;
    /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();

    if (/*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
      {






        high++;
        low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();
      }

    {
      /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
      /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

//#line 92
      rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
    }

    {
      /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type __nesc_temp = 
//#line 95
      rv;

//#line 95
      return __nesc_temp;
    }
  }
}

//# 316 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static   uint16_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Counter__get(void)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t r;

    {
//#line 322
      r = T1CNTL;
//#line 322
      r += T1CNTH << 8;
    }
//#line 322
    ;

    {
      unsigned short __nesc_temp = 
//#line 324
      r;

//#line 324
      return __nesc_temp;
    }
  }
}

//# 35 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  void *RfReliableMacPacketP__Packet__getPayload(message_t *msg, uint8_t *len)
{
  if (len != (void *)0) 
    {
      *len = RfReliableMacPacketP__Packet__payloadLength(msg);
    }

  return RfReliableMacPacketP__SubPacket__getPayload(msg, (void *)0) + sizeof(rf_rmac_header_t );
}

//# 102 "/opt/atos/tos/lib/atos/net/AtosNetStd/AtosNetStdP.nc"
static int AtosNetStdP__indexOfTraceItem(anstd_trace_t *trace, uint16_t node_id)
{
  uint8_t i;

//#line 105
  for (i = 0; i < trace->total_count; ++i) 
    {
      if (trace->items[i].node_id == node_id) 
        {
          return i;
        }
    }

  return -1;
}

static void AtosNetStdP__traceBackward(message_t *msg, anstd_trace_ack_t *trace_ack, int index)
{
  uint16_t node_id = 0xFFFF;

//#line 119
  memcpy(&AtosNetStdP__m_send_msg, msg, sizeof AtosNetStdP__m_send_msg);

  if (index > 0) 
    {
      node_id = trace_ack->items[index - 1].node_id;
      AtosNetStdP__AMSend__send(node_id, &AtosNetStdP__m_send_msg, AtosNetStdP__Packet__payloadLength(&AtosNetStdP__m_send_msg));
    }
}

//# 74 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static  error_t /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t result;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      rf_rmac_header_t *header = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__PacketEx__getPacketHeader(msg);
      rf_meta_data_t *meta_data = (rf_meta_data_t *)msg->meta_data;

      if (/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_sending) 
        {
          {
            unsigned char __nesc_temp = 
//#line 85
            FAIL;

            {
//#line 85
              __nesc_atomic_end(__nesc_atomic); 
//#line 85
              return __nesc_temp;
            }
          }
        }
      header->ack_req = addr != 0xFFFF;

      __nesc_hton_int8((unsigned char *)&meta_data->ack, FALSE);

      header->dsn = rf_rmac_dsn;

      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__AMPacket__setDestination(msg, addr);
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__Packet__setPayloadLength(msg, len);


      result = /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__doSend(msg);

      if (result == 0) 
        {
          rf_rmac_dsn++;
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_sending = TRUE;
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_msg = msg;
          /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__1__m_retry_times = 0;
        }

      {
        unsigned char __nesc_temp = 
//#line 109
        result;

        {
//#line 109
          __nesc_atomic_end(__nesc_atomic); 
//#line 109
          return __nesc_temp;
        }
      }
    }
//#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

//# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t AtosNetStdP__Packet__payloadLength(message_t *arg_0x7eb25e90){
//#line 67
  unsigned char result;
//#line 67

//#line 67
  result = RfReliableMacPacketP__Packet__payloadLength(arg_0x7eb25e90);
//#line 67

//#line 67
  return result;
//#line 67
}
//#line 67
//# 64 "/opt/atos/tos/lib/atos/net/AtosMac/macbase/RfMacBaseCsmaP.nc"
static void RfMacBaseCsmaP__signalDone(error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RfMacBaseCsmaP__m_result = result;
    }
//#line 69
    __nesc_atomic_end(__nesc_atomic); }

  RfMacBaseCsmaP__signalDoneTask__postTask();
}

//# 76 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResourceCenterP.nc"
static   void AMResourceCenterP__AMResource__default__sendDone(uint8_t resource_id, message_t *msg, error_t error)
{
}

//# 7 "/opt/atos/tos/lib/atos/net/AtosMac/AM/AMResource.nc"
static  void AMResourceCenterP__AMResource__sendDone(uint8_t arg_0x7e5f3dd8, message_t *arg_0x7e6080a8, error_t arg_0x7e608230){
//#line 7
  switch (arg_0x7e5f3dd8) {
//#line 7
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC*/AMResourceC__0__AM_RESOURCE_ID:
//#line 7
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__0__AMResource__sendDone(arg_0x7e6080a8, arg_0x7e608230);
//#line 7
      break;
//#line 7
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC*/AMResourceC__2__AM_RESOURCE_ID:
//#line 7
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.AMResourceC.AMResourceP*/AMResourceP__1__AMResource__sendDone(arg_0x7e6080a8, arg_0x7e608230);
//#line 7
      break;
//#line 7
    case /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC*/AMResourceC__3__AM_RESOURCE_ID:
//#line 7
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__2__AMResource__sendDone(arg_0x7e6080a8, arg_0x7e608230);
//#line 7
      break;
//#line 7
    case /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC*/AMResourceC__1__AM_RESOURCE_ID:
//#line 7
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacReceiveC.AMResourceC.AMResourceP*/AMResourceP__3__AMResource__sendDone(arg_0x7e6080a8, arg_0x7e608230);
//#line 7
      break;
//#line 7
    default:
//#line 7
      AMResourceCenterP__AMResource__default__sendDone(arg_0x7e5f3dd8, arg_0x7e6080a8, arg_0x7e608230);
//#line 7
      break;
//#line 7
    }
//#line 7
}
//#line 7
//# 51 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacSendP.nc"
static void /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_sending) 
        {
          {
//#line 57
            __nesc_atomic_end(__nesc_atomic); 
//#line 57
            return;
          }
        }
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__TimeoutTimer__stop();
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__AckTimer__stop();


      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_msg = msg;
      /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__m_result = result;
    }
//#line 66
    __nesc_atomic_end(__nesc_atomic); }

  /*AtosNetStdC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__1__signalDoneTask__postTask();
}

//#line 51
static void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_sending) 
        {
          {
//#line 57
            __nesc_atomic_end(__nesc_atomic); 
//#line 57
            return;
          }
        }
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__TimeoutTimer__stop();
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__AckTimer__stop();


      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_msg = msg;
      /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__m_result = result;
    }
//#line 66
    __nesc_atomic_end(__nesc_atomic); }

  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacSendC.RfReliableMacSendP*/RfReliableMacSendP__0__signalDoneTask__postTask();
}

//# 96 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void)
{
  /* atomic removed: atomic calls only */
  {
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type now = /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();
//#line 100
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type expires;
//#line 100
    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type remaining;



    expires = /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 + /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;


    remaining = (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


    if (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 <= now) 
      {
        if (expires >= /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 && 
        expires <= now) {
          remaining = 0;
          }
      }
    else {
        if (expires >= /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 || 
        expires <= now) {
          remaining = 0;
          }
      }
    if (remaining > /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY) 
      {
        /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = now + /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
        /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = remaining - /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
        remaining = /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      }
    else 
      {
        /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 += /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;
        /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = 0;
      }

    /*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )now << 0, 
    (/*RfMacBaseCsmaC.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )remaining << 0);
  }
}

//# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__get(void)
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type rv = 0;
    /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__upper_count_type high = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper;
    /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type low = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__get();

    if (/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
      {






        high++;
        low = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__get();
      }

    {
      /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type high_to = high;
      /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type low_to = low >> /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT;

//#line 92
      rv = (high_to << /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
    }

    {
      /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type __nesc_temp = 
//#line 95
      rv;

//#line 95
      return __nesc_temp;
    }
  }
}

//# 69 "/opt/atos/tos/chips/cc2530/random/CC2530RandomLfsrP.nc"
static   uint16_t CC2530RandomLfsrP__Random__rand16(void)
//#line 69
{
  uint16_t result;

  /* atomic removed: atomic calls only */
  ADCCON1 = (ADCCON1 & ~((1 << 3) | (1 << 2))) | (1 << 2);

  result = RNDH << 8;
  result += RNDL;
  return result;
}

//# 24 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacRetrySendP.nc"
static void /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__signalDone(message_t *msg, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (!/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_sending) 
        {
          {
//#line 30
            __nesc_atomic_end(__nesc_atomic); 
//#line 30
            return;
          }
        }
    }
//#line 33
    __nesc_atomic_end(__nesc_atomic); }



  /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AMSend__sendDone(msg, result);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 38
    /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__m_sending = FALSE;
//#line 38
    __nesc_atomic_end(__nesc_atomic); }
}



static error_t /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__doSend(message_t *msg)
{
  return /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__SubAMSend__send(/*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__AMPacket__destination(msg), msg, /*DigBaseC.PlatformMacC.RfMacC.RfReliableMacSendC.RfReliableMacRetrySendP*/RfReliableMacRetrySendP__0__Packet__payloadLength(msg));
}

//# 61 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  /* atomic removed: atomic calls only */
  {
    uint8_t num;

    for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
      {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
//#line 87
                  {
//#line 87
                    if (1 >= uart_debug_level) {
//#line 87
                        {
//#line 87
                          sprintf(uart_debug_buf, "fireTimers %d, now=0x%lx,elapsed=0x%lx, dt=0x%lx,t0=0x%lx\n", (int )num, elapsed, now, timer->dt, timer->t0);
                        }
//#line 87
                        ATOS_DEBUG_UART_PRINT();
                      }
                  }
                }
//#line 87
                ;

                /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              }
          }
      }

    /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
  }
}

//# 96 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void)
{
  /* atomic removed: atomic calls only */
  {
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
//#line 100
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type expires;
//#line 100
    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type remaining;



    expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;


    remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
      {
        if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 && 
        expires <= now) {
          remaining = 0;
          }
      }
    else {
        if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 || 
        expires <= now) {
          remaining = 0;
          }
      }
    if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
        remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = 0;
      }

    /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )now << 5, 
    (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 5);
  }
}

//# 38 "/opt/atos/tos/chips/cc2530/timer/hardware/HplCC2530Timer1P.nc"
static  error_t /*HplCC2530Timer1C.HplCC2530Timer1P*/HplCC2530Timer1P__0__Init__init(void)
{
  /* atomic removed: atomic calls only */
  {
    T1CCTL0 = 0;
    T1CCTL1 = 0;
    T1CCTL2 = 0;
    ((uint8_t xdata *)0)[0x62A3] = 0;
    ((uint8_t xdata *)0)[0x62A4] = 0;

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

//# 22 "/opt/atos/tos/lib/atos/kernel/TopTask/TopTaskMgrP.nc"
static  bool TopTaskMgrP__TopTaskMgr__hasTasks(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      uint8_t i;

      for (i = 0; i < TopTaskMgrP__TOP_TASK_COUNT; ++i) 
        {
          if (TopTaskMgrP__m_task_flag[i]) 
            {
              {
                unsigned char __nesc_temp = 
//#line 32
                TRUE;

                {
//#line 32
                  __nesc_atomic_end(__nesc_atomic); 
//#line 32
                  return __nesc_temp;
                }
              }
            }
        }
//#line 36
      {
        unsigned char __nesc_temp = 
//#line 36
        FALSE;

        {
//#line 36
          __nesc_atomic_end(__nesc_atomic); 
//#line 36
          return __nesc_temp;
        }
      }
    }
//#line 39
    __nesc_atomic_end(__nesc_atomic); }
}

//# 61 "/opt/atos/tos/chips/rf2530/hardware/txrx/RfHardwareRxP.nc"
static bool /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__readRfBuf(uint8_t *_data, uint8_t length)
{
  while (length > 0) 
    {
      if (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head == /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_tail) 
        {
          return FALSE;
        }

      {
//#line 70
        *_data = /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf__data[/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head & ((1 << 8) - 1)];
//#line 70
        /*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head = (/*RfHardwareRxC.RfHardwareRxP*/RfHardwareRxP__0__rxbuf_head + 1) & ((1 << 8) - 1);
      }
//#line 70
      ;
      _data++;
      length--;
    }

  return TRUE;
}

//# 56 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacPacketP.nc"
static  bool RfReliableMacPacketP__PacketEx__isValidPacket(message_t *msg)
{
  if (!RfReliableMacPacketP__SubPacketEx__isValidPacket(msg)) 
    {
      return FALSE;
    }

  return RfReliableMacPacketP__SubPacket__payloadLength(msg) >= RfReliableMacPacketP__PacketEx__packetHeaderSize();
}

//# 21 "/opt/atos/tos/lib/atos/net/AtosMac/mac/RfReliableMacAckP.nc"
static  uint8_t RfReliableMacAckP__RfReliableMacAck__fillAckMessage(message_t *receive_msg, uint8_t receive_dsn, message_t *ack_msg, rf_ack_t *ack)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RfReliableMacAckP__fillAckMessageDefault(receive_msg, receive_dsn, ack_msg, ack);
      RfReliableMacAckP__RfReliableMacAckEvent__fillAckMessage(receive_msg, receive_dsn, ack_msg, ack);

      {
        unsigned char __nesc_temp = 
//#line 28
        sizeof(rf_ack_t );

        {
//#line 28
          __nesc_atomic_end(__nesc_atomic); 
//#line 28
          return __nesc_temp;
        }
      }
    }
//#line 31
    __nesc_atomic_end(__nesc_atomic); }
}

//# 51 "/opt/atos/tos/lib/atos/utils/DsnFilterCenterP.nc"
static bool /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__filterDsn(uint16_t addr, uint8_t field_id, uint8_t dsn)
{
  /* atomic removed: atomic calls only */
  {
    int index = /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__indexOfAddress(addr);

    field_id %= 1;

    if (index < 0) 
      {
        index = /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__findNextAddress();
      }

    if (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_address[index] == addr) 
      {
        if (/*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_dsn[field_id][index] == dsn) 
          {
            {
              unsigned char __nesc_temp = 
//#line 68
              FALSE;

//#line 68
              return __nesc_temp;
            }
          }
      }
    /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_address[index] = addr;
    /*DsnFilterCenterC.DsnFilterCenterP*/DsnFilterCenterP__0__m_filter_dsn[field_id][index] = dsn;

    {
      unsigned char __nesc_temp = 
//#line 75
      TRUE;

//#line 75
      return __nesc_temp;
    }
  }
}

//# 22 "/opt/atos/tos/platforms/antc5/interrupt/PlatformInterruptC.nc"
void __vector_0(void) interrupt 0
{
  EA = 0;
  PlatformInterruptC__INT_RFERR__fired();
  EA = 1;
}







void __vector_16(void) interrupt 16
{
  EA = 0;
  PlatformInterruptC__INT_RF__fired();
  EA = 1;
}

//#line 55
void __vector_9(void) interrupt 9
{
  EA = 0;
  PlatformInterruptC__INT_TIM1__fired();
  EA = 1;
}








void __vector_2(void) interrupt 2
{
  EA = 0;
  PlatformInterruptC__INT_UART0_RX__fired();
  EA = 1;
}






void __vector_7(void) interrupt 7
{
  EA = 0;
  PlatformInterruptC__INT_UART0_TX__fired();
  EA = 1;
}







void __vector_3(void) interrupt 3
{
  EA = 0;
  PlatformInterruptC__INT_UART1_RX__fired();
  EA = 1;
}






void __vector_14(void) interrupt 14
{
  EA = 0;
  PlatformInterruptC__INT_UART1_TX__fired();
  EA = 1;
}







void __vector_5(void) interrupt 5
{
  EA = 0;
  PlatformInterruptC__INT_ST__fired();
  EA = 1;
}







void __vector_13(void) interrupt 13
{
  EA = 0;
  PlatformInterruptC__INT_P0__fired();
  EA = 1;
}

void __vector_15(void) interrupt 15
{
  EA = 0;
  PlatformInterruptC__INT_P1__fired();
  EA = 1;
}

