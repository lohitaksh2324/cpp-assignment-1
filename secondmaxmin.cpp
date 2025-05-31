#include <iostream>

int main() {
    int arr[5] = {5, 3, 9, 10, 4};
    int temp;
    int max = 5;

    
    for (int i = 0; i < max - 1; i++) {
        for (int j = 0; j < max - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[ j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    
    
    std::cout << "the second max element is: " << arr[max - 2] << std::endl << "the second min element is: " << arr[1];
    
}