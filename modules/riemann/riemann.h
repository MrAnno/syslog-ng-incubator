/*
 * Copyright (c) 2013 BalaBit IT Ltd, Budapest, Hungary
 * Copyright (c) 2013 Gergely Nagy <algernon@balabit.hu>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */

#ifndef SNG_RIEMANN_H_INCLUDED
#define SNG_RIEMANN_H_INCLUDED

#include "driver.h"

LogDriver *riemann_dd_new(void);

void riemann_dd_set_server(LogDriver *d, const gchar *host);
void riemann_dd_set_port(LogDriver *d, gint port);
void riemann_dd_set_on_error(LogDriver *d, gint on_error);

void riemann_dd_set_field_host(LogDriver *d, LogTemplate *value);
void riemann_dd_set_field_service(LogDriver *d, LogTemplate *value);
void riemann_dd_set_field_state(LogDriver *d, LogTemplate *value);
void riemann_dd_set_field_description(LogDriver *d, LogTemplate *value);
void riemann_dd_set_field_metric(LogDriver *d, LogTemplate *value);
void riemann_dd_set_field_ttl(LogDriver *d, LogTemplate *value);
void riemann_dd_set_field_tags(LogDriver *d, GList *taglist);

#endif
