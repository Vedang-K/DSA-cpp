#include <iostream>

int linearSearch(int array[], int size, int target){
    for(int i = 0; i < 10; i++){
        if(array[i] == target){
           std::cout << i << '\n';
        }
    }
    return -1;
}

void reverseArray(int array[], int size){
    int start = 0, end = size - 1;

    while(start < end){
        std::swap(array[start], array[end]);
        start++;
        end--;
    }
}

void sum(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    std::cout << sum;
}

int main(){

    int array[10] = {3, 2, 5, 7, 8, 6, 9, 1, 4, 0};
    int size = 10;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int target;

    for(int i = 0; i < 10; i++){
        std::cout << array[i] << " ";
    }

    std::cout << '\n';

    for(int i = 0; i < 10; i++){
        if(smallest > array[i]){
            smallest = array[i];
        }
    }
    std::cout << "smallest = " << smallest << '\n';

    for(int i = 0; i < 10; i++){
        if(largest < array[i]){
            largest = array[i];
        }
    }
    std::cout << "Largest = " << largest << '\n';


    //LINEAR SEARCH:- 
    std::cout << "entre the target element: ";
    std::cin >> target;

    linearSearch(array, size, target);

    //REVERSE AN ARRAY
    reverseArray(array, size);
    for(int i = 0; i < 10; i++){
        std::cout << array[i] << " ";
    }

    std::cout << '\n';

    sum(array, size);

    return 0;
}