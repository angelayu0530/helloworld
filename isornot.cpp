#include <iostream>
using namespace std;
bool isornot (std::string name){
    if(name == "" || name.length() == 1) {
        return true;
    }
    else if (name[0] == name[name.length()-1]){
        name.pop_back ();
        name.erase(0,1);
        return(isornot(name));
    }
    return false;
}
int main (){
   cout << isornot("boob") << endl;
}