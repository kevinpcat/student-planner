using namespace std;
#include <string>
#include "Assessment.h"

class Module
{
    private:
        
        Assessment* assessments;

        string Code, title;
        int count, capacity;
        void grow();

    
    public:
        
        Module(string Code, string title);
        ~Module();
        bool add_Assessment(Assessment*);
        bool Remove_Assessment(Assessment*);
        Assessment* find_Assessment(string name);
        double required_onfinalGrade(double target);

        
        // Getters
        string get_Code();
        string get_Title();
        int get_count();
        double get_ReamainingHours();
        double get_currentGrade();
        Assessment* get_assessmentsAt(int i);
};