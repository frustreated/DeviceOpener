#pragma once
#include "targetver.h"


// C/C++ standard headers
#include <cstdint>
#include <string>
#include <vector>
#include <iostream>
#include <memory>

// Other external headers
// Windows headers
#include <tchar.h>
#include <Windows.h>


// Original headers


////////////////////////////////////////////////////////////////////////////////
//
// macro utilities
//


////////////////////////////////////////////////////////////////////////////////
//
// constants and macros
//


////////////////////////////////////////////////////////////////////////////////
//
// types
//


////////////////////////////////////////////////////////////////////////////////
//
// prototypes
//


////////////////////////////////////////////////////////////////////////////////
//
// variables
//


////////////////////////////////////////////////////////////////////////////////
//
// implementations
//


template<class T, class D> inline
std::unique_ptr<T, D> make_unique_ex(
    __in T* p,
    __in D d = D())
{
    return std::unique_ptr<T, D>(p, std::forward<D>(d));
}

