// CompareTheTriplets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int compVals(int int1, int int2) {
	//compars the two integers and returns 1 if 1 is greater, 2 if 2 is greater, and 0 if they are the same
	if (int1 == int2) {
		return 0;
	}
	if (int1 > int2) {
		return 1;
	}
	return 2;
}

int main() {
	int a0;
	int a1;
	int a2;
	cout << "Enter Alice's Scores: ";
	cin >> a0 >> a1 >> a2;
	int b0;
	int b1;
	int b2;
	cout << "Enter Bob's Scores: ";
	cin >> b0 >> b1 >> b2;

	int rating1 = compVals(a0, b0);
	int rating2 = compVals(a1, b1);
	int rating3 = compVals(a2, b2);

	int aliceScore = 0;
	int bobScore = 0;

	if (rating1 == 1) {
		aliceScore++;
	}
	else if (rating1 == 2) {
		bobScore++;
	}
	if (rating2 == 1) {
		aliceScore++;
	}
	else if (rating2 == 2) {
		bobScore++;
	}
	if (rating3 == 1) {
		aliceScore++;
	}
	else if (rating3 == 2) {
		bobScore++;
	}
	cout: "Alice's Score: ";
	cout << aliceScore;
	cout << "\n";
	cout << "Bob's Score: ";
	cout << bobScore;
	cout << "\n";

	return 0;
}

