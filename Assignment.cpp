#include <iostream>
#include <vector>

int getSum(std::vector<int> elements){
    int sum = 0;
    for (int i = 0; i < elements.size(); i++){
        sum += elements[i];
    }
    return sum;
}

int main(){
    std::vector<int> elements = {5,2,3,4,1,6,8,7,8,5,1};
    std::cout << getSum(elements) << std::endl;
    return 0;
}