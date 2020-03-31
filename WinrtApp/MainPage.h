#pragma once

#include "MainPage.g.h"

namespace winrt::WinrtApp::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        StaticLibrary1::Class MyClass();
        void MyClass(StaticLibrary1::Class const& value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    
    private:
        StaticLibrary1::Class myclass{nullptr};
    
    };
}

namespace winrt::WinrtApp::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
