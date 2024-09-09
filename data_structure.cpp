#include <iostream>
using namespace std;
void selectionsort(int *arr, int size)
{
    for(int i=0;i < size; i++){
        int min_value = arr[i];
        int min_index = i;
        for (int j = i; j < size; j++)
        {
            if (min_value>arr[j])
            {
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
 

 
void incersionsort(int *arr, int size){
    for (int i = 1; i < size; i++)
    {
        int hole=i-1;
        int current_number= arr[i];
        while (hole>=0 && arr[hole] > current_number)
        {
                arr[hole+1] = arr[hole];
                hole--;
        }
        arr[hole] = current_number;
    }
    
}
int main()
{
    int arr[5] = {7, 12, 9, 11, 3};
    int min_value = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min_value > arr[i])
        {
            min_value = arr[i];
        }
    }

    // for (int i = 0; i < 5 - 1; i++)
    // {
    //     bool key = false;
    //     for (int j = 0; j < 5 - i - 1; j++)
    //     {
    //         if (arr[j + 1] < arr[j])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //             key = true;
    //         }
    //     }
    //     if (!key)
    //     {
    //         break;
    //     }
        
    // }
    incersionsort(arr,5);
    for (int i = 0; i <5; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    cout << min_value << endl;
}