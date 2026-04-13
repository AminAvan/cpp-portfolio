#include <cstdio>
#include <vector>

class MyHashMap {
private:
    std::vector<std::pair<int, int>> data_hashmap;

public:
    MyHashMap() { // it is the constructor 

    }
    
    void put(int key, int value) {
        for (auto& p : data_hashmap){
            if (p.first == key){
                p.second = value;
                return;
            }
        }
        data_hashmap.push_back({key, value});
    }
    
    int get(int key) {
        for(auto& p : data_hashmap){
            if (p.first == key){
                return p.second;
            }
        }
        return (-1);
    }
    
    void remove(int key) {
        for(auto it = data_hashmap.begin(); it != data_hashmap.end(); it++){
            if (it->first == key){
                data_hashmap.erase(it);
                return;
            }
        }
    }
};



int main(){

    // instantiate
    MyHashMap my_code;

    // input & output
    my_code.put(1, 1); // The map is now [[1,1]]
    my_code.put(2, 2); // The map is now [[1,1], [2,2]]
    my_code.get(1);    // return 1, The map is now [[1,1], [2,2]]
    my_code.get(3);    // return -1 (i.e., not found), The map is now [[1,1], [2,2]]
    my_code.put(2, 1); // The map is now [[1,1], [2,1]] (i.e., update the existing value)
    my_code.get(2);    // return 1, The map is now [[1,1], [2,1]]
    my_code.remove(2); // remove the mapping for 2, The map is now [[1,1]]
    my_code.get(2);    // return -1 (i.e., not found), The map is now [[1,1]]

    return 0;
}