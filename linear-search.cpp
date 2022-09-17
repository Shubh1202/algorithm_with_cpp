#include<iostream>
using namespace std;

int linearSearch(int [], int, int);


int main(){
    int array[] =  { 2, 10, 4, 10, 40 }, array_size, search_elem = 10, found_index;
    array_size = sizeof(array)/sizeof(int);
    found_index = linearSearch(array, array_size, search_elem);

    if(found_index > 0){
        cout << "Element " << search_elem << " is found " << found_index << " times. ";
    }else{
        cout << "Element " << search_elem << " not found. ";
    }
}

int linearSearch(int array[], int array_size, int search_elem){
    int i=0, count=0;
    for (i = 0; i < array_size; i++)
    {
        if(array[i]==search_elem){
            count++;
        }
    }
    return count;
}
