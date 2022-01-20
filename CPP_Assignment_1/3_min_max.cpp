#include <iostream>
using namespace std;

class Number_List{
    public:

    int n,i,j,temp;
    
    void takeInput(){
        cout<<"Enter number of elements in the array: ";
        cin>>n;
        int *arr=new int(n);
        cout<<"Enter elements: ";
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        arraySort(arr);
        display(arr);
        maxMin(arr);
    }

    void arraySort(int arr[ ]){
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }

    void display(int arr[ ]){
        cout<<"The sorted array is: ";
        for(i=0;i<n;i++){
            cout<<arr[i]<<'\t';
        }
    }

    void maxMin(int arr[ ]){
        int max=arr[0];
        int min=arr[0];
        for(i=0;i<n;i++){
            if (arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        cout<<"\nMaximum: "<<max<<endl;
        cout<<"Minimum: "<<min;
    }
};

int main(){
    Number_List obj;
    obj.takeInput();
    return 0;
}