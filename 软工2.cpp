#include <stdio.h>

// 函数返回数组a中的最大连续子数组和
int maxSubArraySum(int a[], int n) {
    int max_so_far = 0; // 全局最大子数组和
    int max_ending_here = 0; // 以当前元素为结尾的最大子数组和

    for (int i = 0; i < n; i++) {
        // 更新以当前元素为结尾的最大子数组和
        max_ending_here = max_ending_here + a[i];

        // 如果以当前元素为结尾的最大子数组和小于0，则置为0，重新开始计算
        if (max_ending_here < 0)
            max_ending_here = 0;

        // 更新全局最大子数组和
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }

    return max_so_far;
}

int main() {
    int arr[] = {-2, 11, -4, 13, -5, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSubArraySum(arr, n);
    printf("最大子字段和为： %d\n", max_sum);

    return 0;
}
