using namespace std;
#include <string>
#include "Dates.h"
#include "Module.h"
#include "Assessment.h"

class StudyPlanner
{
    private:
    
    Module* modules;
    string modules;
    int count, capacity;
    Dates today; // date is a user-defined class type
    double hours_PerDay_Available;
    
    void grow(); // function

    
    public:

    StudyPlanner();//constructor
    ~StudyPlanner();//destructor
    bool add_Module(Module*);
    bool Remove_Module(string Code);
    Module* find_Module(string Code);

    bool is_Overloaded();
    Assessment* recommended_next();
    void print_schedule();
    void print_grade_report();
    bool load_from_file(string filename);
    bool save_to_file(string filename);


    // Getters
    double get_totalworkload();
    double get_over_all_Average();
};

