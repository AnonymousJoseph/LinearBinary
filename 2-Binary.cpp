#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int size = sizeof(dizi) / sizeof(dizi[0]);
    
    sort(dizi, dizi + size); // Diziyi sıralama
    
    int target;
    cout << "Aranacak elemani giriniz: ";
    cin >> target;

    int result = binarySearch(dizi, 0, size - 1, target);

    if (result != -1) {
        cout << "Eleman " << target << " bulundu. Indisi: " << result << endl;
    } else {
        cout << "Eleman " << target << " dizide bulunamadi." << endl;
    }

    return 0;
}
