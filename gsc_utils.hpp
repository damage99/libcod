#ifndef _GSC_UTILS_HPP_
#define _GSC_UTILS_HPP_

/* gsc functions */
#include "gsc.hpp"

void gsc_utils_out_printf();
void gsc_utils_geprintf();
void Sys_AnsiColorPrint( const char *msg );
void gsc_utils_printf();
void gsc_utils_getarraykeys();
void gsc_utils_getAscii();
void gsc_utils_toupper();
void gsc_utils_dorconcmd();
void gsc_utils_system();
void gsc_utils_exponent();
void gsc_utils_round();
void gsc_utils_file_link();
void gsc_utils_file_unlink();
void gsc_utils_file_exists();
void gsc_utils_FS_LoadDir();
void gsc_utils_getType();
void gsc_utils_float();
void gsc_utils_ExecuteString();
void gsc_utils_sendgameservercommand();
void gsc_utils_scandir();
void gsc_G_FindConfigstringIndex();
void gsc_G_FindConfigstringIndexOriginal();
void gsc_get_configstring();
void gsc_set_configstring();
void gsc_make_localized_string();
void gsc_utils_getlasttestclientnumber();
void gsc_utils_bullethiteffect();

void gsc_utils_fopen();
void gsc_utils_fread();
void gsc_utils_fwrite();
void gsc_utils_fclose();
void gsc_utils_fsize();
void gsc_utils_fremove();
void gsc_utils_sprintf();
void gsc_utils_gettimes();

void gsc_utils_sqrt();
void gsc_utils_sqrtInv();
void gsc_utils_vectorscale();

#endif
