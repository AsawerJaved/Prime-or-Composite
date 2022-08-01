#include <iostream>
using namespace std;
int main()
{
	// declaring variables
    int a, num, factor=0;
    
    cout<<"Enter an integer: ";
    cin>>num;
    
    if (num==0||num==1)
    cout<<"It is neither Prime nor Composite number";
    
    else if (num>=2)
    {
        for(a=2; a<=num/2; a++)
        {
            if (num%a==0)
            {
                factor++;
            }
        }
        if (factor==0)
        cout<<"It is a Prime number";
        else
        cout<<"It is a Composite number";
    }
    return 0;
}
