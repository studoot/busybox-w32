/* vi: set sw=4 ts=4: */
/*
 * Copyright (C) 2001 by Lineo, inc.
 * Written by Erik Andersen <andersen@lineo.com>, <andersee@debian.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 */

#include "libbb.h"

#ifdef L_full_version
	const char *full_version = BB_BANNER " multi-call binary";
#endif
#ifdef L_name_too_long
	const char *name_too_long = "file name too long";
#endif

#ifdef L_omitting_directory
	const char *omitting_directory = "%s: omitting directory";
#endif
#ifdef L_not_a_directory
	const char *not_a_directory = "%s: not a directory";
#endif
#ifdef L_memory_exhausted
	const char *memory_exhausted = "memory exhausted";
#endif
#ifdef L_invalid_date
	const char *invalid_date = "invalid date `%s'";
#endif
#ifdef L_invalid_option
	const char *invalid_option = "invalid option -- %c";
#endif
#ifdef L_io_error
	const char *io_error = "%s: input/output error -- %s";
#endif
#ifdef L_dash_dash_help
	const char *dash_dash_help = "--help";
#endif
#ifdef L_write_error
	const char *write_error = "Write Error";
#endif
#ifdef L_too_few_args
	const char *too_few_args = "too few arguments";
#endif
#ifdef L_name_longer_than_foo
	const char *name_longer_than_foo = "Names longer than %d chars not supported.";
#endif

