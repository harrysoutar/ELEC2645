#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
vector<int>::iterator i;
int element;
int new_element;

int main() {
    v.push_back(4);
    v.push_back(1);
    v.push_back(3);
    cout << "vector has size: " << v.size() << endl;
    cout << "Please input the element of the vector to output: ";
    cin >> element;
    cout << "element " << element << " is: " << v[element] << endl;
    cout << "Input a new element: ";
    cin >> new_element;
    v.push_back(new_element);
    cout << "The new size is: " << v.size() << endl;
    sort(v.begin(), v.end());
    for(int j = 0; j < v.size(); j++){
        cout << v[j] << ", ";
    }
}
