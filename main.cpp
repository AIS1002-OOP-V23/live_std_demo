#include <algorithm>
#include <array>
#include <deque>
#include <iostream>
#include <vector>

//predicate for the count_if algorithm
bool f1(int i) {
    return i > 1;
}

int main() {

    std::array<int, 4> arr{1, 2, 3};// fixed-size
    std::vector<int> v{1, 2, 3};
    std::deque<int> d{1, 2, 3};

    v.emplace_back(1);// vector can be re-sized


    {
        // old school
        int count = 0;
        for (int i: arr) {
            if (i > 1) count++;
        }
    }

    {
        // same as above, but using an std:: algorithm
        int count = std::count_if(d.begin(), d.end(), f1);
    }


    return 0;
}
