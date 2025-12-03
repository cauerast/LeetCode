#include <iostream>
#include <vector>

int main(){
    std::vector<int> arr;
    
    for(int i = 0; i < 10; i++){
        int n = arr[i] + arr[i + 1];
        arr.push_back(n);
    }
    return 0;

    for(int p : arr){
        std::cout << p;
    }
}