#include <cstdio>
#include <vector>

using namespace std;

class MyCircularQueue {
private:
    vector<int> que;
    int added_index = 0;
    int q_front = -1;
    int q_rear = -1;
public:
    MyCircularQueue(int k) {
        que.resize(k, -1); // to make a vector with size of three and all its items are '-1'.
    }
    
    bool enQueue(int value) {
        for (int i = added_index; i < que.size(); i++){
            if (que[i] == -1){
                que[i] = value;
                added_index = i;
                
                if (q_front == -1) q_front = i;
                q_rear = i;
                if (added_index == (que.size() - 1)) added_index = 0;
                return true;
            }
        }
        return false;
        
    }
    
    bool deQueue() {
        for (int i = 0; i < que.size(); i++){
            if (que[i] != -1){
                que[i] = -1;

                if ((i+1) < que.size()){
                    q_front = i+1;
                } else {
                    
                }

                return true;
            }
        }
        return false;
    }
    
    int Front() {
        if (!que.empty()){
            return que[0];
        } else {
            return -1;
        }
    }
    
    int Rear() {
        if (!que.empty()){
            return que[(que.size()-1)];
        } else {
            return -1;
        }
    }
    
    bool isEmpty() {
        for (auto& item : que){
            if (item != -1){
                return false;
            }
        }
        return true;       
    }
    
    bool isFull() {
        for (auto& item : que){
            if (item == -1){
                return false;
            }
        }
        return true;
    }
};



int main(){

    // instantiate
    int input_k = 3;
    MyCircularQueue* obj = new MyCircularQueue(input_k);

    return 0;
}