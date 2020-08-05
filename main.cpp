#include <iostream>

using namespace std;

int main()
{
    int maxcount;
    cout << "How much should I count?" << endl;
    cin >> maxcount;
    cout << "How many numbers per cycle?" << endl;
    int maxcycle;
    cin >> maxcycle;
    int z = 0;
    int counter = 0;
    while(counter < maxcount){
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
        while(x !=0){
            int y = 3-(to_string(x).size());
            string pad(y,' ');
            string pad2 = pad + "   ";
            cout << x << pad2 << z << endl;
            x--;
            z++;
        }
        counter++;
        if(counter != maxcount){cout << "Cycle completed. Going forward" << endl;}
        else{cout << "Cycle counter reached "<< maxcount << endl;}
    }
}
