#if defined(_WIN32)

#  if (defined(_USRDLL) || defined(_WINDLL) || defined(BUILD_SHARED_LIB)) && !defined(CPPSQLITELIB_EXPORT) && !defined(CPPSQLITELIB_STATIC)
#    ifdef CPPSQLITELIB_EXPORTS
#      define CPPSQLITELIB_EXPORT __declspec( dllexport )
#    else
#      define CPPSQLITELIB_EXPORT __declspec( dllimport )
#    endif
#  else
#    define CPPSQLITELIB_EXPORT extern
#  endif

#  ifndef SQLITE3_CALL
#    ifdef _WIN64
#      define SQLITE3_CALL __fastcall
#    else
#      define SQLITE3_CALL __stdcall
#    endif
#  endif

#endif /* _WIN32 */