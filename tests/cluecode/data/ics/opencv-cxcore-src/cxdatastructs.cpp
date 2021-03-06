//                        Intel License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2000, Intel Corporation, all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//   * The name of Intel Corporation may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// Sort the sequence using user-specified comparison function.
// The semantics is similar to qsort() function.
// The code is based on BSD system qsort():
//    * Copyright (c) 1992, 1993
//    *  The Regents of the University of California.  All rights reserved.
//    *
//    * Redistribution and use in source and binary forms, with or without
//    * modification, are permitted provided that the following conditions
//    * are met:
//    * 1. Redistributions of source code must retain the above copyright
//    *    notice, this list of conditions and the following disclaimer.
//    * 2. Redistributions in binary form must reproduce the above copyright
//    *    notice, this list of conditions and the following disclaimer in the
//    *    documentation and/or other materials provided with the distribution.