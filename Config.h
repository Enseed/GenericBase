/*******************************************************************************
 Copyright 2008 Enseed inc.

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.

 Author: Gaspard Petit
*******************************************************************************/
#ifndef __GENERIC_BASE_CONFIG__
#define __GENERIC_BASE_CONFIG__

#include "Compiler.h"

#include <stddef.h>

#ifdef WIN32
//#include "win/stdint.h"
#include <stdint.h>
#else
#include <stdint.h>
#endif

//! Defined for big-endian architecture
#if defined(__ppc__) || defined(__ppc64__)
#define TARGET_BIG_ENDIAN
#endif

//! Define to enable debug information
#ifndef NDEBUG
#define TARGET_DEBUG
#endif // NDEBUG

// #ifndef GENERIC_NAMESPACE
// #define GENERIC_NAMESPACE seed
// #endif // GENERIC_NAMESPACE


#endif // __GENERIC_BASE_CONFIG__
