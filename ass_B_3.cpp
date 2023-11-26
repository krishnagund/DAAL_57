
#include <bits/stdc++.h>
using namespace std;


bool valid(int per_day,
		vector<int> task, int d)
{

	int cur_day = 0;
	for (int index = 0; index < task.size();
		index++) {

		int day_req
			= ceil((double)(task[index])
				/ (double)(per_day));

		cur_day += day_req;

		

		if (cur_day > d) {
			return false;
		}
	}

	
	return cur_day <= d;
}


int minimumTask(vector<int> task, int d)
{

	int left = 1;
	int right = INT_MAX;

	for (int index = 0;
		index < task.size();
		index++) {
		right = max(right, task[index]);
	}


	int per_day_task = 0;

	while (left <= right) {

		int mid = left
				+ (right - left) / 2;

		
		if (valid(mid, task, d)) {
			per_day_task = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	
	return per_day_task;
}


int main()
{
	
	vector<int> task{ 3, 4, 7, 15 };
	int D = 10;

	cout << minimumTask(task, D) << endl;

	return 0;
}
