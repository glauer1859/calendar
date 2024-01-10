#ifndef CALENDAR
#define CALENDAR

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <cstdlib>


class Calendar{

private:
std::string Name;
std::map<std::string,std::string[]> date;

public:

Calendar(){};
void getEventsWeek(std::string date);
void printEventsMonth(std::string month);
void addEvent();
void directions();



};







#endif 