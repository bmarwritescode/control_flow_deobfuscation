typedef void *__builtin_va_list;
struct __pthread_internal_list;
union __anonunion_pthread_cond_t_951761805;
union __anonunion_pthread_barrier_t_145707746;
struct timeval;
struct __anonstruct___sigset_t_973126068;
struct random_data;
struct __pthread_internal_slist;
union pthread_attr_t;
struct __pthread_cond_s;
union __anonunion_pthread_rwlock_t_656928968;
struct __anonstruct___g1_start32_998764952;
union __anonunion_pthread_barrierattr_t_951761806;
struct timespec;
struct _2_OBF_FUNC_2_opaque_NodeStruct;
union __anonunion____missing_field_name_898115585;
struct __pthread_rwlock_arch_t;
enum __anonenum_idtype_t_558242672;
struct _2_OBF_FUNC_1_opaque_NodeStruct;
struct __pthread_mutex_s;
struct __anonstruct_ldiv_t_790849867;
struct __anonstruct___wseq32_961093918;
struct __anonstruct_div_t_773697287;
union __anonunion_pthread_condattr_t_488594145;
union __anonunion_pthread_mutexattr_t_488594144;
union __anonunion____missing_field_name_998764951;
union __anonunion_pthread_mutex_t_335460617;
struct __anonstruct___fsid_t_109580352;
struct __anonstruct_fd_set_356711149;
struct drand48_data;
struct __anonstruct_lldiv_t_103911545;
union __anonunion_pthread_rwlockattr_t_145707745;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned int __mode_t;
typedef unsigned short __uint16_t;
typedef __uint16_t __uint_least16_t;
typedef unsigned long __u_quad_t;
extern long(mrand48)(void);
typedef unsigned long __ino_t;
typedef __ino_t ino_t;
typedef long __blksize_t;
typedef __blksize_t blksize_t;
typedef int __daddr_t;
typedef __daddr_t daddr_t;
typedef struct __anonstruct___fsid_t_109580352 __fsid_t;
extern void(lcong48)(unsigned short *__param);
typedef unsigned long __fsfilcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef long __quad_t;
unsigned long _1_entropy = 166962006872878902UL;
typedef long __syscall_slong_t;
typedef long __time_t;
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
int _global_argc;
typedef unsigned long __uint64_t;
static __uint64_t __uint64_identity(__uint64_t __x);
extern int(mkstemp)(char *__template);
typedef unsigned long __nlink_t;
typedef __nlink_t nlink_t;
extern char *(qecvt)(long double __value, int __ndigit, int *__decpt,
                     int *__sign);
