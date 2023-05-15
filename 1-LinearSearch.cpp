#include <iostream>
#include <vector>

// Linear search 
bool linearSearch(const std::vector<int>& arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int size;
    std::cout << "Dizinin boyutunu girin: ";
    std::cin >> size;

    std::vector<int> arr(size);
    std::cout << "Dizinin ogelerini girin: ";
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int target;
    std::cout << "Aranacak ogeyi girin: ";
    std::cin >> target;

    if(linearSearch(arr, target)) {
        std::cout << "Bulundu." << std::endl;
    } else {
        std::cout << "Oge bulunamadi." << std::endl;
    }

    return 0;
}
