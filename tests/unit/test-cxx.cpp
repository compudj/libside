// SPDX-FileCopyrightText: 2024 Olivier Dion <odion@efficios.com>
//
// SPDX-License-Identifier: MIT

/*
 * Tests from C ought to work in C++.  The pragmas are for ignoring the
 * narrowing of `double' literal values to `FloatN' in the tests, which emitted
 * warnings.
 */
#if defined(__GNUC__)
#pragma GCC diagnostic ignored "-Wnarrowing"
#endif
#include "test.c"
