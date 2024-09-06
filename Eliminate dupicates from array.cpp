#include <iostream>

void eliminate_duplicates(int arr[], int& size) {
    int writeIndex = 0;

    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < writeIndex; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            arr[writeIndex++] = arr[i];
        }
    }

    size = writeIndex;
}

int main() {
    int arr[] = {58, 26, 91, 26, 70, 70, 91, 58, 58, 58, 66};
    int size = 11;

    std::cout << "Before elimination: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    eliminate_duplicates(arr, size);

    std::cout << "After elimination: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "New size: " << size << std::endl;

    return 0;
}
