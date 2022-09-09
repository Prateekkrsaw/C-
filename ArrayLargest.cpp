#include <iostream>
using namespace std;
int main(void){
    int arr[50];
    int n;
    int lar=0;
    cout<<"Enter the number of elements =";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter data of array "<<i+1<<"=";
    cin>>arr[i];
    if(arr[i]>lar)
    lar=arr[i];
    }
    cout<<"Largest number = "<<lar;
    return 0;
}