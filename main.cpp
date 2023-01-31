#include <iostream>
#include <optional>

// returns -1 if fail
std::optional<int> mayFail(int n) {

    if (n % 2 == 0) {
        // fail
        return std::nullopt;
    } else {
        // success
        return 42;
    }
}

int main() {

    for (int i = 0; i < 10; i++) {
        auto result = mayFail(i);
        if (!result) {
            // it failed
            std::cout << "fail: " << std::endl;
        } else {
            // cure cancer
            std::cout << "yay! value=" << result.value() << std::endl;
        }
    }

    return 0;
}
