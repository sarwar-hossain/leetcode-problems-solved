//2




class MyCircularDeque {
    private:
    vector<int>deque;
    int head, tail, size, capacity;

public:
    MyCircularDeque(int k) {
        capacity=k;
        deque.resize(k);
        head=-1;
        tail=-1;
        size=0;
    }
    
    bool insertFront(int value) {
        if(isFull()){
            return false;
        }
        if(isEmpty()){
            head=tail=0;
        }
        else{
             head=(head-1+capacity)%capacity;
        }

        deque[head]=value;
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()){
            return false;
        }
        if(isEmpty()){
            head=tail=0;
        }
        else{
            tail=(tail+1)%capacity;
        }

        deque[tail]=value;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()){
            return false;
        }
        if(head==tail){
            head=tail=-1;
        }
        else{
            head=(head+1)%capacity;
        }
        
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()){
            return false;
        }
        if(head==tail){
            head=tail=-1;
        }
        else{
             tail=(tail-1+capacity)%capacity;
        }

        size--;
        return true;
    }
    
    int getFront() {
        return isEmpty()?-1:deque[head];
    }
    
    int getRear() {
        return isEmpty()?-1:deque[tail];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */