#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    // less than key <
    bool operator<(const Student &other) const
    {
        if (this->marks == other.marks)
            return this->roll < other.roll;
        else
            return this->marks > other.marks;
    }
};
// less than key <

// class cmp
// {
// public:
//     bool operator()(const Student &a, const Student &b) const
//     {
//         if (a.marks == b.marks)
//             return a.roll < b.roll;
//         else
//             return a.marks > b.marks;
//     }
// };
int main()
{
    int n;
    cin >> n;
    multiset<Student> st; // jodi Student class bhitore compare operator use kori tahole sudhu Student lekhlei hoy
    // set<Student,cmp> st;    //jodi Student class bairer compare operator use kori tahole Student,cmp lekhte hoy
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        st.insert(obj);
    }
    for (auto el : st)
    {
        cout << el.name << " " << el.roll << " " << el.marks << endl;
    }
    return 0;
}