#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    // equal key    ==
    bool operator==(const Student &other) const
    {
        return (this->name == other.name && this->roll == other.roll);
    }
};

// equal key    ==
// class cmp
// {
// public:
//     bool operator()(const Student &a, const Student &b) const
//     {
//         return (a.name == b.name && a.roll == b.roll);
//     }
// };

class StudentHashFunction
{
public:
    unsigned long long operator()(const Student &s) const
    {
        return (hash<int>{}(s.roll) + hash<string>{}(s.name));
    }

    // size_t == unsigned long long

    // size_t operator()(const Student &s) const
    // {
    //     return (hash<int>{}(s.roll) + hash<string>{}(s.name));
    // }
};

int main()
{

    // beshirbhag somoy unorder_set (insert/search/removal) er Time Complexity O(1)

    // unordered_set<int> us({1, 2, 3, 4, 5, 20, 32, 67, 1, 2, 3, 4, 7});
    // for (int val : us)
    //     cout << val << " ";
    // cout << endl;

    // cout << "size= " << us.size() << endl;
    // cout << "count(5)= " << us.count(5) << endl;
    // cout << "num_erased= " << us.erase(4) << endl;
    // cout << boolalpha << "found(5) =" << (us.find(5) != us.end()) << endl;
    // cout << "num_bucket =" << us.bucket_count() << endl;
    // cout << "load_factor =" << us.load_factor() << endl;

    unordered_set<Student, StudentHashFunction> uss; // jodi Student class bhitore compare operator use kori tahole sudhu Student,hashingKey(StudentHashFunction) lekhlei hoy
    // unordered_set<Student, StudentHashFunction, cmp> uss; // jodi Student class bairer compare operator use kori tahole Student,hasgingKye(StudentHashFunction),cmp lekhte hoy
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cin >> name >> roll;
        Student obj(name, roll);
        uss.insert(obj);
    }
    for (Student a : uss)
    {
        cout << a.name << " " << a.roll << endl;
    }
    return 0;
}