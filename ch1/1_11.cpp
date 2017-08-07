#include <iostream>
/* Exercise 1.1 */
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    if (v1 > v2) 
    {
        int t = v1;
        v1 = v2;
        v2 = t;
    }
    while (v1 <= v2) {
        std::cout << v1++;
    }
    return 0;
}
