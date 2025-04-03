
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v {};

    cout << "Please enter a set of numbers you wish to add together and enter 0 when done: \n";
    int num {0};
    int i {1};
    do
    {
        cout << "Num " << i << ": ";
        cin >> num;
        v.push_back(num);
        i++;
    } while (num != 0);

    int sum {0};
    for (int num: v)
    {
        sum += num;
    }

    cout << sum << endl;
    return 0;
}
