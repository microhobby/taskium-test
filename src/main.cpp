#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::cout << "Wait ..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(60000));
    std::cout << "Hello Torizon!" << std::endl;

    return 0;
}
