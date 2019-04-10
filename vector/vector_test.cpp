#include <iostream>
#include <vector>
#include <array>

int main(int argc, char const *argv[])
{
    std::vector<int> vval(10);
    std::array<double, 10> aval;
    std::vector<std::string> message(10);

    // message = {"Hello, World", "Nihao", "Chao"};
    message[3] = "asdf";

    std::cout << message.at(5) << std::endl;

    vval[2] = 10;
    aval[2] = 100.0;

    std::cout << vval.at(2) << std::endl;
    std::cout << aval.at(2) << std::endl;

    try
    {
        std::cout << aval.at(11) << std::endl;  
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
  // at()有边界检查功能

    return 0;
}

// TODO sdg
