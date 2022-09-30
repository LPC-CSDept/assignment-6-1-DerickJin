#include <iostream>
int inputValidate(int begin, int end);
void getListPrime(int begin, int end);

int main()
{
    using namespace std;
    int begin, end;
    
    cout << "Enter beginning and end: ";
    cin >> begin >> end;
    int check = inputValidate(begin, end);

    if (check == 0)
    {
        exit(0);
    }

    getListPrime(begin, end);
}

int inputValidate(int begin, int end)
{
    if (begin > end || begin < 2 || end < 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }   
}

void getListPrime(int begin, int end)
{
    int flag;
    int i, j;
    using namespace std;
    for (i = begin; i <= end; i++)
    {
        for (j = 2; j <= (i/2); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > (i/2))
        {
            cout << i << " is prime number\n";
        }
        
        
    }
    return;
}