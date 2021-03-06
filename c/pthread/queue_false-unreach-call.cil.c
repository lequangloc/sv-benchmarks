extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_3 {
   char __size[56] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_3 pthread_attr_t;
struct __pthread_internal_list {
   struct __pthread_internal_list *__prev ;
   struct __pthread_internal_list *__next ;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   unsigned int __nusers ;
   int __kind ;
   int __spins ;
   __pthread_list_t __list ;
};
union __anonunion_pthread_mutex_t_4 {
   struct __pthread_mutex_s __data ;
   char __size[40] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_4 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_5 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_mutexattr_t_5 pthread_mutexattr_t;
struct __anonstruct_QType_29 {
   int element[20] ;
   int head ;
   int tail ;
   int amount ;
};
typedef struct __anonstruct_QType_29 QType;
extern  __attribute__((__nothrow__)) int pthread_create(pthread_t * __restrict  __newthread ,
                                                        pthread_attr_t const   * __restrict  __attr ,
                                                        void *(*__start_routine)(void * ) ,
                                                        void * __restrict  __arg )  __attribute__((__nonnull__(1,3))) ;
extern int pthread_join(pthread_t __th , void **__thread_return ) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_init(pthread_mutex_t *__mutex ,
                                                            pthread_mutexattr_t const   *__mutexattr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_lock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_unlock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
extern int printf(char const   * __restrict  __format  , ...) ;
pthread_mutex_t m  ;
extern int __VERIFIER_nondet_int() ;
int stored_elements[20]  ;
_Bool enqueue_flag  ;
_Bool dequeue_flag  ;
QType queue  ;
int init(QType *q ) 
{ unsigned int __cil_tmp2 ;
  unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;

  {
  __cil_tmp2 = (unsigned int )q;
  __cil_tmp3 = __cil_tmp2 + 80;
  *((int *)__cil_tmp3) = 0;
  __cil_tmp4 = (unsigned int )q;
  __cil_tmp5 = __cil_tmp4 + 84;
  *((int *)__cil_tmp5) = 0;
  __cil_tmp6 = (unsigned int )q;
  __cil_tmp7 = __cil_tmp6 + 88;
  *((int *)__cil_tmp7) = 0;
  return (0);
}
}
int empty(QType *q ) 
{ unsigned int __cil_tmp2 ;
  unsigned int __cil_tmp3 ;
  int __cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  int __cil_tmp7 ;
  char const   * __restrict  __cil_tmp8 ;

  {
  {
  __cil_tmp2 = (unsigned int )q;
  __cil_tmp3 = __cil_tmp2 + 84;
  __cil_tmp4 = *((int *)__cil_tmp3);
  __cil_tmp5 = (unsigned int )q;
  __cil_tmp6 = __cil_tmp5 + 80;
  __cil_tmp7 = *((int *)__cil_tmp6);
  if (__cil_tmp7 == __cil_tmp4) {
    {
    __cil_tmp8 = (char const   * __restrict  )"queue is empty\n";
    printf(__cil_tmp8);
    }
    return (-1);
  } else {
    return (0);
  }
  }
}
}
int full(QType *q ) 
{ unsigned int __cil_tmp2 ;
  unsigned int __cil_tmp3 ;
  int __cil_tmp4 ;
  char const   * __restrict  __cil_tmp5 ;

  {
  {
  __cil_tmp2 = (unsigned int )q;
  __cil_tmp3 = __cil_tmp2 + 88;
  __cil_tmp4 = *((int *)__cil_tmp3);
  if (__cil_tmp4 == 20) {
    {
    __cil_tmp5 = (char const   * __restrict  )"queue is full\n";
    printf(__cil_tmp5);
    }
    return (-2);
  } else {
    return (0);
  }
  }
}
}
int enqueue(QType *q , int x ) 
{ unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  int __cil_tmp24 ;

  {
  __cil_tmp3 = (unsigned int )q;
  __cil_tmp4 = __cil_tmp3 + 84;
  __cil_tmp5 = *((int *)__cil_tmp4);
  __cil_tmp6 = __cil_tmp5 * 4U;
  __cil_tmp7 = 0 + __cil_tmp6;
  __cil_tmp8 = (unsigned int )q;
  __cil_tmp9 = __cil_tmp8 + __cil_tmp7;
  *((int *)__cil_tmp9) = x;
  __cil_tmp10 = (unsigned int )q;
  __cil_tmp11 = __cil_tmp10 + 88;
  __cil_tmp12 = (unsigned int )q;
  __cil_tmp13 = __cil_tmp12 + 88;
  __cil_tmp14 = *((int *)__cil_tmp13);
  *((int *)__cil_tmp11) = __cil_tmp14 + 1;
  {
  __cil_tmp15 = (unsigned int )q;
  __cil_tmp16 = __cil_tmp15 + 84;
  __cil_tmp17 = *((int *)__cil_tmp16);
  if (__cil_tmp17 == 20) {
    __cil_tmp18 = (unsigned int )q;
    __cil_tmp19 = __cil_tmp18 + 84;
    *((int *)__cil_tmp19) = 1;
  } else {
    __cil_tmp20 = (unsigned int )q;
    __cil_tmp21 = __cil_tmp20 + 84;
    __cil_tmp22 = (unsigned int )q;
    __cil_tmp23 = __cil_tmp22 + 84;
    __cil_tmp24 = *((int *)__cil_tmp23);
    *((int *)__cil_tmp21) = __cil_tmp24 + 1;
  }
  }
  return (0);
}
}
int dequeue(QType *q ) 
{ int x ;
  unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  int __cil_tmp24 ;

  {
  __cil_tmp3 = (unsigned int )q;
  __cil_tmp4 = __cil_tmp3 + 80;
  __cil_tmp5 = *((int *)__cil_tmp4);
  __cil_tmp6 = __cil_tmp5 * 4U;
  __cil_tmp7 = 0 + __cil_tmp6;
  __cil_tmp8 = (unsigned int )q;
  __cil_tmp9 = __cil_tmp8 + __cil_tmp7;
  x = *((int *)__cil_tmp9);
  __cil_tmp10 = (unsigned int )q;
  __cil_tmp11 = __cil_tmp10 + 88;
  __cil_tmp12 = (unsigned int )q;
  __cil_tmp13 = __cil_tmp12 + 88;
  __cil_tmp14 = *((int *)__cil_tmp13);
  *((int *)__cil_tmp11) = __cil_tmp14 - 1;
  {
  __cil_tmp15 = (unsigned int )q;
  __cil_tmp16 = __cil_tmp15 + 80;
  __cil_tmp17 = *((int *)__cil_tmp16);
  if (__cil_tmp17 == 20) {
    __cil_tmp18 = (unsigned int )q;
    __cil_tmp19 = __cil_tmp18 + 80;
    *((int *)__cil_tmp19) = 1;
  } else {
    __cil_tmp20 = (unsigned int )q;
    __cil_tmp21 = __cil_tmp20 + 80;
    __cil_tmp22 = (unsigned int )q;
    __cil_tmp23 = __cil_tmp22 + 80;
    __cil_tmp24 = *((int *)__cil_tmp23);
    *((int *)__cil_tmp21) = __cil_tmp24 + 1;
  }
  }
  return (x);
}
}
void *t1(void *arg ) 
{ int value ;
  int i ;
  int tmp ;
  int tmp___0 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;

  {
  {
  pthread_mutex_lock(& m);
  value = __VERIFIER_nondet_int();
  tmp = enqueue(& queue, value);
  }
  if (tmp) {
    goto ERROR;
  } else {

  }
  {
  __cil_tmp6 = 0 * 4U;
  __cil_tmp7 = (unsigned int )(stored_elements) + __cil_tmp6;
  *((int *)__cil_tmp7) = value;
  tmp___0 = empty(& queue);
  }
  if (tmp___0) {
    goto ERROR;
  } else {

  }
  {
  pthread_mutex_unlock(& m);
  i = 0;
  }
  {
  while (1) {
    while_0_continue: /* CIL Label */ ;
    if (i < 19) {

    } else {
      goto while_0_break;
    }
    {
    pthread_mutex_lock(& m);
    }
    if (enqueue_flag) {
      {
      value = __VERIFIER_nondet_int();
      enqueue(& queue, value);
      __cil_tmp8 = i + 1;
      __cil_tmp9 = __cil_tmp8 * 4U;
      __cil_tmp10 = (unsigned int )(stored_elements) + __cil_tmp9;
      *((int *)__cil_tmp10) = value;
      enqueue_flag = (_Bool)0;
      dequeue_flag = (_Bool)1;
      }
    } else {

    }
    {
    pthread_mutex_unlock(& m);
    i = i + 1;
    }
  }
  while_0_break: /* CIL Label */ ;
  }
  return ((void *)0);
  ERROR: __VERIFIER_error();
  return ((void *)0);
}
}
void *t2(void *arg ) 
{ int i ;
  int tmp ;
  int tmp___0 ;
  unsigned int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  int __cil_tmp7 ;

  {
  i = 0;
  {
  while (1) {
    while_1_continue: /* CIL Label */ ;
    if (i < 20) {

    } else {
      goto while_1_break;
    }
    {
    pthread_mutex_lock(& m);
    }
    if (dequeue_flag) {
      {
      tmp = dequeue(& queue);
      }
      if (tmp) {
        tmp___0 = 0;
      } else {
        tmp___0 = 1;
      }
      {
      __cil_tmp5 = i * 4U;
      __cil_tmp6 = (unsigned int )(stored_elements) + __cil_tmp5;
      __cil_tmp7 = *((int *)__cil_tmp6);
      if (tmp___0 == __cil_tmp7) {
        ERROR: __VERIFIER_error();
      } else {

      }
      }
      dequeue_flag = (_Bool)0;
      enqueue_flag = (_Bool)1;
    } else {

    }
    {
    pthread_mutex_unlock(& m);
    i = i + 1;
    }
  }
  while_1_break: /* CIL Label */ ;
  }
  return ((void *)0);
}
}
int main(void) 
{ pthread_t id1 ;
  pthread_t id2 ;
  int tmp ;
  int tmp___0 ;
  pthread_mutexattr_t const   *__cil_tmp5 ;
  pthread_t * __restrict  __cil_tmp6 ;
  void *__cil_tmp7 ;
  pthread_attr_t const   * __restrict  __cil_tmp8 ;
  void * __restrict  __cil_tmp9 ;
  pthread_t * __restrict  __cil_tmp10 ;
  void *__cil_tmp11 ;
  pthread_attr_t const   * __restrict  __cil_tmp12 ;
  void * __restrict  __cil_tmp13 ;
  pthread_t *__cil_tmp14 ;
  pthread_t __cil_tmp15 ;
  void *__cil_tmp16 ;
  void **__cil_tmp17 ;
  pthread_t *__cil_tmp18 ;
  pthread_t __cil_tmp19 ;
  void *__cil_tmp20 ;
  void **__cil_tmp21 ;

  {
  {
  enqueue_flag = (_Bool)1;
  dequeue_flag = (_Bool)0;
  init(& queue);
  tmp = empty(& queue);
  }
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  if (tmp___0 == -1) {
    ERROR: __VERIFIER_error();
  } else {

  }
  {
  __cil_tmp5 = (pthread_mutexattr_t const   *)0;
  pthread_mutex_init(& m, __cil_tmp5);
  __cil_tmp6 = (pthread_t * __restrict  )(& id1);
  __cil_tmp7 = (void *)0;
  __cil_tmp8 = (pthread_attr_t const   * __restrict  )__cil_tmp7;
  __cil_tmp9 = (void * __restrict  )(& queue);
  pthread_create(__cil_tmp6, __cil_tmp8, & t1, __cil_tmp9);
  __cil_tmp10 = (pthread_t * __restrict  )(& id2);
  __cil_tmp11 = (void *)0;
  __cil_tmp12 = (pthread_attr_t const   * __restrict  )__cil_tmp11;
  __cil_tmp13 = (void * __restrict  )(& queue);
  pthread_create(__cil_tmp10, __cil_tmp12, & t2, __cil_tmp13);
  __cil_tmp14 = & id1;
  __cil_tmp15 = *__cil_tmp14;
  __cil_tmp16 = (void *)0;
  __cil_tmp17 = (void **)__cil_tmp16;
  pthread_join(__cil_tmp15, __cil_tmp17);
  __cil_tmp18 = & id2;
  __cil_tmp19 = *__cil_tmp18;
  __cil_tmp20 = (void *)0;
  __cil_tmp21 = (void **)__cil_tmp20;
  pthread_join(__cil_tmp19, __cil_tmp21);
  }
  return (0);
}
}
