#ifndef _LOCALCHARSET_H
#define _LOCALCHARSET_H
#ifdef __cplusplus
extern "C" {
#endif

    /**
    @brief Determine the current locale's character encoding, and canonicalize it
    */
    const char* locale_charset();

#ifdef __cplusplus
}
#endif
#endif /* _LOCALCHARSET_H */
