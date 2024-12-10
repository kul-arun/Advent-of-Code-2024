#include <algorithm>
#include <iostream>
#include <vector>

const int N {1000};

int main() {
    std::vector<int> v1(N), v2(N);
    for (int i=0; i<N; ++i)
        std::cin >> v1[i] >> v2[i];
    std::ranges::sort(v1);
    std::ranges::sort(v2);
    auto result = 0LL;
    for (int i=0; i<N; ++i)
        result += std::abs(v1[i] - v2[i]);
    std::cout << "Result: " << result << '\n';
}
