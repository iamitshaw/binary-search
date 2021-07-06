#include <bits/stdc++.h>

/* find index of minimum_element in rotated_array */
int32_t find_min(std::vector<int32_t>& array, int32_t N) {
    int32_t left{0}, right{N-1};
    int32_t  resultIndex{-1};

    while (left <= right) {
        int32_t mid{left + (right - left)/2};

        if (array[mid] > array[N-1]) {
            left = mid + 1;
        } else {
            resultIndex = mid;
            right = mid - 1;
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

        /* get array elements */
        std::vector<int32_t> array(N);
        for (int32_t i{0};i < N;i++) {
            std::cin >> array.at(i);
        }

        /* find index of minimum element in rotated_array */
        int32_t min_index{find_min(array, N)};

        /* print minimum element */
        std::cout << array[min_index] << "\n";
    }
    return 0;
}