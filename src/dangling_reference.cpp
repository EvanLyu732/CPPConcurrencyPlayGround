#include <iostream>
#include <thread>

//Compile failed
struct func
{
    int& i;
    func(int& i_): i(i_) {}

    void operator()() 
    (
        for (unsigned int j=0; j<10000; j++) 
        {
            std::cout << i << std::endl;
        }
    )
};

void testDetach()
{
    int local_state = 0;
    func func_(10);
    std::thread th(func_);
    th.detach();
}

int main()
{
    testDetach();
    return 0;
}