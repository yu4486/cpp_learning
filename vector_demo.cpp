
#include <iostream>
#include <vector>

int main()
{
    std::vector<double> speeds;

    speeds.push_back(10.0);
    speeds.push_back(12.5);
    speeds.push_back(15.0);

    std::cout << "元素数量：" << speeds.size() << std::endl;

    for (double speed : speeds)
    {
        std::cout << speed << std::endl;
    }

    return 0;
}
