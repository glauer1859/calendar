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
void getEventsWeek(std::string date);
void printEventsMonth(std::string month);
void addEvent();
void directions();



};







#endif 