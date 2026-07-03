#include<iostream>
using namespace std;
class students{
    public:
    string name;
    int age;
    int roll_no;
    string classes;
};

int main(){
    students krishna;
    krishna.age=19;
    krishna.roll_no=121;
    krishna.name="krishna agarwal";
    krishna.classes="12th(non- med)";

    students ravi;
    ravi.age=19;
    ravi.roll_no=122;
    ravi.name="ravi jain";
    ravi.classes="12th(arts)";

students nain;
nain.age=19;
nain.roll_no=123;
nain.name="jatin nain";
nain.classes="12th(medical)";

students krish;
krish.age=19;
krish.roll_no=124;
krish.name="krish yadav";
krish.classes="12th(arts)";

students nishant;
nishant.age=19;
nishant.roll_no=125;
nishant.name="nishant dagar";
nishant.classes="12th(non-med)";

students aman;
aman.age=19;
aman.roll_no=126;
aman.name="aman jaat";
aman.classes="12th(comerce)";

cout<<aman.name<<"\n"<<aman.age<<"\n"<<aman.roll_no<<"\n"<<aman.classes<<"\n";

}
