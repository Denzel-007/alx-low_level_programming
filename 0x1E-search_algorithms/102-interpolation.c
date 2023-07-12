#include <stdio.h>

int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }
    
    int low = 0;
    int high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        int comparison_value = array[pos];

        printf("Comparing with value: %d\n", comparison_value);

        if (comparison_value == value) {
            return pos;
        }

        if (comparison_value < value) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 12;

    int result = interpolation_search(array, size, value);

    if (result == -1) {
        printf("Value %d not found in the array.\n", value);
    } else {
        printf("Found %d at index: %d\n", value, result);
    }

    return 0;
}

