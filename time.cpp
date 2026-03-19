#include <iostream>
#include <ctime>
#include <stdlib.h>   // for system()
using namespace std;

int main()
{
    while (true)
    {
        // clear the screen every second so it looks like it's updating
        system("cls");      // use "clear" if you're on Linux/Mac

        // get current time
        time_t t = time(0);
        tm* now = localtime(&t);

        // format and display
        char buffer[80];
        strftime(buffer, 80, "%A, %B %d %Y", now);
        cout << "Date: " << buffer << endl;

        strftime(buffer, 80, "%H:%M:%S", now);
        cout << "Time: " << buffer << endl;

        // wait 1 second before updating
        clock_t start = clock();
        while ((clock() - start) < CLOCKS_PER_SEC);  // busy wait for 1 second
    }

    return 0;
}

