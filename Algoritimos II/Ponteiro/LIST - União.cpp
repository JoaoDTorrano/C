#include <iostream>
#include <list>

using namespace std;

// Função para unir duas listas ordenadas em uma terceira lista ordenada
list<int> mergeLists(const list<int>& list1, const list<int>& list2)
{
    list<int> list3;

    list<int>::const_iterator it1 = list1.begin();
    list<int>::const_iterator it2 = list2.begin();

    while (it1 != list1.end() || it2 != list2.end())
    {
        if (it2 == list2.end() || (it1 != list1.end() && *it1 <= *it2))
        {
            if (list3.empty() || *it1 != list3.back())
            {
                list3.push_back(*it1);
            }
            ++it1;
        }
        else
        {
            if (list3.empty() || *it2 != list3.back())
            {
                list3.push_back(*it2);
            }
            ++it2;
        }
    }

    return list3;
}

// Função para exibir os elementos de uma lista
void displayList(const list<int>& lst)
{
    for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    list<int> list2;

    // Leitura da lista 1
    int value;

    while (cin >> value && value != 0)
    {
        list1.push_back(value);
    }

    // Leitura da lista 2
    while (cin >> value && value != 0)
    {
        list2.push_back(value);
    }

    // União e exibição da lista 3
    list<int> list3 = mergeLists(list1, list2);
    displayList(list3);

    return 0;
}