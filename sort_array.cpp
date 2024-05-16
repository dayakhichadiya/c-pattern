#include <iostream>
using namespace std;

int n;
int arr[50];
int low = 0;
int high = n-1;
int mid;
int element_to_find;

void display(int arr[])
{
    for (int i = 0; i < n; i++)
    {
     arr[i]=(rand()%50)+1;
    }
}

void fun(int arr[])
{
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int search(int arr[], int element)
{
    cout<<"enter the element which you want to find :";
    cin>>element_to_find;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element_to_find)
        {
            return mid;
        }
        else if (arr[mid] < element_to_find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    cout<<"enter the array size :";
    cin>>n;
    display(arr);
    fun(arr);
    display(arr);


    // search(arr, element_to_find);
    int index = search(arr, element_to_find);

    if (index != -1)
    {
        printf("Element found at index: %d\n", index);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}