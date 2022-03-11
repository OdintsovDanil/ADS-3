// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0, left = 0, right = size - 1, mid;
    while (left < right) {
        mid = (left + right) / 2;
        if (arr[mid] == value) {
            left = mid;
            while (arr[left] == value) {
                left--;
            }
            while (arr[right] != value) {
                right--;
            }
            for (int i = left + 1; i < right; i++) {
                count++
            }
        }
        if (arr[mid] < value) {
            left = mid + 1;
        }
        if (arr[mid] > value) {
            right = mid - 1;
        }
    }
    return count
}
