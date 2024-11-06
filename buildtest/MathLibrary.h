// MathLibrary.h - Contains declarations of math functions
#pragma once
 

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif


extern "C" 
{
	MATHLIBRARY_API int getmyval();
}
/*   #ifdef EXPORTING_DLL
      extern __declspec(dllexport) void HelloWorld() ;
   #else
      extern __declspec(dllimport) void HelloWorld() ;
   #endif
#ifndef _DLL_TUTORIAL_H_
#define _DLL_TUTORIAL_H_
#include <iostream>
 
#if defined DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif
 
extern "C"
{
   DECLDIR int Add( int a, int b );
   DECLDIR void Function( void );
}
 
#endif
*/