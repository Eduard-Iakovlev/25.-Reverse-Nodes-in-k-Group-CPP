#include <iostream>
#include <vector>
#include "OutputSolution.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int test = 0;
	int k;
	vector<int> dataHead, dataExpected;

	OutputSolution outputSolution;

	test++;
	dataHead = { 1,2,3,4,5 };
	k = 2;
	dataExpected = { 2,1,4,3,5 };
	outputSolution.setOutputSolution(test, k, dataHead, dataExpected);
	outputSolution.printOutputSolution();

	test++;
	dataHead = { 1,2,3,4,5 };
	k = 3;
	dataExpected = { 3,2,1,4,5 };
	outputSolution.setOutputSolution(test, k, dataHead, dataExpected);
	outputSolution.printOutputSolution();

}
