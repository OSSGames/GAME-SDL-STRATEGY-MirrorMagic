// ============================================================================
// Artsoft Retro-Game Library
// ----------------------------------------------------------------------------
// (c) 1995-2014 by Artsoft Entertainment
//     		    Holger Schemel
//		    info@artsoft.org
//		    https://www.artsoft.org/
// ----------------------------------------------------------------------------
// platform.h
// ============================================================================

#ifndef PLATFORM_H
#define PLATFORM_H

// ============================================================================
// define main platform keywords
// ============================================================================

#if defined(WIN32) || defined(_WIN32) || defined(_WIN64)
#define PLATFORM_WINDOWS
#define PLATFORM_STRING "Windows"
#else
#define PLATFORM_UNIX
#define PLATFORM_STRING "Unix"
#endif


// ============================================================================
// define additional platform keywords
// ============================================================================

#if defined(_AIX)
#define PLATFORM_AIX
#undef  PLATFORM_STRING
#define PLATFORM_STRING "AIX"
#endif

#if defined(AMIGA) || defined(__AMIGA) || defined(__amigados__)
#define PLATFORM_AMIGA
#undef  PLATFORM_STRING
#define PLATFORM_STRING "Amiga"
#endif

#if defined(__BEOS__)
#define PLATFORM_BEOS
#undef  PLATFORM_STRING
#define PLATFORM_STRING "BeOS"
#endif

#if defined(bsdi) || defined(__bsdi) || defined(__bsdi__)
#define PLATFORM_BSDI
#define PLATFORM_BSD
#undef  PLATFORM_STRING
#define PLATFORM_STRING "BSDI"
#endif

#if defined(_arch_dreamcast)
#define PLATFORM_DREAMCAST
#undef  PLATFORM_STRING
#define PLATFORM_STRING "Dreamcast"
#endif

#if defined(__FreeBSD__) || defined(__DragonFly__)
#define PLATFORM_FREEBSD
#define PLATFORM_BSD
#undef  PLATFORM_STRING
#define PLATFORM_STRING "FreeBSD"
#endif

#if defined(hpux) || defined(__hpux) || defined(__hpux__)
#define PLATFORM_HPUX
#undef  PLATFORM_STRING
#define PLATFORM_STRING "HP-UX"
#endif

#if defined(sgi) || defined(__sgi) || defined(__sgi__) || defined(_SGI_SOURCE)
#define PLATFORM_IRIX
#undef  PLATFORM_STRING
#define PLATFORM_STRING "IRIX"
#endif

#if defined(linux) || defined(__linux) || defined(__linux__)
#define PLATFORM_LINUX
#undef  PLATFORM_STRING
#define PLATFORM_STRING "Linux"
#endif

#if defined(__APPLE__) && defined(__MACH__)
#define PLATFORM_MAC
#undef  PLATFORM_STRING
#define PLATFORM_STRING "Mac"
#endif

#if defined(__NetBSD__)
#define PLATFORM_NETBSD
#define PLATFORM_BSD
#undef  PLATFORM_STRING
#define PLATFORM_STRING "NetBSD"
#endif

#if defined(NeXT)
#define PLATFORM_NEXT
#undef  PLATFORM_STRING
#define PLATFORM_STRING "NeXT"
#endif

#if defined(__OpenBSD__)
#define PLATFORM_OPENBSD
#define PLATFORM_BSD
#undef  PLATFORM_STRING
#define PLATFORM_STRING "OpenBSD"
#endif

#if defined(__OS2__)
#define PLATFORM_OS2
#undef  PLATFORM_STRING
#define PLATFORM_STRING "OS/2"
#endif

#if defined(osf) || defined(__osf) || defined(__osf__) || defined(_OSF_SOURCE)
#define PLATFORM_OSF
#undef  PLATFORM_STRING
#define PLATFORM_STRING "OSF/1"
#endif

#if defined(__QNXNTO__)
#define PLATFORM_QNX
#undef  PLATFORM_STRING
#define PLATFORM_STRING "QNX"
#endif

#if defined(riscos) || defined(__riscos) || defined(__riscos__)
#define PLATFORM_RISCOS
#undef  PLATFORM_STRING
#define PLATFORM_STRING "RISC OS"
#endif

#if defined(sparc) || defined(sun) || defined(__SVR4)
#define PLATFORM_SOLARIS
#undef  PLATFORM_STRING
#define PLATFORM_STRING "Solaris"
#endif

#if defined(_WIN32_WCE)
#define PLATFORM_WINDOWS_CE
#undef  PLATFORM_STRING
#define PLATFORM_STRING "Windows CE"
#endif

#if defined(__ANDROID__)
#define PLATFORM_ANDROID
#undef  PLATFORM_STRING
#define PLATFORM_STRING "Android"
#endif

#if defined(__EMSCRIPTEN__)
#define PLATFORM_EMSCRIPTEN
#undef  PLATFORM_STRING
#define PLATFORM_STRING "Emscripten"
#endif


// ============================================================================
// define additional platform keywords for CPU architecture
// ============================================================================

#if defined(__x86_64__) || defined(__LP64__) || defined(_LP64)
#define PLATFORM_64_BIT
#define PLATFORM_XX_BIT_STRING "64-bit"
#else
#define PLATFORM_32_BIT
#define PLATFORM_XX_BIT_STRING "32-bit"
#endif


// ============================================================================
// define additional target keywords
// ============================================================================

#if defined(TARGET_SDL2)
#ifndef TARGET_SDL
#define TARGET_SDL
#endif
#endif


#endif // PLATFORM_H
