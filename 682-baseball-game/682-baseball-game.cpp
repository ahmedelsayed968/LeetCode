template<typename T>
class Node {
public:
	T val;
	Node* next;
	Node():val(0),next(NULL){}
	Node(T val):val(val),next(NULL){}
	Node(Node*next,T val):val(val), next(next) {}
};

template <typename T>
class Stack {
private:
	Node<T>* top;
	Node<T>* prevTop;
public:
	Stack(){
		top = new Node<T>(NULL, 0);
		prevTop = new Node<T>(NULL, 0);
	
	}
	void push(T element) {
		auto newNode = new Node<T>(top,element);
		top = newNode;
		prevTop = top->next;
	}
	T previousTop() {
		return prevTop->val;
	}
	T Top() {
		return top->val;
	}
	void pop() {
		auto deleteNode = top;
		top = deleteNode->next;
		prevTop = top->next;
		delete deleteNode;
	}
};

class Solution {
public:
	int calPoints(vector<string>& ops) {
		Stack<int> st;
		int sum = 0;
		for (auto it : ops) {
			if (it == "+") {
				int second = st.Top();
				int first = st.previousTop();
				st.push((first + second));
				sum += first + second;
			}
			else if (it == "D") {
				int top = st.Top();
				st.push(top * 2);
				sum += top * 2;
			}
			else if (it == "C") {
				int top = st.Top();
				sum -= top;
				st.pop();
			}
			else {
				int x = stoi(it);
				st.push(x);
				sum += x;
			}
		}
		return sum;
	}
};