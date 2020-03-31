#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "winrt/StaticLibrary1.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::WinrtApp::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();

        myclass = StaticLibrary1::Class();
        
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    StaticLibrary1::Class MainPage::MyClass()
    {
        return myclass;
    }
    void MainPage::MyClass(StaticLibrary1::Class const& value)
    {
        myclass = value;
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));

        //access property
        myclass.MyProperty(2);
        int aa = myclass.MyProperty();
        


        /*StaticLibrary1::Class myclass = StaticLibrary1::Class();
        myclass.MyProperty(14);
        int aa = myclass.MyProperty();
        int a = 0;*/
       
    }
}
