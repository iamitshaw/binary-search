#include <bits/stdc++.h>

/* find out index of first_value >= X */
int32_t lowerBound(std::vector<int32_t>& array, int32_t N, int32_t X) {
    int32_t left{0}, right{N-1};
    int32_t resultIndex{N};

    while (left <= right) {
        int32_t mid{left + (right - left)/2};

        if (array[mid] >= X) {
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

        /* get array elements */
        std::vector<int32_t> array(N);
        for (int32_t i{0};i < N;i++) {
            std::cin >> array.at(i);
        }

        /* sort array elements */
        std::sort(array.begin(), array.end());

        /* get value_of_X */
        int32_t X;std::cin >> X;

        /* find out index of first_value >= X */
        int32_t index{lowerBound(array, N, X)};

        /* print {position, element} */
        if (index != N) {
            std::cout << "{" << index << ", ";
            std::cout << array[index] << "}\n";
        } else {
            std::cout << "each & every element in array";
            std::cout << " is smaller than " << X << "\n";
        }
    }
    return 0;
}