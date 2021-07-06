#include <bits/stdc++.h>

/* find maximum element of an array whose elements are
 * in increasing order followed by decreasing order */
int32_t find_max(std::vector<int32_t>& array, int32_t N) {
    int32_t left{0}, right{N-1};
    int32_t resultIndex{-1};

    while (left <= right) {
        int32_t mid{left + (right-left)/2};

        if (mid == 0 || array[mid] >= array[mid-1]) {
            resultIndex = mid;
            left = mid + 1;
        } else {
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

        /* find index_of_max element */
        int32_t max_index{find_max(array, N)};

        /* print {index, max_element} */
        std::cout << "{" << max_index << ", ";
        std::cout << array[max_index] << "}\n";
    }
    return 0;
}