#include <thread>
#include <iostream>

class background_task 
{
    public:
        void operator()() const
        {
            std::cout << "Reload operator" << std::endl;
        }
};

int main()
{
    background_task bt;
    std::thread th(bt());
    return 0;
}