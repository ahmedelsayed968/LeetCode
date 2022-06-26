template<typename T>
class Node {
public:
	T val;
	Node* next;
	Node():val(0),next(NULL){}
	Node(T val):val(val),next(NULL){}
	Node(Node*next,T val):val(val), next(next) {}
};

class MyQueue {
private:
    Node<int> *rear;
    Node<int> *front;
public:
    MyQueue() {
        rear = NULL;
        front = NULL;
    }

    void push(int x) {
        auto newNode = new Node<int>(x);
        if(rear == NULL){
            rear = newNode;
            front = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    int pop() {
        int element = front->val;
        auto deleteNode = front;
        if(deleteNode == rear)
            rear = NULL;
        front = front->next;
        delete deleteNode;
        return element;
    }

    int peek() {
        return front->val;
    }

    bool empty() {
        return front ==NULL;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */