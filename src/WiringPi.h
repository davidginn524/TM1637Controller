// 
// Copyright (c) 2019 smdn (https://smdn.jp/)
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef WiringPi_h
#define WiringPi_h

#ifdef PLATFORM_RASPBERRY_PI
#include <stddef.h>
#include <stdint.h>
#include <algorithm>
#include <wiringPi.h>
#define LSBFIRST 0
#define MSBFIRST 1
#endif

#if (SWIG || PLATFORM_RASPBERRY_PI)
extern int wiringPiSetup();
extern int wiringPiSetupSys();
extern int wiringPiSetupGpio();
extern int wiringPiSetupPhys();
extern int wpiPinToGpio(int wpiPin);
extern int physPinToGpio(int physPin);
#endif

#endif // WiringPi_h