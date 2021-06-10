#include "Common.h"

using namespace std;

void GetInput(int& n, string str1)
{
	cout << "Enter the value for " << str1 << " - ";
	cin >> n;
}
void GetTwoInputs(int& a, int& b, string str1, string str2)
{
	cout << "Enter the value for " << str1 << " - ";
	cin >> a;
	cout << "Enter the value for " << str2 << " - ";
	cin >> b;
}
void Print(const map<int, int>& dict, string str)
{
	cout << str << "\n";
	for (auto it = dict.begin(); it!=dict.end(); it++)
	{		
		cout << it->first << setw(4) << it->second << setw(4) << "\n";
	}	
}
void Print(const vector<Point>& points, string str)
{
	cout << str << "\n";
	for (auto p : points)
	{
		string s = "(" + to_string(p.first) + "," + to_string(p.second) + ")";
		cout << s << setw(8);
	}
	cout << "\n";
}
void Print(const vector<Point>& points, int start, int end, string str)
{
	cout << str << "\n";
	for (int i = start; i <= end; i++)
	{
		string s = "(" + to_string(points[i].first) + "," + to_string(points[i].second) + ")";
		cout << s << setw(5);
	}
	cout << "\n";
}
void Print(const vector<int>& arr, string str)
{
	cout << str << "\n";
	for (auto i : arr)
	{
		cout << i << setw(8);
	}
	cout << "\n";
}
void Print(const vector<int>& arr, int start, int end, string str)
{
	cout << str << "\n";
	for (int i=start;i<=end;i++)
	{
		cout << arr[i] << setw(5);
	}
	cout << "\n";
}
void Print(const vector<int>& weight, const vector<int>& val, string str)
{
	cout << str << "\n";
	int size = weight.size();
	for (int i = 0; i < size; i++)
	{
		cout << "Item-" << i << "($" << val[i] << "," << weight[i] << "kg) ";
	}
	cout << "\n";
}
void Print(vector<vector<bool>>& table, string str)
{
	cout << str << "\n";
	for (auto row : table)
	{
		for (auto col : row)
		{
			if (col)
				cout << "T ";
			else
				cout << "F ";
		}
		cout << "\n";
	}
}
void Print(vector<vector<int>>& table, string str, int width)
{
	cout << str << "\n";
	for (auto row : table)
	{
		for (auto col : row)
		{
			cout << setw(width) << col;
		}
		cout << "\n";
	}
}
void Print(vector<vector<int>>& table, Point p1, Point p2, string str)
{
	cout << str << "\n";
	for (int i = p1.first; i <= p2.first; i++)
	{
		for (int j = p1.second; j <= p2.second; j++)
		{
			cout << setw(10) << table[i][j];
		}
		cout << "\n";
	}
}
void Print(const vector<double>& arr, string str)
{
	cout << str << "\n";
	for (auto i : arr)
	{
		cout << i << setw(8);
	}
	cout << "\n";
}