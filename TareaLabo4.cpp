#include <bits/stdc++.h>
#include <iostream>
using namespace std;


void swap(int * a, int * b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[],int low,int high)
{
int pivot = arr[high]; 
int i=(low-1); 
for(int j = low; j <= high -1; j++)
{

if (arr[j] < pivot)
{
i++;
swap(&arr[i], &arr[j]);
}
}
swap (&arr[i + 1],&arr[high]);
return (i + 1);
}

void quickSort( int arr[],int low,int high)
{
if (low < high)
{

int pi = partition(arr, low, high);

quickSort(arr,low,pi - 1 );
quickSort(arr, pi + 1 , high);
}}

void printArray( int arr[], int size)
{
int i;
for (i = 0; i < size; i++)
cout << arr[i] << " ";
cout << endl;
}

void missing(int cantElemt){
	int arr[cantElemt];
	int aux;
	cout<<"Dar enter para ingregar numero\n";
	for(int i = 0;i<cantElemt;i++){
		cout<<"o	";
		cin>>aux;
		arr[i] = aux;
		
	}


int n = sizeof(arr)/sizeof(arr[0]);
quickSort(arr, 0, n-1);

cout<<"R// \n";
if (arr[cantElemt-1]%2 == 0){
	cout<<arr[cantElemt-1]+2<<endl;
	}
else{
	cout<<arr[cantElemt-1]+1<<endl;
	}
cout<<"---------------"<<endl;
}

int main(){
	int cant, elem;
	
	cin>>cant;
	for (int i = 1; i<=cant;i++){
		cin>>elem;
		missing(elem);
	}
	
	return 0;
}
