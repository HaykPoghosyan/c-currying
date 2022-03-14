
#include <iostream>
#include <functional>


int main()
{
    std::function<std::function<int(int)>(int)> f = [](int a) {
        std::function<int(int)> g= [&a](int b) {
             return a*b;
        };
        return g;
    };

    std::cout << f(11)(11) << std::endl;
}

