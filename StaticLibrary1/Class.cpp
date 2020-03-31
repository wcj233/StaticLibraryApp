#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"

namespace winrt::StaticLibrary1::implementation
{
    int32_t Class::MyProperty()
    {
        return myProperty;
    }

    void Class::MyProperty(int32_t value )
    {
        myProperty = value;
    }
}
