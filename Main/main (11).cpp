#include <iostream>
#include <unordered_map>  // ¡Otra opción!
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> edades;
    
    edades["Juan"] = 25;
    edades["Ana"] = 30;
    edades["Carlos"] = 35;
    
    cout << "Edad de Ana: " << edades["Ana"] << endl;
    
    return 0;
}