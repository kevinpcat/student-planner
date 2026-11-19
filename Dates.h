using namespace std;

class Dates
{
    private:
        int day, month, year;
        int toDayNumber();
    
    public:
        
        Dates(int d, int m, int y);
        int daysUntil(Dates);
        void print();

        
        // Getters
        int getDay();
        int getMonth();
        int getYear();
};