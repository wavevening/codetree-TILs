#include <iostream>
#include <string>

using namespace std;

struct Node {
	int data;
	Node* prev;
	Node* next;

	Node(int val) : data(val), prev(nullptr), next(nullptr) {}
	~Node() {}
};

class DoubleLinkedList {
private:
	Node* head;
	Node* tail;


protected:
	int size;

public:
	DoubleLinkedList() : head(nullptr), tail(nullptr), size(0) {}
	~DoubleLinkedList() {}

	void push_front(int A) {
		Node* newNode = new Node(A);
		if (head == nullptr) {
			head = tail = newNode;
			size++;
		}
		else {
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
			size++;
		}
	}
	void push_back(int a) {
		Node* newNode = new Node(a);
		if (head == nullptr) {
			head = tail = newNode;
			size++;
		}
		else {
			newNode->prev = tail;
			tail->next = newNode;
			tail = newNode;
			size++;
		}
	}
	void pop_front() {
		if (head == nullptr) {
			cout << -1 << endl;
			return;
		}

		int front_data = head->data;
		head = head->next;

		delete head->prev;
		head->prev = nullptr;
		size--;

		cout << front_data << endl;
	}

	void pop_back() {
		if (size == 0) {
			cout << -1 << endl;
			return;
		}

		int back_data = tail->data;
		if (tail->prev == nullptr) {
			delete head;
			head = tail = nullptr;
		}
		else {
			tail = tail->prev;
			delete tail->next;
			tail->next = nullptr;
		}

		size--;
		cout << back_data << endl;
	}

	void size_int() {
		cout << size << endl;
	}
	void empty() {
		if (size == 0) {
			cout << 1 << endl;
		}
		else
			cout << 0 << endl;
	}
	void front() {
		cout << head->data << endl;
	}
	void back() {
		cout << tail->data << endl;
	}
};

int main() {

	int N;
	int A;
	string command;

	DoubleLinkedList DLL;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push_back") {
			cin >> A;
			DLL.push_back(A);
		}
		else if (command == "push_front") {
			cin >> A;
			DLL.push_front(A);
		}
		else if (command == "pop_front") {
			DLL.pop_front();
		}
		else if (command == "pop_back") {
			DLL.pop_back();
		}
		else if (command == "size") {
			DLL.size_int();
		}
		else if (command == "empty") {
			DLL.empty();
		}
		else if (command == "back") {
			DLL.back();
		}
		else if (command == "front") {
			DLL.front();
		}

	}
	return 0;

}