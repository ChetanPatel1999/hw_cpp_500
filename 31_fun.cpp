#include<iostream>
using namespace std;
int len(int num)
{
    int c =0;
    while(num)
    {
        num = num /10;
        c++;
    }
    return c;
}
int main()
{
 int arr[5]={5, 75,671,5567,67898};
 int i,num;
 for(i=0;i<5;i++)
 {
    num = arr[i];
    while (len (num)<4)
    {
        num = num * 10 + 8;
    }
    arr [i] = num;
 }
 for(i=0;i<5;i++)
 {
    cout<<arr[i]<<" ";
 }
}