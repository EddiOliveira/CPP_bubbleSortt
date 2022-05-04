#include <iostream>

using namespace std;



void troca(int *v1, int *v2)
{
    int aux = *v2;
    *v2 = *v1;
    *v1 = aux;
}


void bubbleSort(int arr[], int n)
{
    for(int i=n-2; i>=0; i--)
        for(int j=0; j<=i; j++)
        {
            if(arr[j] > arr[j+1]) troca(&arr[j], &arr[j+1]);
        }
}



int main()
{
    
    int v[] = {10, 13, 5, 7, 4, 2, 50, 1};
    int size = sizeof(v)/sizeof(v[0]);

    cout << "Vetor antes do BubbleSort: ";
    for(int i=0; i<size; i++) cout << v[i] << " ";

    bubbleSort(v, size);

    cout << endl << "Vetor depois do BubbleSort: ";
    for(int i=0; i<size; i++) cout << v[i] << " ";


return 0;
}