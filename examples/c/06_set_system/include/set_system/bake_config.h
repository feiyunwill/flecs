/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef SET_SYSTEM_BAKE_CONFIG_H
#define SET_SYSTEM_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>

/* Headers of private dependencies */
#ifdef SET_SYSTEM_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef SET_SYSTEM_STATIC
  #if SET_SYSTEM_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define SET_SYSTEM_EXPORT __declspec(dllexport)
  #elif SET_SYSTEM_IMPL
    #define SET_SYSTEM_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define SET_SYSTEM_EXPORT __declspec(dllimport)
  #else
    #define SET_SYSTEM_EXPORT
  #endif
#else
  #define SET_SYSTEM_EXPORT
#endif

#endif

