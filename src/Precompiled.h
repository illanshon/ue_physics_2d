#ifndef PRECOMPILED_H
#define PRECOMPILED_H

//If the compiler defines one of these items we can assume that it is windows running
#if defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__)
    //so we will standardize on WIN32 for windows specific code
#ifndef WIN32
#define WIN32
#endif
#endif

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#endif
#undef min
#undef max

#include <cstring> // strlen, memcpy, etc.
#include <cstdlib> // exit
#include <cfloat>  // FLT_MAX
#include <vector>


#include "IEMath.h"
#include "Clock.h"
#include "Render.h"
#include "Body.h"
#include "Shape.h"
#include "Collision.h"
#include "Manifold.h"
#include "Scene.h"

#endif // PRECOMPILED_H