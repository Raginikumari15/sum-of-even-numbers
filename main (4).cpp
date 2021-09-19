#include <iostream> //sum of even num;
using namespace std;
int main()
{
         int d = 0 ;
        int n;
    int sum = 0;
    cin>> n;
    while (d<=n){
        sum += d ;
        d +=2;
	}
    cout<<sum;
    
}
