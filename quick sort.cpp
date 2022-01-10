#include <bits/stdc++.h>

using namespace std;

int swap(int arr[],int i,int j){
    int temp =arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
return 0;
}

int partation(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
        swap(arr,i+1,r);
        return i+1;

}

void quicksort(int arr[],int l ,int r)
{
        if(l<r){
            int pivot= partation(arr,l,r);
            quicksort(arr,l,pivot-1);
            quicksort(arr,pivot+1,r);

        }
}


int main()
{
    int stridx =0 , endidx=9;
     int arr[]={1,4,5,6,12,25,34,2,8,99};
    quicksort(arr,stridx,endidx);
    for(int i=0;i<endidx+1;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
