/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/sys/cdefs.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( FREEBSD_GCC3_BREAKAGE_CHECK )
#if __GNUC__ == 2 && __GNUC_MINOR__ >= 7 || __GNUC__ >= 3
#endif  /* FREEBSD_GCC3_BREAKAGE_CHECK */


#if defined( NETBSD_EXTRA_SEMICOLON_CHECK )
#define __END_DECLS }
#endif  /* NETBSD_EXTRA_SEMICOLON_CHECK */
