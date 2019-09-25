#include <iostream>

using namespace std;
void imprimirArreglo(int arr[],int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int sumarArreglo(int arr[],int tam)
{
    int suma=0;
    for(int i=0;i<tam;i++)
    {
        suma+=arr[i];
    }
    return suma;
}

int sumarRecursivo(int arr[], int tam)
{
    if(tam==1)
    {
        return arr[0];
    }
    else
    {
        return arr[tam-1]+sumarRecursivo(arr,tam-1);
    }
}

void invertir(int arr[], int tam)
{
    int v = tam/2;
    tam-=1;
    for(int i=0;i<v;i++)
    {
        int c = arr[i];
        arr[i] = arr[tam];
        arr[tam--] = c;
    }
}

void invertirRecursivo(int arr[], int tam)
{

}

int main()
{
    int x[5];
    for(int i=0;i<5;i++)
    {
        cin>>x[i];
    }
    /*
    imprimirArreglo(x,5);
    cout<< sumarArreglo(x,5)<< endl;

    cout <<sumarRecursivo(x,5)<<endl;
    */
    invertir(x,5);
    imprimirArreglo(x,5);
}

// EJERCICIOS, ORDENAR CON FUNCION SWAP; BURBUJA; INSERTION SORT; QUICKSORT

