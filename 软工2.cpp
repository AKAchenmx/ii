#include <stdio.h>

// ������������a�е���������������
int maxSubArraySum(int a[], int n) {
    int max_so_far = 0; // ȫ������������
    int max_ending_here = 0; // �Ե�ǰԪ��Ϊ��β������������

    for (int i = 0; i < n; i++) {
        // �����Ե�ǰԪ��Ϊ��β������������
        max_ending_here = max_ending_here + a[i];

        // ����Ե�ǰԪ��Ϊ��β������������С��0������Ϊ0�����¿�ʼ����
        if (max_ending_here < 0)
            max_ending_here = 0;

        // ����ȫ������������
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }

    return max_so_far;
}

int main() {
    int arr[] = {-2, 11, -4, 13, -5, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSubArraySum(arr, n);
    printf("������ֶκ�Ϊ�� %d\n", max_sum);

    return 0;
}
