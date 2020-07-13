#include <iostream> 
using namespace std; 
  
// Function to return count of squares; 
long int countSquares(int n) 
{ 
    // A better way to write n*(n+1)*(2n+1)/6 
    return (n * (n + 1) / 2) * (2*n + 1) / 3; 
} 
  
int main() 
{ 
  int n;
  cin>>n;
  cout << "Count of squares is " << countSquares(n); 
  return 0; 
} 
