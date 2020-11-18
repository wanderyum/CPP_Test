#include <iostream>
#include <vector>
#include <algorithm>

void print(const std::vector<int> &vec, bool newline=true);

int main(){
    std::vector<int> vec1 = {2,3,1,4};
    print(vec1);

    std::sort(std::begin(vec1), std::begin(vec1)+2);
    auto iter = vec1.begin();
    iter++;
    iter++;
    auto iter1 = vec1.begin();
    iter1 += 2;
    std::cout << (iter==iter1)  << "---\n";
    print(vec1);

    vec1.erase(vec1.begin()+1, vec1.begin()+3);
    print(vec1);


    return 0;
}

void print(const std::vector<int> &vec, bool newline){
    if (vec.size()) {
        std::cout << "[" << vec[0];
        for (int i=1; i<vec.size(); i++) {
            std::cout << ", " << vec[i];
        }
        std::cout << "]";
    }
    else {
        std::cout << "[]";
    }
    if (newline) std::cout << std::endl;
}