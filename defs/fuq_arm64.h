#ifndef FUQ_ARM64_
#define FUQ_ARM64_

#if defined(__GNUC__)

static inline void fuq__fetch_barrier(void) {
  __asm__ __volatile__ ("dmb ishld":::"memory");
}

static inline void fuq__store_barrier(void) {
  __asm__ __volatile__ ("dmb ishst":::"memory");
}

#else
#error "No supported memory barrier options for this build"
#endif

#endif  /* FUQ_ARM64_ */
