#ifndef CALENDAR
#define CALENDAR

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <cstdlib>


class calendar{

private:
std::string Name;
std::map<std::string,std::string[]> date;

public:

calendar();
void getEvents();
void addEvent();
void directions();



};







#endif 