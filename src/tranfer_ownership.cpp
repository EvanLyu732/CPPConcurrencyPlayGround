#include <thread>
#include <iostream>

void func1()
{
    std::cout << "This is from func1";
}

void func2()
{
    std::cout << "This is from func2";
}

int main()
{
    std::thread th1(func1);
    std::thread th2=std::move(th1);
    return 0;
}