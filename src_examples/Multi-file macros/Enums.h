#ifndef ENUMS_H_INCLUDED
#define ENUMS_H_INCLUDED

enum LangKeyword
{
    #define LANG_KEYWORDS

    #define LANG_KEYWORD(keywd, type) LANGKWD_##keywd,
    #include "Keywords.h"
    #undef LANG_KEYWORD

    #undef LANG_KEYWORDS
    LANGKWD_KWDQT,
};

enum LangKeywordType
{
    #define LANG_TYPES

    #define LANG_TYPE(type) LANGKWT_##type,
    #include "Keywords.h"
    #undef LANG_TYPE

    #undef LANG_TYPES
};

#endif
