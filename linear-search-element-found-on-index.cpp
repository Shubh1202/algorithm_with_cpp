#include<iostream>
using namespace std;

int linearSearch(int [], int, int);


int main(){
    int array[] =  { 2, 20, 4, 80, 40, 70, 45, 90, 100, 60 }, array_size, search_elem = 45, found_index;
    array_size = sizeof(array)/sizeof(int);

    found_index = linearSearch(array, array_size, search_elem);

    if(found_index >= 0){
        cout << "Element " << search_elem << " is found on index " << found_index;
    }else{
        cout << "Element " << search_elem << " is not found. ";
    }

    return 0;
}

int linearSearch(int array[], int array_size, int search_elem){
    int i=0;
    for (i = 0; i < array_size; i++)
    {
        if(array[i]==search_elem){
            return i;
        }
    }
    return -1;
}
