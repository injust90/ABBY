// Standard input output library
#include <iostream>
#include <fstream>
#include "json/include/nlohmann/json.hpp"
#include <chrono>
#include <thread>
#include <string>

using namespace std;
using json = nlohmann::json;

int main()
{
	std::string cppstring;

	// scene1 json file reading (nlohmann library)
	std::ifstream file("scene1.json");
	json data = json::parse(file);
	json scene1 = data["scene1"];

	// scene 
	json text = scene1["text"];
	for (json::iterator it = text.begin(); it != text.end(); ++it)
	{
		cout << endl;
		cout << (*it).get_to(cppstring);
		cout << endl;
	}
	
	// actions 
	string choice;
	json actions = scene1["actions"];
	for (json::iterator it = actions.begin(); it != actions.end(); ++it)
	{
		cout << (*it)["desc"].get_to(cppstring);	

		if (choice[0] == (*it)["desc"].get_to(cppstring)[0])
		{
			cout << "IT IS WORKING" << endl;			
		}

		cout << endl;
	}	

	cout << "Choose your next action. Wisely." << endl;
	getline(cin, choice);
}
