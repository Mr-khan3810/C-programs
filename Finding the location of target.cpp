#include <iostream>

int location_of_target(int arr[], int size, int target) {
    int location = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            location = i;
        }
    }

    return location;
}

int main() {
    int arr[7] ;
    int size = 7; // manually specify the size of the array
    int target;
	for(int i=0;i<=6;i++){
	std::cout<<"Enter an array of size 7:"<<std::endl;
	std::cin>>arr[i];
	}
	std::cout<<"Enter teh target value:"<<std::endl;
	std::cin>>target;
    int targetLocation = location_of_target(arr, size, target);
    std::cout << "Target location: " << targetLocation << std::endl;

    return 0;
}
