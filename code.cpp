#include <iostream>

 int countWays(int n) {
    if(n<=1){
        return 1;
    }
    return(countWays(n-1)+countWays(n-2));
}
int main (){
   std::cout << countWays(7);
    
}