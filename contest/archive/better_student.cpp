#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Student{
    int id;
    int math;
    int eng;
};



int main(){
    int N, X, Y, Z; cin >> N >> X >> Y >> Z;
    vector<Student> students(N);
    vector<int> a(N), b(N), admitted(0);
    for(int i = 0; i < N; i++) cin >> a.at(i);
    for(int i = 0; i < N; i++) cin >> b.at(i);
    for(int i = 0; i < N; i++){
        students.at(i) = {i + 1, a.at(i), b.at(i)};
    }

    sort(students.begin(), students.end(), [](const Student& lhs, const Student& rhs) {
        if(lhs.math == rhs.math) return lhs.id > rhs.id;
        return lhs.math < rhs.math;
   });

    for(int i = 0; i < X; i++){
        int last_id = students.at(students.size() - 1).id;
        admitted.push_back(last_id);
        students.pop_back();
    }


    sort(students.begin(), students.end(), [](const Student& lhs, const Student& rhs) {
        if(lhs.eng == rhs.eng) return lhs.id > rhs.id;
        return lhs.eng < rhs.eng;
   });

    for(int i = 0; i < Y; i++){
        int last_id = students.at(students.size() - 1).id;
        admitted.push_back(last_id);
        students.pop_back();
    }


    sort(students.begin(), students.end(), [](const Student& lhs, const Student& rhs) {
        if(lhs.math + lhs.eng == rhs.math + rhs.eng) return lhs.id > rhs.id;
        return lhs.math + lhs.eng < rhs.math + rhs.eng;
   });


    for(int i = 0; i < Z; i++){
        int last_id = students.at(students.size() - 1).id;
        
        admitted.push_back(last_id);
        students.pop_back();
    }

    sort(admitted.begin(), admitted.end());
    for(int id : admitted) cout << id << endl;



}