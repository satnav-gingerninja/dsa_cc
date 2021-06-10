#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <stack>
#include <vector>
#include <map>
#include <string>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <numeric>

using namespace std;

typedef pair<int, int> Point;

void GetInput(int& n, string str1 = "n");
void GetTwoInputs(int& a, int& b, string str1 = "a", string str2 = "b");
void Print(const map<int, int>& dict, string str = "Key-Value pairs are");
void Print(const vector<Point>& points, string str = "The given sequence of points");
void Print(const vector<Point>& points, int start, int end, string str="The given sequence of points");
void Print(const vector<int>& arr, string str = "The given array is");
void Print(const vector<int>& arr, int start, int end, string str = "The given array is");
void Print(const vector<int>& weight, const vector<int>& val,string str = "Different items are");
void Print(vector<vector<bool>>& table, string str = "");
void Print(vector<vector<int>>& table, string str = "", int width=10);
void Print(vector<vector<int>>& table, Point p1, Point p2, string str = "Matrix between the two points");
void Print(const vector<double>& arr, string str = "The given array is");
#endif
