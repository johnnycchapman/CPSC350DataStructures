#include <iostream>
#include "Simulation.h"

using namespace std;

int main(int argc, char** argv)
{
  Simulation s;

  int time = 1;
  int openWindows = 0;
  bool running;

  // check for only one command line argument
  if (argc == 2)
  {
    // check if argument is a file, if so run program
    if (s.readFile(argv[1]))
    {
      while (true)
      {
        running = false;

        // if any window is occupied continue running
        for (int i = 0; i < s.numWindows;++i)
        {
          if (s.windowArray[i] > 0)
          {
            running = true;
          }
        }


        // if people are still in line, continue running
        if (!s.entryTimeQueue.isEmpty())
        {
          running = true;
        }


        // main program
        if (running)
        {
          openWindows = 0;

          // check for open windows
          for (int i = 0; i < s.numWindows;++i)
          {
            if (s.windowArray[i] < 1)
            {
              ++openWindows;
            }
          }


          for (int i = 0; i<openWindows;++i)
          {
            if (s.windowArray[i] > 0)
            {
              s.windowArray[i]--;
            }
          }


          ++time;
        }
        break;
      }
    }

    else
    {
      cout << "\n** Error loading file: File does not exist in current directory. **\n\n Exiting Program\n" << endl;
    }
  }

  else
  {
    cout << "\n** Please give single file name in command line. **\n\n Exiting Program\n"<<endl;
  }
}
