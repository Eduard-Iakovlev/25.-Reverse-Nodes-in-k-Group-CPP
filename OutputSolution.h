#pragma once
#include <vector>

using namespace std;

class OutputSolution{
public:
	OutputSolution() = default;
	void setOutputSolution(int test, int k, vector<int>& dataHead, vector<int> dataExpected);

	void printOutputSolution();

private:
	int _test, _k;
	vector<int> _dataHead, _dataExpected;

	void setTest(int test);
	void setK(int k);
	void setDataHead(vector<int>& dataHead);
	void setDataExpected(vector<int>& dataExpected);
};

