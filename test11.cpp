#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {

string text;

cout << "test1";
  ifstream fin ("source.txt");
   if (!fin){
    cerr << "Error, sourcetxt not found.";
    return 1;}
    
    ofstream foush ("destination.txt");
    if (!foush)
    {cerr << "error destinationtxt not found.";
    fin.close();
    return 1;}

    while (getline(fin, text)) {
    foush << text << endl;
}

    foush.close();
    fin.close();

}
