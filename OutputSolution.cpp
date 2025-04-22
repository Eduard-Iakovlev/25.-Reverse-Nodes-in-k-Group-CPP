#include "OutputSolution.h"
#include "ListNode.h"
#include "Solution.h"
#include <iostream>

using namespace std;

void OutputSolution::setOutputSolution(int test, int k, vector<int>& dataHead, vector<int> dataExpected){
	setTest(test);
	setK(k);
	setDataHead(dataHead);
	setDataExpected(dataExpected);
}

void OutputSolution::printOutputSolution(){
	ListNode* head = new ListNode();
	ListNode* expected = new ListNode();
	head->createList(_dataHead);
	expected->createList(_dataExpected);

	Solution solution;
	
	cout << "============ Тест № " << _test << "============" << endl;
	cout << " Исходный список: ";
	head->printList();
	cout << " k = " << _k << endl;
	cout << " Ожидаемый список: ";
	expected->printList();
	cout << " Итоговый список: ";
	head = solution.reverseKGroup(head, _k);
	head->printList();
	cout << "============ Проверка ============" << endl;
	if (head->isEqual(expected)){
		cout << " Результат совпадает с ожидаемым" << endl;
	}
	else{
		cout << " Результат не совпадает с ожидаемым" << endl;
	}
	cout << "=================================\n" << endl;

}

void OutputSolution::setTest(int test){
	_test = test;
}

void OutputSolution::setK(int k){
	_k = k;
}

void OutputSolution::setDataHead(vector<int>& dataHead){
	_dataHead = dataHead;
}

void OutputSolution::setDataExpected(vector<int>& dataExpected){
	_dataExpected = dataExpected;
}
