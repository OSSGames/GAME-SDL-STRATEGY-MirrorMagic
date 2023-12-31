// ============================================================================
// Artsoft Retro-Game Library
// ----------------------------------------------------------------------------
// (c) 1995-2014 by Artsoft Entertainment
//     		    Holger Schemel
//		    info@artsoft.org
//		    https://www.artsoft.org/
// ----------------------------------------------------------------------------
// types.h
// ============================================================================

#ifndef TYPES_H
#define TYPES_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>


#if !defined(PLATFORM_WINDOWS)
typedef int boolean;
typedef unsigned char byte;
#endif

#ifdef TRUE
#undef TRUE
#endif

#ifdef FALSE
#undef FALSE
#endif

#ifdef AUTO
#undef AUTO
#endif

#define TRUE		1
#define FALSE		0
#define AUTO		-1

#ifndef MIN
#define MIN(a, b) 	((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a, b) 	((a) > (b) ? (a) : (b))
#endif

#ifndef ABS
#define ABS(a)		((a) < 0 ? -(a) : (a))
#endif

#ifndef SIGN
#define SIGN(a)		((a) < 0 ? -1 : ((a) > 0 ? 1 : 0))
#endif

#ifndef ODD
#define ODD(a)		(((a) & 1) == 1)
#endif

#ifndef EVEN
#define EVEN(a)		(((a) & 1) == 0)
#endif

#define ARRAY_SIZE(array)		(sizeof(array) / sizeof(array[0]))


struct ListNode
{
  char *key;
  void *content;
  struct ListNode *prev;
  struct ListNode *next;
};
typedef struct ListNode ListNode;

struct DelayCounter
{
  unsigned int value;
  unsigned int count;
};
typedef struct DelayCounter DelayCounter;

#endif // TYPES_H
