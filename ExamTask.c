#include <stdio.h>
#include <stdlib.h>

int zeroCnt(int num) {
    int flag = 1;
    int cnt = 0;
    for (int i = 1; i <= 8; ++i) {
        if (!(num & flag)) {
            ++cnt;
        }
        flag <<= 1;
    }
    return cnt;
}

void printNums(int* arr, const int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}

void zerosInNums(int size) {
    int* nums = (int*) malloc(sizeof(int) * (size + 1));
    for (int i = 0; i <= size; ++i) {
        nums[i] = zeroCnt(i);
    }
    printNums(nums, size + 1);
    free(nums);
}

int main() {
    int size = 0;
    scanf("%d", &size);
    zerosInNums(size);
    //int* nums = (int*) malloc(sizeof(int) * size);
}
