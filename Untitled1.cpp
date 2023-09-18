#include <bits/stdc++.h>
#include <string>
using namespace std;
void bubbleSort(int *arr,int len){
for(int i=0;i<len-1;i++)
for(int j=0;j<len-1-i;j++){
	if(arr[j]>arr[j+1]){
		int temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
}	
}
void printArray(int *arr,int len)
{
	for(int i= 0;i<len;i++){
		cout<<arr[i]<<endl;
	} 
}
int main(){
    int arr[]{1,5,3,4,5,6,8};
    int len = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,len);
	printArray(arr,len);
}
