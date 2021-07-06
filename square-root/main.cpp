#include <bits/stdc++.h>

/* find square_root of X */
double_t square_root(double_t X) {
    double_t left{0}, right{X}, mid;
    double_t epsilon{0.000001};
    while (right-left > epsilon) {
        mid = {left + (right - left)/2};

        if (mid*mid <= X) {
            left = mid;
        } else {
            right = mid;
        }
    }
    return mid;
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
        double_t N;std::cin >> N;

        /* find square_root */
        double_t sqrt{square_root(N)};

        /* print square_root */
        std::cout << std::fixed << std::setprecision(3);
        std::cout << sqrt << "\n";
    }
    return 0;
}