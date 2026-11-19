using namespace std;
#include <string>
#include "Dates.h"

class Assessment 
{
private:
    string name;
    double weight, mark;
    Dates dueDate; // date is a user-defined class type
    bool completed;
    double estimatedHours;
    double hoursDone;

public:
    Assessment(string name, double weight, double estimatedHours, Dates deadline);
    void setMark(double mark);
    void logHours(double hours);


    
    
    // Getters

    double get_RemainingHours();
    int get_Daysleft(Dates today);
    int get_Hours_per_day_needed(Dates today);
    int get_Priority_score(Dates today);
    
    double get_contribution();
    string get_Name();
    double get_Weight();
    double get_Mark();
    double get_completed();
    Dates get_deadline();
    double get_estimatedHours();
    double get_hoursDone();
};