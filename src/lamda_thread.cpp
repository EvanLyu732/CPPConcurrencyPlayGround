#include <iostream>
#include <thread>

int main()
{
    std::thread lambda_thread([]{
        std::cout << "Hello from lambda thread";
    });
    lambda_thread.join();
    return 0;
}