#include <thread>
#include <vector>
#include <iostream>

void do_work(unsigned id);

void do_work(unsigned id)
{
    std::cout << id << std::endl;
}

void f()
{
    std::vector<std::thread> threads;
    for (unsigned int i=0; i < 200; i++) 
    {
        threads.emplace_back(do_work, i);
    }

    for (auto& entry: threads) 
    {
        entry.join();
    }
}

int main()
{
    f();
    return 0;
}