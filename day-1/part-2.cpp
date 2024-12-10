#include <iostream>
#include <unordered_map>
#include <vector>

const int N {1000};

int main() {
    std::vector<int> v1(N), v2(N);
    for (int i=0; i<N; ++i)
        std::cin >> v1[i] >> v2[i];
    std::unordered_map<int,int> freq;
    for (const auto& n2: v2)
        ++freq[n2];
    auto result = 0LL;
    for (const auto& n1: v1)
        result += (n1 * freq[n1]);
    std::cout << "Result: " << result << '\n';
}
