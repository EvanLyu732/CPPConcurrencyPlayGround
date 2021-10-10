#include <thread>
#include <iostream>

void getA();

void getA(int);

void getA()
{
    std::cout << "Let's get A" << std::endl;
    return;
}

void getA(int x)
{
    std::cout << "Let's get A from" << x  << std::endl;
    return;
}

std::thread f()
{
    void getA();
    return std::thread(getA);
}

std::thread g()
{
    void getA(int);
    return std::thread(getA, 3);
}

int main()
{
    std::thread func_thread =f();
    func_thread.join();
    return 0;
}