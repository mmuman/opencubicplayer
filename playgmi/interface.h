/* interface.h.  Generated from interface.h.in by configure.  */
/* Define if you have EMACS interface. */
/* #undef IA_EMACS */

/* Define if you have GTK interface. */
/* #undef IA_GTK */

/* Define if you have KMIDI interface. */
/* #undef IA_KMIDI */

/* Define if you have MOTIF interface. */
/* #undef IA_MOTIF */

/* Define if you have NCURSES interface. */
/* #undef IA_NCURSES */

/* Define if you have PLUGIN interface. */
/* #undef IA_PLUGIN */

/* Define if you have SLANG interface. */
/* #undef IA_SLANG */

/* Define if you have TCLTK interface. */
/* #undef IA_TCLTK */

/* Define if you have VT100 interface. */
/* #undef IA_VT100 */

/* Define if you have XAW interface. */
/* #undef IA_XAW */

/* Define if you have XSKIN interface. */
/* #undef IA_XSKIN */

/* Define if you have DYNAMIC interface. */
/* #undef IA_DYNAMIC */

/* Define if you have Windows32 GUI interface. */
/* #undef IA_W32GUI */

/* Define if you have Windows GUI synthesizer mode interface. */
/* #undef IA_W32G_SYN */

/* Define if you have Remote MIDI interface. */
/* #undef IA_SERVER */

/* Define if you have Remote MIDI interface. */
/* #undef IA_ALSASEQ */

/* Define if you have Windows synthesizer mode interface. */
/* #undef IA_WINSYN */

/* Define if you have PortMIDI synthesizer mode interface. */
/* #undef IA_PORTMIDISYN */

/* Define if you have Windows named pipe synthesizer mode interface. */
/* #undef IA_NPSYN */

#if defined(IA_W32GUI) || defined(IA_W32G_SYN)
#ifndef __W32READDIR__
#define __W32READDIR__
#endif
#define URL_DIR_CACHE_ENABLE
#define __W32G__        /* for Win32 GUI */
#endif
