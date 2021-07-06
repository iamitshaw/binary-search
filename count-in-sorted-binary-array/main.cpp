#include <bits/stdc++.h>

int32_t count_of_1s(std::vector<int32_t>& array, int32_t N) {
    int32_t left{0}, right{N-1};
    int32_t resultIndex{N};

    while (left <= right) {
        int32_t mid{left + (right-left)/2};

        if (array.at(mid) == 0) {
            /* store index of first 0 */
            resultIndex = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return resultIndex;
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
        /* get array_size */
        int32_t N;std::cin >> N;

        /* get sorted_binary_array_elements */
        std::vector<int32_t> array(N);
        for (int32_t i{0};i < N;i++) {
            std::cin >> array.at(i);
        }

        /* determine count of 1's
         * in sorted_binary_array */
        int32_t total_count{count_of_1s(array, N)};

        /* print total_count_of_1s */
        std::cout << total_count << std::endl;
    }
    return 0;
}