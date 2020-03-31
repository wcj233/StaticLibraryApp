﻿#pragma once

#include "Class.g.h"

namespace winrt::StaticLibrary1::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);

    private:
        int32_t myProperty;
    };
}

namespace winrt::StaticLibrary1::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
