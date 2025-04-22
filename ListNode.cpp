#include "ListNode.h"
#include <iostream>

ListNode::ListNode() : val(0), next(nullptr) {}

ListNode::ListNode(int x) : val(x), next(nullptr) {}

ListNode::ListNode(int x, ListNode* next) : val(x), next(next) {}

void ListNode::createList(vector<int> data){
	if (data.empty()) return;
	this->val = data[0];
	ListNode* current = this;
	for (size_t i = 1; i < data.size(); ++i) {
		current->next = new ListNode(data[i]);
		current = current->next;
	}
	current->next = nullptr;
}

void ListNode::printList(){
	if (this == nullptr) {
		cout << "[]" << endl;
	}
	else {
		ListNode* current = this;
		cout << "[ ";
		while (current) {
			cout << current->val;
			if (current->next) cout << " -> ";
			current = current->next;
		}
		cout << " ]" << endl;
	}

}

bool ListNode::isEqual(ListNode* head){
	if (this == nullptr && head == nullptr) return true;
	if (this == nullptr || head == nullptr) return false;
	ListNode* curThis = this;
	ListNode* curHead = head;
	while (curThis && curHead) {
		if (curThis->val != curHead->val) return false;
		curThis = curThis->next;
		curHead = curHead->next;
	}
	if (curThis == nullptr && curHead == nullptr) return true;
	return false;
}

