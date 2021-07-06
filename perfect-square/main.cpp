#include <bits/stdc++.h>

/* check whether X is a perfect square or not */
bool is_perfect_square(int32_t X) {
    int32_t left{0}, right{X};
    while (left <= right) {
        int32_t mid{left + (right - left)/2};

        /* precompute square_of_mid */
        int32_t square_of_mid{mid*mid};

        if (square_of_mid == X) {
            /* if X is a perfect square */
            return true;
        } else if (square_of_mid > X) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    /* if X isn't a perfect square */
    return false;
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get number */
        int32_t number;
        std::cin >> number;

        if (is_perfect_square(number)) {
            std::cout << number << " is a perfect square!\n";
        } else {
            std::cout << number << " isn't a perfect square!\n";
        }
    }
    return 0;
}