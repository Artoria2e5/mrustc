/*
 * MRustC - Mutabah's Rust Compiler
 * - By John Hodge (Mutabah/thePowersGang)
 *
 * parse/eTokenType.enum.h
 * - Multi-include file for defining the eTokenType enum
 */
_(TOK_NULL)
_(TOK_EOF)

_(TOK_NEWLINE)
_(TOK_WHITESPACE)
_(TOK_COMMENT)

_(TOK_INTERPOLATED_IDENT)
_(TOK_INTERPOLATED_PATH)
_(TOK_INTERPOLATED_TYPE)
_(TOK_INTERPOLATED_PATTERN)
_(TOK_INTERPOLATED_EXPR)
_(TOK_INTERPOLATED_STMT)
_(TOK_INTERPOLATED_BLOCK)
_(TOK_INTERPOLATED_META)
_(TOK_INTERPOLATED_ITEM)

// Value tokens
_(TOK_IDENT)
_(TOK_LIFETIME)
_(TOK_INTEGER)
_(TOK_CHAR)
_(TOK_FLOAT)
_(TOK_STRING)
_(TOK_BYTESTRING)

_(TOK_HASH)

_(TOK_UNDERSCORE)

// Symbols
_(TOK_PAREN_OPEN)   _(TOK_PAREN_CLOSE)
_(TOK_BRACE_OPEN)   _(TOK_BRACE_CLOSE)
_(TOK_LT)           _(TOK_GT)
_(TOK_SQUARE_OPEN)  _(TOK_SQUARE_CLOSE)
_(TOK_COMMA)
_(TOK_SEMICOLON)
_(TOK_COLON)
_(TOK_DOUBLE_COLON)
_(TOK_STAR)     _(TOK_AMP)
_(TOK_PIPE)

_(TOK_FATARROW)   // =>
_(TOK_THINARROW)  // ->
_(TOK_THINARROW_LEFT)   // <-

_(TOK_PLUS) _(TOK_DASH)
_(TOK_EXCLAM)
_(TOK_PERCENT)
_(TOK_SLASH)

_(TOK_DOT)
_(TOK_DOUBLE_DOT)
_(TOK_TRIPLE_DOT)

_(TOK_EQUAL)
_(TOK_PLUS_EQUAL)
_(TOK_DASH_EQUAL)
_(TOK_PERCENT_EQUAL)
_(TOK_SLASH_EQUAL)
_(TOK_STAR_EQUAL)
_(TOK_AMP_EQUAL)
_(TOK_PIPE_EQUAL)

_(TOK_DOUBLE_EQUAL)
_(TOK_EXCLAM_EQUAL)
_(TOK_GTE)
_(TOK_LTE)

_(TOK_DOUBLE_AMP)
_(TOK_DOUBLE_PIPE)
_(TOK_DOUBLE_LT)
_(TOK_DOUBLE_GT)
_(TOK_DOUBLE_LT_EQUAL)
_(TOK_DOUBLE_GT_EQUAL)

_(TOK_DOLLAR)

_(TOK_QMARK)
_(TOK_AT)
_(TOK_TILDE)
_(TOK_BACKSLASH)
_(TOK_CARET)
_(TOK_CARET_EQUAL)
_(TOK_BACKTICK)

// Reserved Words
// NOTE: ORDERING MATTERS! _PUB must be the first, and no non-rword tokens should follow
_(TOK_RWORD_PUB)
_(TOK_RWORD_PRIV)
_(TOK_RWORD_MUT)
_(TOK_RWORD_CONST)
_(TOK_RWORD_STATIC)
_(TOK_RWORD_UNSAFE)
_(TOK_RWORD_EXTERN)

_(TOK_RWORD_CRATE)
_(TOK_RWORD_MOD)
_(TOK_RWORD_STRUCT)
_(TOK_RWORD_ENUM)
_(TOK_RWORD_TRAIT)
_(TOK_RWORD_FN)
_(TOK_RWORD_USE)
_(TOK_RWORD_IMPL)
_(TOK_RWORD_TYPE)

_(TOK_RWORD_WHERE)
_(TOK_RWORD_AS)

_(TOK_RWORD_LET)
_(TOK_RWORD_MATCH)
_(TOK_RWORD_IF)
_(TOK_RWORD_ELSE)
_(TOK_RWORD_LOOP)
_(TOK_RWORD_WHILE)
_(TOK_RWORD_FOR)
_(TOK_RWORD_IN)
_(TOK_RWORD_DO)

_(TOK_RWORD_CONTINUE)
_(TOK_RWORD_BREAK)
_(TOK_RWORD_RETURN)
_(TOK_RWORD_YIELD)
_(TOK_RWORD_BOX)
_(TOK_RWORD_REF)

_(TOK_RWORD_FALSE)
_(TOK_RWORD_TRUE)
_(TOK_RWORD_SELF)
_(TOK_RWORD_SUPER)

_(TOK_RWORD_PROC)
_(TOK_RWORD_MOVE)

_(TOK_RWORD_ABSTRACT)
_(TOK_RWORD_FINAL)
_(TOK_RWORD_PURE)
_(TOK_RWORD_OVERRIDE)
_(TOK_RWORD_VIRTUAL)

_(TOK_RWORD_ALIGNOF)
_(TOK_RWORD_OFFSETOF)
_(TOK_RWORD_SIZEOF)
_(TOK_RWORD_TYPEOF)

_(TOK_RWORD_BE)
_(TOK_RWORD_UNSIZED)
