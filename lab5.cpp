#include <iostream>
#include <vector>

int main()
{
    std::vector< int > vs;
    for (int i = 0; i < 100; i++)

    {
        vs.emplace_back(i);
        std::cout << vs.size() << " " << &vs[0] <<std::endl;
    }
}