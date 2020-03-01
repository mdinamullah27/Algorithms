#include<iostream>
using namespace std;
int main()
{
    int count,i,num,array[30], first,last,middile;
    cout<<"how many elements would you like to enter?:";
    cin>>count;
    for(i=0; i<count; i++)
    {
        cout<<"Enter Number "<<(i+1)<<":";
        cin>>array[i];

    }

    cout<<"Enter the number that you want to search:";
    cin>>num;

    first=0;
    last=count+1;
    middile=(first+last)/2;

    while(first<=last)
    {


        if(array[middile]< num)
        {
            first=middile+1;
        }
        else if(array[middile]==num)
        {
            cout<<num<<"found in the array at the location :"<<(middile+1) <<"\n";
            break;
        }
        else
        {
            last=middile-1;
        }
        middile=(first+last)/2;

    }
    if(first>last)
    {
        cout<<num<<" not found in the array";
    }
    return 0;
}
