#ifndef MYLIB_H
#define MYLIB_H

#ifdef _WIN32
  #ifdef BUILDING_MYLIB
    #define MYLIB_API __declspec(dllexport)
  #else
    #define MYLIB_API __declspec(dllimport)
  #endif
#else
  #define MYLIB_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

MYLIB_API void print_message();

#ifdef __cplusplus
}
#endif

#endif // MYLIB_H