#include <thread>
#include <cassert>

int main()
{
    std::thread th([]{
        int i = 0;
        while(1) {
            i++;
            if (i == 1000)
                break;
        }
    });
    th.detach();
    assert(th.joinable());
    return 0;
}