typedef unsigned long size_t;
extern size_t(__ctype_get_mb_cur_max)(void);
extern long(a64l)(char const *__s);
typedef __uint64_t u_int64_t;
extern void(abort)(void);
union __anonunion_pthread_barrierattr_t_951761806 {
  char __size[4];
  int __align;
};
extern int(getloadavg)(double *__loadavg, int __nelem);
typedef long __off64_t;
typedef long __fd_mask;
typedef unsigned char __uint8_t;
typedef __uint8_t __uint_least8_t;
typedef long __blkcnt_t;
extern int(at_quick_exit)(void (*__func)(void));
extern int(setenv)(char const *__name, char const *__value, int __replace);
extern double(strtod)(char const *__nptr, char **__endptr);
struct _2_OBF_FUNC_2_opaque_NodeStruct {
  struct _2_OBF_FUNC_2_opaque_NodeStruct *prev;
  int data;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *next;
};
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_2 =
    (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
struct _2_OBF_FUNC_1_opaque_NodeStruct {
  struct _2_OBF_FUNC_1_opaque_NodeStruct *next;
  int data;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *prev;
};
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_1 =
    (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef int __clockid_t;
typedef unsigned int __gid_t;
typedef int __sig_atomic_t;
typedef unsigned long __ino64_t;
typedef int __key_t;
typedef __key_t key_t;
extern long long(strtoq)(char const *__nptr, char **__endptr, int __base);
extern int(unsetenv)(char const *__name);
typedef unsigned long __fsblkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef int volatile pthread_spinlock_t;
typedef struct __anonstruct_fd_set_356711149 fd_set;
struct __anonstruct_ldiv_t_790849867 {
  long quot;
  long rem;
};
extern int(rand_r)(unsigned int *__seed);
typedef __mode_t mode_t;
typedef void *__timer_t;
typedef int wchar_t;
extern size_t(wcstombs)(char *__s, wchar_t const *__pwcs, size_t __n);
typedef unsigned long ulong;
typedef union __anonunion_pthread_condattr_t_488594145 pthread_condattr_t;
extern long(atol)(char const *__nptr);
extern int(srand48_r)(long __seedval, struct drand48_data *__buffer);
typedef __fd_mask fd_mask;
extern size_t(mbstowcs)(wchar_t *__pwcs, char const *__s, size_t __n);
extern void *(malloc)(size_t __size);
extern int(mkstemps)(char *__template, int __suffixlen);
extern int(seed48_r)(unsigned short *__seed16v, struct drand48_data *__buffer);
struct __anonstruct___sigset_t_973126068 {
  unsigned long __val[1024UL / (8UL * sizeof(unsigned long))];
};
extern long long(atoll)(char const *__nptr);
typedef int register_t;
extern int(qecvt_r)(long double __value, int __ndigit, int *__decpt,
                    int *__sign, char *__buf, size_t __len);
extern char *(realpath)(char const *__name, char *__resolved);
typedef struct __anonstruct_ldiv_t_790849867 ldiv_t;
extern char *(l64a)(long __n);
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_1 =
    (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
typedef int __int32_t;
typedef __off64_t __loff_t;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_list_2 =
    (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
struct drand48_data {
  unsigned short __x[3];
  unsigned short __old_x[3];
  unsigned short __c;
  unsigned short __init;
  unsigned long long __a;
};
typedef struct __anonstruct_lldiv_t_103911545 lldiv_t;
typedef unsigned long __dev_t;
typedef __dev_t dev_t;
extern char *(getenv)(char const *__name);
typedef unsigned int uint;
typedef unsigned int __uint32_t;
static __uint32_t __bswap_32(__uint32_t __bsx);
static __uint16_t __uint16_identity(__uint16_t __x);
typedef unsigned char __u_char;
struct __anonstruct_fd_set_356711149 {
  __fd_mask __fds_bits[1024 / (8 * (int)sizeof(__fd_mask))];
};
typedef unsigned int __id_t;
extern char *(ecvt)(double __value, int __ndigit, int *__decpt, int *__sign);
typedef short __int16_t;
typedef __int16_t int16_t;
typedef union __anonunion_pthread_mutexattr_t_488594144 pthread_mutexattr_t;
extern void *(realloc)(void *__ptr, size_t __size);
typedef signed char __int8_t;
extern int(clearenv)(void);
typedef unsigned int pthread_key_t;
typedef __clockid_t clockid_t;
extern double(erand48)(unsigned short *__xsubi);
unsigned long _1_alwaysZero = 0;
typedef __id_t id_t;
typedef union __anonunion_pthread_barrier_t_145707746 pthread_barrier_t;
typedef int (*__compar_fn_t)(void const *, void const *);
extern void(exit)(int __status);
extern long(jrand48)(unsigned short *__xsubi);
extern int(fcvt_r)(double __value, int __ndigit, int *__decpt, int *__sign,
                   char *__buf, size_t __len);
typedef __int32_t int32_t;
typedef __loff_t loff_t;
typedef __int16_t __int_least16_t;
extern int(mbtowc)(wchar_t *__pwc, char const *__s, size_t __n);
extern int(abs)(int __x);
typedef struct __anonstruct___sigset_t_973126068 __sigset_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
extern long(labs)(long __x);
extern int(nrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer,
                      long *__result);
extern void(srand)(unsigned int __seed);
typedef unsigned long __rlim64_t;
typedef __int32_t __int_least32_t;
typedef long __blkcnt64_t;
struct __pthread_internal_list {
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s {
  int __lock;
  unsigned int __count;
  int __owner;
  unsigned int __nusers;
  int __kind;
  short __spins;
  short __elision;
  __pthread_list_t __list;
};
union __anonunion_pthread_mutex_t_335460617 {
  struct __pthread_mutex_s __data;
  char __size[40];
  long __align;
};
extern int(atexit)(void (*__func)(void));
extern int(setstate_r)(char *__statebuf, struct random_data *__buf);
typedef __u_quad_t u_quad_t;
extern char *(qfcvt)(long double __value, int __ndigit, int *__decpt,
                     int *__sign);
extern char *(qgcvt)(long double __value, int __ndigit, char *__buf);
extern int system(char const *__command);
typedef struct _2_OBF_FUNC_2_opaque_NodeStruct
    *_2_OBF_FUNC_2_opaque_StructureType;
union pthread_attr_t {
  char __size[56];
  long __align;
};
extern float(strtof)(char const *__nptr, char **__endptr);
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
typedef unsigned int __useconds_t;
extern void(qsort)(void *__base, size_t __nmemb, size_t __size,
                   int (*__compar)(void const *, void const *));
extern char *(fcvt)(double __value, int __ndigit, int *__decpt, int *__sign);
extern int pselect(int __nfds, fd_set *__readfds, fd_set *__writefds,
                   fd_set *__exceptfds, struct timespec const *__timeout,
                   __sigset_t const *__sigmask);
typedef long __int64_t;
typedef __int64_t int64_t;
typedef __uint32_t u_int32_t;
typedef unsigned short __u_short;
extern char *(mkdtemp)(char *__template);
extern long(strtol)(char const *__nptr, char **__endptr, int __base);
typedef unsigned long __fsblkcnt64_t;
typedef int pthread_once_t;
extern double(atof)(char const *__nptr);
typedef struct _2_OBF_FUNC_1_opaque_NodeStruct
    *_2_OBF_FUNC_1_opaque_StructureType;
typedef __u_char u_char;
typedef __sigset_t sigset_t;
extern long long(strtoll)(char const *__nptr, char **__endptr, int __base);
typedef long __off_t;
typedef __off_t off_t;
char **_global_argv;
struct __anonstruct___g1_start32_998764952 {
  unsigned int __low;
  unsigned int __high;
};
struct __anonstruct___wseq32_961093918 {
  unsigned int __low;
  unsigned int __high;
};
union __anonunion____missing_field_name_898115585 {
  unsigned long long __wseq;
  struct __anonstruct___wseq32_961093918 __wseq32;
};
union __anonunion____missing_field_name_998764951 {
  unsigned long long __g1_start;
  struct __anonstruct___g1_start32_998764952 __g1_start32;
};
struct __pthread_cond_s {
  union __anonunion____missing_field_name_898115585 __annonCompField1;
  union __anonunion____missing_field_name_998764951 __annonCompField2;
  unsigned int __g_refs[2];
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
union __anonunion_pthread_cond_t_951761805 {
  struct __pthread_cond_s __data;
  char __size[48];
  long long __align;
};
static __uint32_t __uint32_identity(__uint32_t __x);
extern int(posix_memalign)(void **__memptr, size_t __alignment, size_t __size);
typedef unsigned int __socklen_t;
typedef union __anonunion_pthread_rwlockattr_t_145707745 pthread_rwlockattr_t;
extern long(random)(void);
typedef __uint16_t u_int16_t;
static __uint16_t __bswap_16(__uint16_t __bsx);
typedef union pthread_attr_t pthread_attr_t;
extern int(putenv)(char *__string);
struct random_data {
  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
typedef unsigned long __rlim_t;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_2 =
    (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef unsigned long __uintmax_t;
extern void *(reallocarray)(void *__ptr, size_t __nmemb, size_t __size);
extern int(getsubopt)(char **__optionp, char *const *__tokens, char **__valuep);
extern unsigned short *(seed48)(unsigned short *__seed16v);
extern int(qfcvt_r)(long double __value, int __ndigit, int *__decpt,
                    int *__sign, char *__buf, size_t __len);
typedef union __anonunion_pthread_mutex_t_335460617 pthread_mutex_t;
typedef long __clock_t;
struct __pthread_rwlock_arch_t {
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  signed char __rwelision;
  unsigned char __pad1[7];
  unsigned long __pad2;
  unsigned int __flags;
};
typedef union __anonunion_pthread_barrierattr_t_951761806 pthread_barrierattr_t;
typedef __timer_t timer_t;
extern char *(setstate)(char *__statebuf);
union __anonunion_pthread_rwlock_t_656928968 {
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long __align;
};
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_list_1 =
    (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
extern long double(strtold)(char const *__nptr, char **__endptr);
typedef int __pid_t;
struct _2_OBF_FUNC_1_opaque_NodeStruct *_2_OBF_FUNC_1_opaque_ptr_1 =
    (struct _2_OBF_FUNC_1_opaque_NodeStruct *)0;
typedef struct __anonstruct_div_t_773697287 div_t;
extern div_t(div)(int __numer, int __denom);
extern void *(bsearch)(void const *__key, void const *__base, size_t __nmemb,
                       size_t __size,
                       int (*__compar)(void const *, void const *));
extern long long(llabs)(long long __x);
typedef unsigned int __uid_t;
typedef __uid_t uid_t;
struct __pthread_internal_slist {
  struct __pthread_internal_slist *__next;
};
extern unsigned long long(strtoull)(char const *__nptr, char **__endptr,
                                    int __base);
typedef __uint64_t __uint_least64_t;
typedef union __anonunion_pthread_cond_t_951761805 pthread_cond_t;
extern char *(gcvt)(double __value, int __ndigit, char *__buf);
typedef __time_t time_t;
extern lldiv_t(lldiv)(long long __numer, long long __denom);
typedef enum __anonenum_idtype_t_558242672 idtype_t;
static __uint64_t __bswap_64(__uint64_t __bsx);
typedef __int64_t __int_least64_t;
typedef __suseconds_t suseconds_t;
typedef __int8_t int8_t;
extern int(srandom_r)(unsigned int __seed, struct random_data *__buf);
extern int(lcong48_r)(unsigned short *__param, struct drand48_data *__buffer);
typedef unsigned long __fsfilcnt64_t;
extern int(mblen)(char const *__s, size_t __n);
typedef union __anonunion_pthread_rwlock_t_656928968 pthread_rwlock_t;
struct __anonstruct___fsid_t_109580352 {
  int __val[2];
};
typedef __fsid_t fsid_t;
typedef __blkcnt_t blkcnt_t;
extern void *(aligned_alloc)(size_t __alignment, size_t __size);
typedef __uint32_t __uint_least32_t;
extern int(rpmatch)(char const *__response);
typedef __gid_t gid_t;
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
extern ldiv_t(ldiv)(long __numer, long __denom);
typedef long __intmax_t;
union __anonunion_pthread_barrier_t_145707746 {
  char __size[32];
  long __align;
};
typedef unsigned long __u_long;
typedef __u_long u_long;
union __anonunion_pthread_rwlockattr_t_145707745 {
  char __size[8];
  long __align;
};
extern void *(calloc)(size_t __nmemb, size_t __size);
extern int(drand48_r)(struct drand48_data *__buffer, double *__result);
char **_global_envp;
extern long(lrand48)(void);
extern void *(valloc)(size_t __size);
extern int(random_r)(struct random_data *__buf, int32_t *__result);
extern int select(int __nfds, fd_set *__readfds, fd_set *__writefds,
                  fd_set *__exceptfds, struct timeval *__timeout);
typedef unsigned long __syscall_ulong_t;
enum __anonenum_idtype_t_558242672 { P_ALL = 0, P_PID = 1, P_PGID = 2 };
extern int(ecvt_r)(double __value, int __ndigit, int *__decpt, int *__sign,
                   char *__buf, size_t __len);
extern unsigned long(strtoul)(char const *__nptr, char **__endptr, int __base);
typedef __clock_t clock_t;
typedef __int8_t __int_least8_t;
extern void(free)(void *__ptr);
extern void *(alloca)(size_t __size);
int main(int argc, char **argv, char **_formal_envp);
extern int(lrand48_r)(struct drand48_data *__buffer, long *__result);
extern char *(mktemp)(char *__template);
extern int(jrand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer,
                      long *__result);
extern long(nrand48)(unsigned short *__xsubi);
extern int(wctomb)(char *__s, wchar_t __wchar);
extern int(erand48_r)(unsigned short *__xsubi, struct drand48_data *__buffer,
                      double *__result);
typedef long __intptr_t;
extern char *(initstate)(unsigned int __seed, char *__statebuf,
                         size_t __statelen);
int OBF_FUNC(int i);
typedef struct __pthread_internal_slist __pthread_slist_t;
typedef __pid_t pid_t;
typedef long __fsword_t;
union __anonunion_pthread_condattr_t_488594145 {
  char __size[4];
  int __align;
};
struct __anonstruct_lldiv_t_103911545 {
  long long quot;
  long long rem;
};
extern void(quick_exit)(int __status);
typedef __uint8_t u_int8_t;
typedef __u_short u_short;
extern int(mrand48_r)(struct drand48_data *__buffer, long *__result);
extern void(_Exit)(int __status);
extern void(srandom)(unsigned int __seed);
typedef __quad_t quad_t;
extern void(srand48)(long __seedval);
extern int(rand)(void);
typedef unsigned long pthread_t;
extern int(on_exit)(void (*__func)(int __status, void *__arg), void *__arg);
extern double(drand48)(void);
union __anonunion_pthread_mutexattr_t_488594144 {
  char __size[4];
  int __align;
};
typedef unsigned short ushort;
struct _2_OBF_FUNC_2_opaque_NodeStruct *_2_OBF_FUNC_2_opaque_ptr_2 =
    (struct _2_OBF_FUNC_2_opaque_NodeStruct *)0;
extern int(initstate_r)(unsigned int __seed, char *__statebuf,
                        size_t __statelen, struct random_data *__buf);
extern unsigned long long(strtouq)(char const *__nptr, char **__endptr,
                                   int __base);
extern int(atoi)(char const *__nptr);
struct __anonstruct_div_t_773697287 {
  int quot;
  int rem;
};
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
  int _BARRIER_0;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit; }
        _global_envp_i$nit_INLINE__global_envp_i$nit:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit; }
        _global_argv_i$nit_INLINE__global_argv_i$nit:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit; }
        _global_argc_i$nit_INLINE__global_argc_i$nit:;
        }
        goto megaInit_INLINE_megaInit;
      }
    megaInit_INLINE_megaInit:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0 = 1;
    tmp = atoi((char const *)*(argv + 1));
    tmp___0 = OBF_FUNC(tmp);
    return (tmp___0);
  }
}
int OBF_FUNC(int i) {
  int m;
  _Bool isPrime;
  int j;
  int k;
  int k___0;
  int k___1;
  _Bool isPrime___0;
  int j___0;
  int k___2;
  int k___3;
  int k___4;
  _Bool isPrime___1;
  int j___1;
  int k___5;
  int k___6;
  int k___7;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p18;
  int i19;
  struct _2_OBF_FUNC_1_opaque_NodeStruct *p20;
  int _2_OBF_FUNC__BEGIN_1;
  int _2_OBF_FUNC__END_1;
  int _2_OBF_FUNC__BARRIER_2;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p24;
  int i25;
  struct _2_OBF_FUNC_2_opaque_NodeStruct *p26;
  int _2_OBF_FUNC__BEGIN_3;
  int _2_OBF_FUNC__END_3;
  int _2_OBF_FUNC__BARRIER_4;
  {
    {
      _2_OBF_FUNC__BEGIN_3 = 1;
      p24 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(
          sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
      p24->next = p24;
      p24->prev = p24;
      _2_OBF_FUNC_2_opaque_list_1 = p24;
      i25 = 0;
      while (i25 < 3) {
        p26 = (struct _2_OBF_FUNC_2_opaque_NodeStruct *)malloc(
            sizeof(struct _2_OBF_FUNC_2_opaque_NodeStruct));
        p26->data = i25 * (((_1_entropy & ~2) << 1UL) - (_1_entropy ^ 2));
        p26->next = _2_OBF_FUNC_2_opaque_list_1->next;
        p26->prev = _2_OBF_FUNC_2_opaque_list_1;
        (_2_OBF_FUNC_2_opaque_list_1->next)->prev = p26;
        _2_OBF_FUNC_2_opaque_list_1->next = p26;
        i25++;
      }
      _2_OBF_FUNC_2_opaque_ptr_1 = _2_OBF_FUNC_2_opaque_list_1->next;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_1;
      _2_OBF_FUNC_2_opaque_ptr_2 = _2_OBF_FUNC_2_opaque_ptr_2->next;
      _2_OBF_FUNC__END_3 = 1;
    }
    _2_OBF_FUNC__BARRIER_4 = 1;
    {
      _2_OBF_FUNC__BEGIN_1 = 1;
      p18 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(
          sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
      p18->next = p18;
      p18->prev = p18;
      _2_OBF_FUNC_1_opaque_list_1 = p18;
      i19 = 0;
      while (i19 < 3) {
        p20 = (struct _2_OBF_FUNC_1_opaque_NodeStruct *)malloc(
            sizeof(struct _2_OBF_FUNC_1_opaque_NodeStruct));
        p20->data = i19 * (((_1_entropy & ~1) << 1UL) - (_1_entropy ^ 1));
        p20->next = _2_OBF_FUNC_1_opaque_list_1->next;
        p20->prev = _2_OBF_FUNC_1_opaque_list_1;
        (_2_OBF_FUNC_1_opaque_list_1->next)->prev = p20;
        _2_OBF_FUNC_1_opaque_list_1->next = p20;
        i19++;
      }
      _2_OBF_FUNC_1_opaque_ptr_1 = _2_OBF_FUNC_1_opaque_list_1->next;
      _2_OBF_FUNC_1_opaque_ptr_2 = _2_OBF_FUNC_1_opaque_ptr_1;
      _2_OBF_FUNC__END_1 = 1;
    }
    _2_OBF_FUNC__BARRIER_2 = 1;
    if (i <= 0) {
      return (-1);
    }
    m = i;
    while (m > 1) {
      if (m > 1) {
        isPrime = (_Bool)1;
        j = 2;
        while (1) {
          if (j < m) {
            if (!isPrime) {
              break;
            }
          } else {
            break;
          }
          if (j < m) {
            if (isPrime) {
              k = 2;
              while (1) {
                if (k < m) {
                  if (!isPrime) {
                    break;
                  }
                } else {
                  break;
                }
                if (k < m) {
                  if (isPrime) {
                    if (m == j * k) {
                      isPrime = (_Bool)0;
                    }
                    k++;
                  }
                }
                if (k < m) {
                  if (isPrime) {
                    if (m == j * k) {
                      isPrime = (_Bool)0;
                    }
                    k++;
                  }
                }
                if (k < m) {
                  if (isPrime) {
                    if (m == j * k) {
                      isPrime = (_Bool)0;
                    }
                    k++;
                  }
                }
              }
              j++;
            }
          }
          if (j < m) {
            if (isPrime) {
              k___0 = 2;
              while (1) {
                if (k___0 < m) {
                  if (!isPrime) {
                    break;
                  }
                } else {
                  break;
                }
                if (k___0 < m) {
                  if (isPrime) {
                    if (m == j * k___0) {
                      isPrime = (_Bool)0;
                    }
                    k___0++;
                  }
                }
                if (k___0 < m) {
                  if (isPrime) {
                    if (m == j * k___0) {
                      isPrime = (_Bool)0;
                    }
                    k___0++;
                  }
                }
                if (k___0 < m) {
                  if (isPrime) {
                    if (m == j * k___0) {
                      isPrime = (_Bool)0;
                    }
                    k___0++;
                  }
                }
              }
              j++;
            }
          }
          if (j < m) {
            if (isPrime) {
              k___1 = 2;
              while (1) {
                if (k___1 < m) {
                  if (!isPrime) {
                    break;
                  }
                } else {
                  break;
                }
                if (k___1 < m) {
                  if (isPrime) {
                    if (m == j * k___1) {
                      isPrime = (_Bool)0;
                    }
                    k___1++;
                  }
                }
                if (k___1 < m) {
                  if (isPrime) {
                    if (_2_OBF_FUNC_1_opaque_ptr_1 !=
                        _2_OBF_FUNC_1_opaque_ptr_2) {
                      if (!((m == j * k___1) > k___3)) {
                        isPrime = (_Bool)0 / isPrime___1;
                      }
                    } else if (m == j * k___1) {
                      isPrime = (_Bool)0;
                    }
                    k___1++;
                  }
                }
                if (k___1 < m) {
                  if (isPrime) {
                    if (m == j * k___1) {
                      isPrime = (_Bool)0;
                    }
                    k___1++;
                  }
                }
              }
              j++;
            }
          }
        }
        if (isPrime) {
          return (m);
        }
        m--;
      }
      if (m > 1) {
        isPrime___0 = (_Bool)1;
        j___0 = 2;
        while (1) {
          if (j___0 < m) {
            if (!isPrime___0) {
              break;
            }
          } else {
            break;
          }
          if (j___0 < m) {
            if (isPrime___0) {
              k___2 = 2;
              while (1) {
                if (k___2 < m) {
                  if (!isPrime___0) {
                    break;
                  }
                } else {
                  break;
                }
                {
                  if ((((_1_alwaysZero &
                         (((_1_entropy ^ ~9) +
                           ((_1_entropy | 9) + (_1_entropy | 9))) +
                          1UL)) *
                            (_1_alwaysZero |
                             (((_1_entropy ^ ~9) +
                               ((_1_entropy | 9) + (_1_entropy | 9))) +
                              1UL)) +
                        (_1_alwaysZero &
                         ~(((_1_entropy ^ ~9) +
                            ((_1_entropy | 9) + (_1_entropy | 9))) +
                           1UL)) *
                            (~_1_alwaysZero &
                             (((_1_entropy ^ ~9) +
                               ((_1_entropy | 9) + (_1_entropy | 9))) +
                              1UL))) -
                       ~0) -
                      1UL) {
                    {
                      while ((k___2 < m) == i25) {
                        if (!(isPrime___0 > 2)) {
                          if (!((m == j___0 * k___2) > k___6)) {
                            isPrime___0 = (_Bool)1;
                          }
                          k___2 = (k___2 + 1) * k___3;
                        }
                      }
                    }
                  } else if (k___2 < m) {
                    if (isPrime___0) {
                      if (m == j___0 * k___2) {
                        isPrime___0 = (_Bool)0;
                      }
                      k___2++;
                    }
                  }
                }
                if (k___2 < m) {
                  if (isPrime___0) {
                    if (m == j___0 * k___2) {
                      isPrime___0 = (_Bool)0;
                    }
                    k___2++;
                  }
                }
                if (k___2 < m) {
                  if (isPrime___0) {
                    if (m == j___0 * k___2) {
                      isPrime___0 = (_Bool)0;
                    }
                    k___2++;
                  }
                }
              }
              j___0++;
            }
          }
          if (j___0 < m) {
            if (isPrime___0) {
              k___3 = 2;
              while (1) {
                if (k___3 < m) {
                  if (!isPrime___0) {
                    break;
                  }
                } else {
                  break;
                }
                if (k___3 < m) {
                  if (isPrime___0) {
                    if (m == j___0 * k___3) {
                      isPrime___0 = (_Bool)0;
                    }
                    k___3++;
                  }
                }
                if (k___3 < m) {
                  if (isPrime___0) {
                    if (m == j___0 * k___3) {
                      isPrime___0 = (_Bool)0;
                    }
                    k___3++;
                  }
                }
                if (k___3 < m) {
                  if (isPrime___0) {
                    if (m == j___0 * k___3) {
                      isPrime___0 = (_Bool)0;
                    }
                    k___3++;
                  }
                }
              }
              j___0++;
            }
          }
          if (j___0 < m) {
            if (isPrime___0) {
              k___4 = 2;
              while (1) {
                if (k___4 < m) {
                  if (!isPrime___0) {
                    break;
                  }
                } else {
                  break;
                }
                if (k___4 < m) {
                  if (isPrime___0) {
                    if (m == j___0 * k___4) {
                      isPrime___0 = (_Bool)0;
                    }
                    k___4++;
                  }
                }
                if (k___4 < m) {
                  if (isPrime___0) {
                    if (m == j___0 * k___4) {
                      isPrime___0 = (_Bool)0;
                    }
                    k___4++;
                  }
                }
                if (k___4 < m) {
                  if (isPrime___0) {
                    if (m == j___0 * k___4) {
                      isPrime___0 = (_Bool)0;
                    }
                    k___4++;
                  }
                }
              }
              j___0++;
            }
          }
        }
        if (isPrime___0) {
          return (m);
        }
        m--;
      }
      if (m > 1) {
        isPrime___1 = (_Bool)1;
        j___1 = 2;
        while (1) {
          if (j___1 < m) {
            if (!isPrime___1) {
              break;
            }
          } else {
            break;
          }
          if (j___1 < m) {
            if (isPrime___1) {
              k___5 = 2;
              while (1) {
                if (k___5 < m) {
                  if (!isPrime___1) {
                    break;
                  }
                } else {
                  break;
                }
                if (k___5 < m) {
                  if (isPrime___1) {
                    if (m == j___1 * k___5) {
                      isPrime___1 = (_Bool)0;
                    }
                    k___5++;
                  }
                }
                if (k___5 < m) {
                  if (isPrime___1) {
                    if (m == j___1 * k___5) {
                      isPrime___1 = (_Bool)0;
                    }
                    k___5++;
                  }
                }
                if (k___5 < m) {
                  if (isPrime___1) {
                    if (m == j___1 * k___5) {
                      isPrime___1 = (_Bool)0;
                    }
                    k___5++;
                  }
                }
              }
              j___1++;
            }
          }
          if (j___1 < m) {
            if (isPrime___1) {
              k___6 = 2;
              while (1) {
                if (k___6 < m) {
                  if (!isPrime___1) {
                    break;
                  }
                } else {
                  break;
                }
                if (k___6 < m) {
                  if (isPrime___1) {
                    if (m == j___1 * k___6) {
                      isPrime___1 = (_Bool)0;
                    }
                    k___6++;
                  }
                }
                if (k___6 < m) {
                  if (isPrime___1) {
                    if (m == j___1 * k___6) {
                      isPrime___1 = (_Bool)0;
                    }
                    k___6++;
                  }
                }
                if (k___6 < m) {
                  if (isPrime___1) {
                    if (m == j___1 * k___6) {
                      isPrime___1 = (_Bool)0;
                    }
                    k___6++;
                  }
                }
              }
              j___1++;
            }
          }
          if (j___1 < m) {
            if (isPrime___1) {
              k___7 = 2;
              while (1) {
                if (k___7 < m) {
                  if (!isPrime___1) {
                    break;
                  }
                } else {
                  break;
                }
                if (k___7 < m) {
                  if (isPrime___1) {
                    if (m == j___1 * k___7) {
                      isPrime___1 = (_Bool)0;
                    }
                    k___7++;
                  }
                }
                if (k___7 < m) {
                  if (isPrime___1) {
                    if (m == j___1 * k___7) {
                      isPrime___1 = (_Bool)0;
                    }
                    k___7++;
                  }
                }
                if (k___7 < m) {
                  if (isPrime___1) {
                    if (m == j___1 * k___7) {
                      isPrime___1 = (_Bool)0;
                    }
                    k___7++;
                  }
                }
              }
              j___1++;
            }
          }
        }
        if (isPrime___1) {
          return (m);
        }
        m--;
      }
    }
    return (-1);
  }
}