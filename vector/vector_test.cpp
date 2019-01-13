#include <iostream>
#include <vector>
#include <array>

int main(int argc, char const *argv[])
{
    std::vector<int> vval(10);
    std::array<double, 10> aval;

    vval[2] = 10;
    aval[2] = 100.0;

    std::cout << vval.at(2) << std::endl;
    std::cout << aval.at(2) << std::endl;

    //std::cout << aval.at(11) << std::endl;   at()有边界检查功能

    return 0;
}
