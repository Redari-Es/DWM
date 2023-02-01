/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;       /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 1;    /* -c option; centers dmenu on screen */
static int min_width = 600; /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char* fonts[] = {
  "Source Code Pro:size=14"
};
static const char* prompt = NULL; /* -p  option; prompt to the left of input field */
static const char* colors[SchemeLast][2] = {
  /*     fg         bg       */
  [SchemeNorm] = { "#465e65", "#465e65" },
  [SchemeSel] = { "#c99e8c", "#465e65" },
  [SchemeOut] = { "#c99e8c", "#465e65" },
  [SchemeCaret] = { "#c99e8c", "#465e65" },
  [SchemeSelHighlight] = { "#c99e8c", "#465e65" },
  [SchemeNormHighlight] = { "#e7cd79", "#465e65" },

};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 6;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 4;
