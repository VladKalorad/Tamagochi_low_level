#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
ref class files
{
public:
	void write(std::string login, std::string password) {
		std::ofstream out("hello.txt", std::ios::app);
		if (out.is_open())
		{
			out << login << "|" << password << std::endl;
		}
		out.close();
	}
	bool check(std::string login, std::string password) {
		string s;
		ifstream file("hello.txt");

		while (getline(file, s)) {
			string login1 = s.substr(0, s.find("|"));
			string password1 = s.substr(s.find("|") + 1, s.size() - 1);
			if (login1 == login && password1 == password) {
				return true;
			}
		}
		file.close();
	}
};