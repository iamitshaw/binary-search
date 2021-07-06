#include <bits/stdc++.h>

/* find cube_root of X */
double_t find_cube_root(double_t X) {
    double_t left{0}, right{X}, mid;
    double_t epsilon{0.000001};

    while (right-left > epsilon) {
        mid = {left + (right - left)/2};

        if (mid*mid*mid <= X) {
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

        /* find cube_root */
        double_t cube_root{find_cube_root(N)};

        /* print cube_root */
        std::cout << std::fixed << std::setprecision(3);
        std::cout << cube_root << "\n";
    }
    return 0;
}