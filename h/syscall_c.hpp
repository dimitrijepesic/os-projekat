#pragma once
#include "../lib/hw.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _thread* thread_t;

// kreira nit
int  thread_create(thread_t* handle, void (*start_routine)(void*), void* arg);

// zavrsava tekucu nit
int  thread_exit();

// rucno prebacivanje konteksta
void thread_dispatch();

#ifdef __cplusplus
}
#endif
