#include<iostream>
using namespace std;
int main(){
    int value1;
    int value2;
    cout<<"Enter the number of rows";
    cin>>value1;
    cout<<"Enter the number of columns";
    cin>>value2;

    string arr[value1][value2];
    for(int i=0; i<value1;i++){
        for(int j=0; j<value2; j++)
        {cin>>arr[i][j];
        }
    }
    for (int i=0; i<4; i++){
        for(int j=0; j<4; j++)
        cout<<arr[i][j];
    }

return 0;
}