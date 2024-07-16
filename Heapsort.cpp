#include<iostream>
using namespace std;

class heap
{
    int Arr[20];
    int Size;

    public:
        void accept_array();
        void display_array();
        void adjust(int a[], int n, int i);
        void heapsort();
        void maxmin();
};

void heap :: accept_array()
{
    cout<<"Enter Size of Array: ";
    cin>>Size;

    cout<<"Enter Elements: ";
    for(int i = 0; i<Size; i++)
    {
        cin>>Arr[i];
    }
}

void heap :: heapsort()
{   

    for (int i = Size / 2 - 1; i >= 0; i--)
    {
        adjust(Arr, Size, i);
    }

    for (int i = Size - 1; i >= 0; i--)
    {
        swap(Arr[0], Arr[i]); 
        adjust(Arr, i, 0);  
        
    }
}

void heap:: display_array()
{   
    cout<<"Elements of Array: ";
    for(int i =0; i<Size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    heap p;

    p.accept_array();
    cout<<"Unsorted Array:"<<endl;
    p.display_array();
    p.heapsort();
    cout<<"Sorted Array:"<<endl;
    p.display_array();
    p.maxmin();


    return 0;
}

void heap :: adjust(int a[], int n, int i)
{
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i)
    {
        swap(a[i], a[largest]);
        adjust(a, n, largest);
    }
}

void heap ::maxmin()
{
    cout<<"Max Value: "<<Arr[Size-1]<<endl;
    cout<<"Min Value: "<<Arr[0];
}
