#include <iostream>
#include <utility>

struct MyData {
    std::string first;
    int second;
};

MyData createData2() {
    return MyData{"Per", 42};
}

std::pair<std::string, int> createData() {
    return std::make_pair<std::string, int>("Per", 42);
}

int main() {
    
    auto data = createData(); // or createData2()
    std::string str = data.first;
    int i = data.second;
    
}
