#include <thread>
#include <iostream>


void testFunc()
{
    std::cout << "Hello from testFunc";
}


int main()
{
    try{
        std::thread th(testFunc);
        th.join();
    }
    catch (std::exception& e) {
        // th.join();
    }
    return 0;
}
