/*
 * libhfs - library for reading and writing Macintosh HFS volumes
 * Copyright (C) 1996-1998 Robert Leslie
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * $Id: os.h,v 1.1 2004/05/05 22:44:53 seppel Exp $
 */

int hfs_os_open(void **, const void *, int);
int hfs_os_close(void **);

int hfs_os_same(void **, const void *);

unsigned long hfs_os_seek(void **, unsigned long);
unsigned long hfs_os_read(void **, void *, unsigned long);
unsigned long hfs_os_write(void **, const void *, unsigned long);