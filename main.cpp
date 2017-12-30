#include <iostream>
#include <math.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int arr[5]= {16,11,15,7,15};
            cout<<sizeof(arr)/sizeof(int)<<endl;
    for (int i=0;i<50;i++)
    {   int j=i%(sizeof(arr)/sizeof(int));

        cout<<arr[j];
    }
    return 0;
}
