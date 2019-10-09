/* enigma2_config.h.  Generated from enigma2_config.h.in by configure.  */
/* enigma2_config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 to enable debugging code */
#define DEBUG 1

/* Dreambox hardware */
/* #undef DREAMBOX */

/* define to fixup the input device identification when the remote control is
   actually an 'advanced' remote (with play/forward/rewind keys) */
/* #undef FORCE_ADVANCED_REMOTE */

/* define when the framebuffer acceleration does not have alphablending
   support, though the autodetection might indicate that it does */
/* #undef FORCE_NO_BLENDING_ACCELERATION */

/* define when the framebuffer acceleration does not have fill support */
/* #undef FORCE_NO_FILL_ACCELERATION */

/* Define when using a 96x64 color display device */
/* #undef HAVE_COLORLCD */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the dvb includes */
#define HAVE_DVB 1

/* Define to the version of the dvb api */
#define HAVE_DVB_API_VERSION 5

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <linux/dvb/version.h> header file. */
#define HAVE_LINUX_DVB_VERSION_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define when using /dev/misc/pvr */
/* #undef HAVE_OLDPVR */

/* Define to 1 if you have the <ost/dmx.h> header file. */
/* #undef HAVE_OST_DMX_H */

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* If available, contains the Python version number currently in use. */
#define HAVE_PYTHON "2.7"

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define when using an ascii based lcd device */
#define HAVE_TEXTLCD 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* define when rc sends a KEY_PLAY event for its KEY_PLAYPAUSE key */
/* #undef KEY_PLAY_ACTUALLY_IS_KEY_PLAYPAUSE */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 to enable memory leak checks */
/* #undef MEMLEAK_CHECK */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "enigma2-devel@lists.elitedvb.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "enigma2"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "enigma2 3.0.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "enigma2"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.0.0"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* workaround for problem with vusolo2/vuduo2 event/rc driver */
/* #undef VUPLUS_RC_WORKAROUND */

/* Define to 1 if you have libxine */
/* #undef WITH_XINE */

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */
