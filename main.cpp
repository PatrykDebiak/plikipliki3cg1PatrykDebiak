#include <iostream>
#include <fstream>



using namespace std;

int main()
{
    fstream plik;
    int x, y;
    ofstream myfile;
    plik.open("wsp.txt", ios::in);
    myfile.open("wynik.txt", ios::app);
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            plik >> x >> y;
            if (y > 0 && x < 0) {
                myfile << x << " " << y << "\tPierwsza cwiartka\n";
            }


            else if (y > 0 && x > 0) {
                myfile << x << " " << y << "\tDruga cwiartka\n";
            }


            else if (y < 0 && x < 0) {
                myfile << x << " " << y << "\tTrzecia cwiartka\n";
            }


            else if (y < 0 && x > 0) {
                myfile << x << " " << y << "\tCzwarta cwiartka\n";
            }



        }
        myfile.close();
        plik.close();
       

    }
}
