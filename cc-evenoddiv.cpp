#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n;
    int o=0;
    int e=0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            if (i%2 == 0)
            {
                ++e;
            }

            else 
            {
                ++o;
            }
        }

        else 
        {
            continue;
        }
        
    }
    
    if (e > o)
    {
        cout << "1";
    }

    else if (e == o)
    {
        cout << "0";
    }

    else 
    {
        cout << "-1";
    }
    

}
