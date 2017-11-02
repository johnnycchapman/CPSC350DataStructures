#include <string>
#include "Queue.h"

using namespace std;

class Simulation
{
  public:
    Simulation();
    ~Simulation();

    bool readFile(string f);

    int *windowArray;
    int *medianArray;
    int waitTotal;
    int longestWait;
    int numWaitsOverTen;
    double medianWait;
    double meanWait;

    int studentTimeAtWindow;
    int lineType;
    int studentEntryTime;
    int numWindows;
    int numStudents;
    int totalStudents;

    Queue<T> entryTimeQueue;
    Queue<T> timeAtWindowQueue;
    TreeNode<int> *tempList;



};
