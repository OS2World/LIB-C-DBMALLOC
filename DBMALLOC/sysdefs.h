/*
 * This file is mechanically generated by the Configure script.
 * If there is something wrong here, modify the configure script
 * so that it is no longer generated wrong and please send email
 * to the author so that the fix is included with the next patch
 * release.
 */

#ifndef _SYSDEF_H     /* double inclusion guard */
#define _SYSDEF_H 1


#if       __GNUC__ && __STDC__

/*
 * Signal to use to abort program 
 */
#define ABORT_SIGNAL SIGABRT

/*
 * Use setenv() for env mods
 */
#define USE_SETENV 1

/*
 * POSIX header files are available
 */
/* #define POSIX_HEADERS 1 */

/*
 * ANSI header files are available
 */
#define ANSI_HEADERS 1

/*
 * ASM settings that only apply to 80x86 systems 
 */

/*
 * Use Underscores for ASM global symbols
 */
#define USE_UNDERSCORE 1

/*
 * Use REPE instruction for ASM repeat op
 */
#define USE_REPE 1

#define WRTSIZE size_t

#else  /* __GNUC__ && __STDC__ */


#if       __GNUC__

/*
 * Signal to use to abort program 
 */
#define ABORT_SIGNAL 6

/*
 * Use setenv() for env mods
 */
#define USE_SETENV 1

/*
 * POSIX header files are available
 */
/* #define POSIX_HEADERS 1 */

/*
 * ANSI header files are available
 */
#define ANSI_HEADERS 1

/*
 * ASM settings that only apply to 80x86 systems 
 */

/*
 * Use Underscores for ASM global symbols
 */
/* #define USE_UNDERSCORE 1 */

/*
 * Use REPE instruction for ASM repeat op
 */
/*#define USE_REPE 1*/

#define WRTSIZE size_t

#else  /* __GNUC__ */

/*
 * Signal to use to abort program 
 */
#define ABORT_SIGNAL SIGABRT

/*
 * Use setenv() for env mods
 */
#define USE_SETENV 1

/*
 * POSIX header files are available
 */
#define POSIX_HEADERS 1

/*
 * ANSI header files are available
 */
#define ANSI_HEADERS 1

/*
 * ASM settings that only apply to 80x86 systems 
 */

/*
 * Use Underscores for ASM global symbols
 */
/* #define USE_UNDERSCORE 1 */

/*
 * Use REPE instruction for ASM repeat op
 */
/*#define USE_REPE 1*/

#define WRTSIZE size_t

#endif /* __GNUC__ */


#endif /* __GNUC__ && __STDC__ */

/*
 * Found X intrinsic file in /usr/include/X11
 */
/* #define FOUND_X_INTRINSIC 1 */

/*
 * Found wait.h in /usr/include/sys
 */
/* #define NEED_WAIT 1 */

/*
 * don't force inclusion of XtHeap
 */
#define DONT_FORCE_HEAPSTUFF 1


#endif  /* _SYSDEF_H */

