
#ifndef _WIN_IMPORT_MIN_H_
#define _WIN_IMPORT_MIN_H_


#define _close            close
#define _read              read
#define _aligned_free      free
#define _lseeki64         lseek
#define sscanf_s         sscanf
#define strtok_s       strtok_r

#define strcpy_s(x,y,z)            strncpy(x,z,y)

/* gnu libc offers the equivalent 'aligned_alloc' BUT requested 'size'
   has to be a multiple of 'alignment' - in case it isn't, I'll set
   a different size, rounding up the value */
#define _aligned_malloc(s,a) (     \
    (s%a)?                         \
    aligned_alloc(a,(s/a+1)*a)     \
    :                              \
    aligned_alloc(a,s)             \
    )

#endif // _WIN_IMPORT_MIN_H_

