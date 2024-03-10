#include <iostream>

int main() {
    long t;
    std::cin >> t;

    while (t--) {
        long n;
        std::cin >> n;

        long res = 0;
        for (long p = 1; p <= n; p++) {
            long x;
            std::cin >> x;
            long diff = x - p;
            res = (res > diff) ? res : diff;
        }

        std::cout << res << std::endl;
    }

    return 0;
}
