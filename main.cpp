#include <iostream>

using namespace std;

void insertionSort(int v[],int lenght)
{
    int i,j,aux;
    for(i=1; i<lenght; i++)
    {
        aux=v[i];
        j=i-1;
        while((j>=0)&&(aux<v[j]))
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=aux;
    }
}

void mostrarVet(int v[],int lenght)
{
    int i;
    cout << " [";
    for(i=0; i<lenght; i++)
    {
        cout<<v[i]<<" \t";
    }
    cout << " ]";
    cout<<endl;
}

int main()
{
    int A[] = {9,10,-1,3,6,2,1,-3,1,0,-2,15,8,-7,0};
    cout << "Vetor de entrada" << endl;
    mostrarVet(A,14);
    insertionSort(A,14);
    cout << "Vetor de saida" << endl;
    mostrarVet(A,14);
    return 0;
}
