#include <iostream>
#include <vector>
using namespace std;

class Pile
{
private:
    vector<int> elements;

public:
    void push(int element)
    {
        elements.push_back(element);
    }

    int pop()
    {
        if (!is_empty())
        {
            int element = elements.back();
            elements.pop_back();
            return element;
        }
        else
            return -1;
    }

    bool is_empty()
    {
        return elements.empty();
    }
};

int main()
{
    Pile pl1;
    Pile pl2;
    // Empiler des éléments sur la pile 1
    pl1.push(10);
    pl1.push(20);
    pl1.push(30);

    cout << "Depilage de PILE1:" << endl;
    while (!pl1.is_empty())
    {
        int element = pl1.pop();
        cout << element << endl;
    }
    //Empiler des éléments sur la pile 2
    pl2.push(62);
    pl2.push(13);
    pl2.push(49);

    cout << "Depilage de PILE2:" << endl;
    while (!pl2.is_empty())
    {
        int element = pl2.pop();
        cout << element << endl;
    }
    return 0;
}
