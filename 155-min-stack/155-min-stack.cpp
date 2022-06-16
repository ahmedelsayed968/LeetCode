class Node {
	
public:
	int element;
	Node* next;
	Node() {
		next = NULL;
		element = 0;
	}
};

class MinStack {
	Node* ttop;
	//MinStack* Temp;
public:
	MinStack() {
		ttop = NULL;
	}

	void push(int val) {
		Node* tn = new Node();
		tn->element = val;
		tn->next = ttop;
		ttop = tn;
		
	}

	void pop() {
		Node* temp = ttop;
		ttop = temp->next;
		delete temp;
	}

	int top() {
		return ttop->element;
	}

	int getMin() {
		Node* temp = ttop;
		int min = temp->element;
		while (temp) {
			if (temp->element < min) {
				min = temp->element;
			}
			temp = temp->next;
		}
		return min;

	}
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */