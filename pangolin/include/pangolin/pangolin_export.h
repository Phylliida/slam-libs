
#ifndef PANGOLIN_EXPORT_H
#define PANGOLIN_EXPORT_H

#ifdef PANGOLIN_BUILT_AS_STATIC
#  define PANGOLIN_EXPORT
#  define PANGOLIN_NO_EXPORT
#else
#  ifndef PANGOLIN_EXPORT
#    ifdef pangolin_EXPORTS
        /* We are building this library */
#      define PANGOLIN_EXPORT 
#    else
        /* We are using this library */
#      define PANGOLIN_EXPORT 
#    endif
#  endif

#  ifndef PANGOLIN_NO_EXPORT
#    define PANGOLIN_NO_EXPORT 
#  endif
#endif

#ifndef PANGOLIN_DEPRECATED
#  define PANGOLIN_DEPRECATED __declspec(deprecated)
#endif

#ifndef PANGOLIN_DEPRECATED_EXPORT
#  define PANGOLIN_DEPRECATED_EXPORT PANGOLIN_EXPORT PANGOLIN_DEPRECATED
#endif

#ifndef PANGOLIN_DEPRECATED_NO_EXPORT
#  define PANGOLIN_DEPRECATED_NO_EXPORT PANGOLIN_NO_EXPORT PANGOLIN_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define PANGOLIN_NO_DEPRECATED
#endif

#endif
