#include<iostream>
using namespace std;
int main(){

    int n,i;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements:"<<endl;

    int array[n];

    for(i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Entered elements are:"<<endl;

    for(i=0;i<n;i++){

        cout<<array[i]<<endl;
    }
    return 0;
}



