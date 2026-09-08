#include <iostream>
using namespace std;
void merge(int arr[], int start, int mid, int end){
    int merged_arr[100000];
    int i = start, j = mid + 1;
    int k = start;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            merged_arr[k] = arr[i];
            k++;
            i++;
        }
        else{
            merged_arr[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i <= mid){
        merged_arr[k] = arr[i];
        k++;
        i++;
    }
    while(j <= end){
        merged_arr[k] = arr[j];
        k++;
        j++;
    }
    for(k=start; k<=end; k++){
        arr[k] = merged_arr[k];
    }
}
void merge_sort(int arr[], int start, int end){
    if(start < end){
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}
int main() {
    int n, arr[100000];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    merge_sort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}