/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:size=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

#include "../.cache/wal/colors-wal-dmenu.h"

// for alpha patch

//static const unsigned int alpha = 200;

//static const unsigned int alphas[SchemeLast][2] = {
//	[SchemeNorm] = { OPAQUE, alpha },
//        [SchemeSel] = { OPAQUE, alpha },
//        [SchemeOut] = { OPAQUE, alpha },


//};

// end alpha patch

static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
