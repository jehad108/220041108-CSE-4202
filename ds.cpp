#include <bits/stdc++.h>
using namespace std;
int prefix_sum(int *arr, int size, int start, int end)
{
    int arr2[size];
    int sum = 0;
    int sum2;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        arr2[i] = sum;
    }
    if (start == 0)
    {
        sum2 = arr2[end];
    }
    else
        sum2 = arr2[end] - arr2[start - 1];
    return sum2;
}
int maxsubarray_sum(int *arr, int size)
{
    int csum = 0;
    int maxsum = 0;
    for (int i = 0; i < size; i++)
    {
        csum += arr[i];
        if (csum < 0)
        {
            csum = 0;
        }
        else
        {
            if (csum > maxsum)
                maxsum = csum;
        }
    }
    return maxsum;
}
int lol(int *arr, int x)
{
    int max = arr[0];

    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < x; j++)
        {
            int num = 0;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
                num += arr[k];
                if (max < num)
                {
                    max = num;
                }
            }
            cout << endl;
        }
    }
    return max;
};
int main()
{
    int arr[] = {1, 3, 4, 6, 7, 9, 5};
    int size = sizeof(arr) / sizeof(int);
    int sum = prefix_sum(arr, size, 2, 5);
    int maxsum= maxsubarray_sum(arr,size);
    cout << "the sum is :" << sum;
    cout << "the max subarray sum is :"<<sum;
}