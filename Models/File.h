#pragma once
#include <iostream>
#include<string>
#include<vector>

using namespace std;

class File {
	private:
		string name;
		vector<string> content;
	public:
		File(string name);
		string getName();
		void append(string text);
	    string read();
		void clear();
		void write(string text);
		
		};