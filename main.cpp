#include <iostream>
#include <string>
using namespace std;

int main()
{
    int z, cycleCounter, mincount, cycles, maxcycle;
    z = cycleCounter = mincount = 0;
    cout << "How many cycles should I count?" << endl;
    cin >> cycles;
    cout << "How many numbers per cycle?" << endl;
    cin >> maxcycle;

//letstest
    while(cycleCounter < cycles){
        int x = 0;
        while(x != maxcycle){
            int y = 3-(to_string(x).size());
            string pad(y,' ');
            string pad2 = pad + "   ";
            cout << x << pad2 << z << endl;
            x++;
            z++;
        }

    cout << "Going backwards" << endl;

        while(x != mincount){
            int y = 3-(to_string(x).size());
            string pad(y,' ');
            string pad2 = pad + "   ";
            cout << x << pad2 << z << endl;
            x--;
            z++;
        }
        cycleCounter++;
        if(cycleCounter != cycles){cout << "Cycle completed. Going forward" << endl;}
        else{cout << "Cycle cycleCounter reached "<< cycles << endl;}
    }
}
