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
	// Scene 1
	std::ifstream f("scene1.json");
	json data = json::parse(f);
	json scene1 = data["scene1"];

	json actions = scene1["actions"];
	
	for (json::iterator it = actions.begin(); it != actions.end(); ++it)
	{
		cout << endl;
		cout << *it;	
		cout << endl;
	}	
}
