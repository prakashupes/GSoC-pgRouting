/*PGR-GNU*****************************************************************
File: point_on_edge_t.h

Copyright (c) 2017 Celia Virginia Vergara Castillo
Mail: vicky_vergara@hotmail.com

------

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

********************************************************************PGR-GNU*/
/*! @file */

#ifndef INCLUDE_C_TYPES_POINT_ON_EDGE_T_H_
#define INCLUDE_C_TYPES_POINT_ON_EDGE_T_H_
#pragma once

#ifdef __cplusplus

#include <cstddef>

#else  // __cplusplus

// for bool
#ifdef __GNUC__
#if __GNUC__ > 5
#pragma GCC diagnostic ignored "-Wpedantic"
#else
#pragma GCC diagnostic ignored "-pedantic"
#endif
#endif

#include <postgres.h>

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

// For NULL & size_t
#include <stdlib.h>


#endif  // __cplusplus

// For int64_t etc
#include <stdint.h>

typedef struct {
    int64_t pid;
    int64_t edge_id;
    char side;  // 'r', 'l', 'b' (default is both)
    double fraction;
    int64_t vertex_id;  // number is negative and is used for processing
} Point_on_edge_t;

#endif  // INCLUDE_C_TYPES_POINT_ON_EDGE_T_H_
