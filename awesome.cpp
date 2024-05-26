#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

// For DEMO Purposes

string temp1[] = {"StudFirstName", "StudLastName", "RollNumber", "StudPhoneNumber", "StudDeptId"};
string temp2[] = {"FirstName", "LastName", "FacultyID", "PhoneNumber", "DeptId"};
string temp3[] = {"DName", "DPhoneNumber", "HOD_Id", "Location", "DDeptId"};
string temp4[] = {"CName", "TeachingProfId", "Sem", "Credits", "CDeptID"};
vector <string> StudentsAttributes(temp1, temp1+5);
vector <string> ProfessorsAttributes(temp2, temp2+5);
vector <string> DepartmentsAttributes(temp3, temp3+5);
vector <string> CoursesAttributes(temp4, temp4+5);

// Creation of Tuple Data Type
struct Tuple {
    map <string, string> data;
    bool operator<(const Tuple& other) const {
        return data < other.data;
    }
};

// Creation of Relation Class
class Relation {

    public:
        vector <Tuple> RelationTuples;

        // Function to input tuples
        void addTuple (Tuple &t){
            RelationTuples.push_back(t);
        }

        // Function to Print a Relation
        void Print(){
            if (RelationTuples.size() > 0){
                Tuple temp = RelationTuples[0];
                for (auto d: temp.data){
                    cout<<d.first<<"\t\t";
                }
                cout<<"\n\n";
                for (Tuple t : RelationTuples){
                    for (auto d : t.data){
                        cout<<d.second<<"\t\t";
                    }
                    cout<<"\n";
                }
            }
            else cout<<"Empty Relation! \n";
        }

        // Implementing the Project Operator
        Relation project(vector <string> attributes) {
            Relation result;
            map < Tuple, int > check;
            for (Tuple& existingTuple : RelationTuples) {
                Tuple newTuple;
                for (string attr : attributes) {
                   if (existingTuple.data.count(attr)) {
                        newTuple.data[attr] = existingTuple.data.at(attr);
                    }
                }
                if (!check[newTuple]){
                    result.addTuple(newTuple);
                    check[newTuple] = 1;
                }
            }
            // set < Tuple > ans (result.Relatio   nTuples.begin(), result.RelationTuples.end());
            return result;
        }

        Relation ProjectAll(){
            Relation result;
            map <Tuple, int> check;
            for (Tuple &existingTuple : RelationTuples){
                if (check[existingTuple] == 0){
                    check[existingTuple] = 1;
                    result.addTuple(existingTuple);
                }
            }
            return result;
        }

        // Implementing SELECT Operator 
        Relation select(vector <string> attributesSelect) {
            Relation result;
            for (Tuple t : RelationTuples) {
                    Tuple newTuple;
                    for (string s: attributesSelect){
                        newTuple.data[s]=t.data[s];
                    }
                    result.addTuple(newTuple);
                
            }
            Relation result1 = result.ProjectAll();
            return result1;
        }
        // Implementing SELECT Operator WITH CONDITION
        Relation selectCondition(vector <string> attributesSelect, vector <vector <string> > valueCheck) {
            Relation result;
            for (Tuple t : RelationTuples) {
                // for (auto d:t.data){
                //     cout<<d.first<<"\n";
                // }
                bool check = true;
                for (auto m : valueCheck){
                    // cout<<m.first<<" "<<m.second<<" "<<t.data[m.first]<<"\n";
                    if (m[1]==">"){
                        if (t.data[m[0]] <= m[2]){
                            check = false;
                            break;
                        }
                    }
                    if (m[1]==">="){
                        if (t.data[m[0]] < m[2]){
                            check = false;
                            break;
                        }
                    }
                    if (m[1]=="<"){
                        if (t.data[m[0]] >= m[2]){
                            check = false;
                            break;
                        }
                    }
                    if (m[1]=="<="){
                        if (t.data[m[0]] > m[2]){
                            check = false;
                            break;
                        }
                    }
                    if (m[1]=="="){
                        if (t.data[m[0]] != m[2]){
                            check = false;
                            break;
                        }
                    }
                    // if (t.data[m.first]!=m.second){
                    //     check=false;
                    //     break;
                    // }
                }
                if (check){
                    Tuple newTuple;
                    for (string s: attributesSelect){
                        newTuple.data[s]=t.data[s];
                    }
                    result.addTuple(newTuple);
                }
            }
            Relation result1 = result.ProjectAll();
            return result1;
        }
        // // Implementing SELECT Operator WITH CONDITION
        // Relation selectCondition(vector <string> attributesSelect, vector <pair <string, string> > valueCheck) {
        //     Relation result;
        //     for (Tuple t : RelationTuples) {
        //         // for (auto d:t.data){
        //         //     cout<<d.first<<"\n";
        //         // }
        //         bool check = true;
        //         for (auto m : valueCheck){
        //             // cout<<m.first<<" "<<m.second<<" "<<t.data[m.first]<<"\n";
        //             if (t.data[m.first]!=m.second){
        //                 check=false;
        //                 break;
        //             }
        //         }
        //         if (check){
        //             Tuple newTuple;
        //             for (string s: attributesSelect){
        //                 newTuple.data[s]=t.data[s];
        //             }
        //             result.addTuple(newTuple);
        //         }
        // }
        //     return result;
        // }
        // Relation selectCondition(vector <string> attributesSelect, map <string, string> valueCheck) {
        //     Relation result;
        //     for (Tuple t : RelationTuples) {
        //         bool check = true;
        //         for (auto m : valueCheck){
        //             if (t.data[m.first]!=m.second){
        //                 check=false;
        //                 break;
        //             }
        //         }
        //         if (check){
        //             Tuple newTuple;
        //             for (string s: attributesSelect){
        //                 newTuple.data[s]=t.data[s];
        //             }
        //             result.addTuple(newTuple);
        //         }
        // }
        //     return result;
        // }

        // Implementing RENAME Operator
        void Rename(vector <pair<string, string> > toBeRenamed){
            for (Tuple &t:RelationTuples){
                for (pair <string, string> p : toBeRenamed){
                    t.data[p.second]=t.data[p.first];
                    t.data.erase(p.first);
                }
            }
        }

    // Implementing Union Operator
    Relation Union(Relation otherRelation){
        Relation result = *this;
        for (Tuple t: otherRelation.RelationTuples){
            result.addTuple(t);
        }
        Relation result1 = result.ProjectAll();
        return result1;
    }

    // Implementing SET DIFFERENCE Operator
    Relation SetDifference(Relation OtherRelation){
        Relation result;
        for (Tuple t: RelationTuples){
            bool found = false;
            for (Tuple t2 : OtherRelation.RelationTuples){
                if (t.data == t2.data){
                    found=true;
                    break;
                } 
            }
            if (!found){
                result.addTuple(t);
            }
        }
        return result;
    }

    // CROSS PRODUCT operator
    Relation crossProduct(Relation other) {
        Relation result;
        for (Tuple tuple1 : RelationTuples) {
            for (Tuple tuple2 : other.RelationTuples) {
                Tuple newTuple;
                for (auto d : tuple1.data)newTuple.data[d.first]=d.second;
                for (auto d : tuple2.data)newTuple.data[d.first]=d.second;
                result.addTuple(newTuple);
            }
        }
        result.Print();
        return result;
    }

};


void InitialFill(Relation &Student, Relation &Professor, Relation &Department, Relation &Courses){

    // Initial Tuple Definition (CSE Students)
    Tuple Pranav, Aditya, Vignesh, 
    // Initial Tuple Definition (EEE Students)
    Sanidhya, Atmadeep,
    // Initial Tuple Definition (CSE Professors)
    AKTripathi, RSreevastava, SKSingh, AKSingh, BBiswas, RCC,
    // Initial Tuple Definition (EEE Professors)
    DSingh, MKVerma, RKSrivastava, RKMishra,
    // Initial Tuple Definition (Departments)
    CSE, EEE,
    // Initial Tuple Definition (Courses)
    DBMS, CG, AI, CSO, MO, SS, PS, IM, PE;

    Pranav.data[StudentsAttributes[0]]="Pranav"; Pranav.data[StudentsAttributes[1]]="Ajith"; Pranav.data[StudentsAttributes[2]]="21074021"; Pranav.data[StudentsAttributes[3]]="6282945424"; Pranav.data[StudentsAttributes[4]]="1"; 
    Aditya.data[StudentsAttributes[0]]="Aditya"; Aditya.data[StudentsAttributes[1]]="UmIdk"; Aditya.data[StudentsAttributes[2]]="21074037"; Aditya.data[StudentsAttributes[3]]="9100052966"; Aditya.data[StudentsAttributes[4]]="1"; 
    Vignesh.data[StudentsAttributes[0]]="Vignesh"; Vignesh.data[StudentsAttributes[1]]="UmIdk"; Vignesh.data[StudentsAttributes[2]]="21075073"; Vignesh.data[StudentsAttributes[3]]="6381161485"; Vignesh.data[StudentsAttributes[4]]="1"; 
    Sanidhya.data[StudentsAttributes[0]]="Sanidhy"; Sanidhya.data[StudentsAttributes[1]]="Tomar"; Sanidhya.data[StudentsAttributes[2]]="11111111"; Sanidhya.data[StudentsAttributes[3]]="827372257"; Sanidhya.data[StudentsAttributes[4]]="2"; 
    Atmadeep.data[StudentsAttributes[0]]="Atmadee"; Atmadeep.data[StudentsAttributes[1]]="Singh"; Atmadeep.data[StudentsAttributes[2]]="11111112"; Atmadeep.data[StudentsAttributes[3]]="9609925061"; Atmadeep.data[StudentsAttributes[4]]="2"; 
    AKTripathi.data[ProfessorsAttributes[0]]="Anil Kumar"; AKTripathi.data[ProfessorsAttributes[1]]="Tripathi"; AKTripathi.data[ProfessorsAttributes[2]]="11111114"; AKTripathi.data[ProfessorsAttributes[3]]="9609925062"; AKTripathi.data[ProfessorsAttributes[4]]="1"; 
    RSreevastava.data[ProfessorsAttributes[0]]="Rajeev"; RSreevastava.data[ProfessorsAttributes[1]]="Sreevastava"; RSreevastava.data[ProfessorsAttributes[2]]="11111115"; RSreevastava.data[ProfessorsAttributes[3]]="9609925063"; RSreevastava.data[ProfessorsAttributes[4]]="1"; 
    SKSingh.data[ProfessorsAttributes[0]]="Sanjay Kumar"; SKSingh.data[ProfessorsAttributes[1]]="Singh"; SKSingh.data[ProfessorsAttributes[2]]="11111116"; SKSingh.data[ProfessorsAttributes[3]]="9609925064"; SKSingh.data[ProfessorsAttributes[4]]="1"; 
    AKSingh.data[ProfessorsAttributes[0]]="Anil Kumar"; AKSingh.data[ProfessorsAttributes[1]]="Singh"; AKSingh.data[ProfessorsAttributes[2]]="11111117"; AKSingh.data[ProfessorsAttributes[3]]="9609925065"; AKSingh.data[ProfessorsAttributes[4]]="1"; 
    BBiswas.data[ProfessorsAttributes[0]]="Bhaskar"; BBiswas.data[ProfessorsAttributes[1]]="Biswas"; BBiswas.data[ProfessorsAttributes[2]]="11111118"; BBiswas.data[ProfessorsAttributes[3]]="9609925066"; BBiswas.data[ProfessorsAttributes[4]]="1"; 
    RCC.data[ProfessorsAttributes[0]]="Ravindranath"; RCC.data[ProfessorsAttributes[1]]="Chowdary"; RCC.data[ProfessorsAttributes[2]]="11111119"; RCC.data[ProfessorsAttributes[3]]="9609925067"; RCC.data[ProfessorsAttributes[4]]="1"; 
    DSingh.data[ProfessorsAttributes[0]]="Devender"; DSingh.data[ProfessorsAttributes[1]]="Singh"; DSingh.data[ProfessorsAttributes[2]]="11111120"; DSingh.data[ProfessorsAttributes[3]]="9609925068"; DSingh.data[ProfessorsAttributes[4]]="2"; 
    MKVerma.data[ProfessorsAttributes[0]]="Mitresh Kumar"; MKVerma.data[ProfessorsAttributes[1]]="Verma"; MKVerma.data[ProfessorsAttributes[2]]="11111121"; MKVerma.data[ProfessorsAttributes[3]]="9609925069"; MKVerma.data[ProfessorsAttributes[4]]="2"; 
    RKSrivastava.data[ProfessorsAttributes[0]]="RK"; RKSrivastava.data[ProfessorsAttributes[1]]="Srivastava"; RKSrivastava.data[ProfessorsAttributes[2]]="11111122"; MKVerma.data[ProfessorsAttributes[3]]="9609925070"; RKSrivastava.data[ProfessorsAttributes[4]]="2"; 
    RKMishra.data[ProfessorsAttributes[0]]="Rakesh Kumar"; RKMishra.data[ProfessorsAttributes[1]]="Mishra"; RKMishra.data[ProfessorsAttributes[2]]="11111123"; RKMishra.data[ProfessorsAttributes[3]]="9609925071"; RKMishra.data[ProfessorsAttributes[4]]="2"; 
    CSE.data[DepartmentsAttributes[0]]="Computer Science and Engineering"; CSE.data[DepartmentsAttributes[1]]="123456789"; CSE.data[DepartmentsAttributes[2]]="11111116"; CSE.data[DepartmentsAttributes[3]]="Near MNC"; CSE.data[DepartmentsAttributes[4]]="1"; 
    EEE.data[DepartmentsAttributes[0]]="Electrical and Electronics Engineering"; EEE.data[DepartmentsAttributes[1]]="123456790"; EEE.data[DepartmentsAttributes[2]]="11111120"; EEE.data[DepartmentsAttributes[3]]="Near CSE"; EEE.data[DepartmentsAttributes[4]]="2"; 
    DBMS.data[CoursesAttributes[0]]="Database Management Systems"; DBMS.data[CoursesAttributes[1]]="11111119"; DBMS.data[CoursesAttributes[2]]="Odd"; DBMS.data[CoursesAttributes[3]]="11"; DBMS.data[CoursesAttributes[4]]="1";
    CG.data[CoursesAttributes[0]]="Computer Graphics"; CG.data[CoursesAttributes[1]]="11111115"; CG.data[CoursesAttributes[2]]="Even"; CG.data[CoursesAttributes[3]]="10"; CG.data[CoursesAttributes[4]]="1";
    AI.data[CoursesAttributes[0]]="Artifical Intelligence"; AI.data[CoursesAttributes[1]]="11111116"; AI.data[CoursesAttributes[2]]="Odd"; AI.data[CoursesAttributes[3]]="10"; AI.data[CoursesAttributes[4]]="1";
    CSO.data[CoursesAttributes[0]]="Computer System"; CSO.data[CoursesAttributes[1]]="11111118"; CSO.data[CoursesAttributes[2]]="Even"; CSO.data[CoursesAttributes[3]]="10"; CSO.data[CoursesAttributes[4]]="1";
    MO.data[CoursesAttributes[0]]="Material Science"; MO.data[CoursesAttributes[1]]="11111119"; MO.data[CoursesAttributes[2]]="Odd"; MO.data[CoursesAttributes[3]]="11"; MO.data[CoursesAttributes[4]]="1";
    SS.data[CoursesAttributes[0]]="Signals and Systems"; SS.data[CoursesAttributes[1]]="11111120"; SS.data[CoursesAttributes[2]]="Odd"; SS.data[CoursesAttributes[3]]="11"; SS.data[CoursesAttributes[4]]="2";
    PS.data[CoursesAttributes[0]]="Power Systems"; PS.data[CoursesAttributes[1]]="11111121"; PS.data[CoursesAttributes[2]]="Even"; PS.data[CoursesAttributes[3]]="13"; PS.data[CoursesAttributes[4]]="2";
    IM.data[CoursesAttributes[0]]="Intelligent Systems"; IM.data[CoursesAttributes[1]]="11111122"; IM.data[CoursesAttributes[2]]="Odd"; IM.data[CoursesAttributes[3]]="13"; IM.data[CoursesAttributes[4]]="2";
    PE.data[CoursesAttributes[0]]="Probability and Electronics"; PE.data[CoursesAttributes[1]]="11111123"; PE.data[CoursesAttributes[2]]="Even"; PE.data[CoursesAttributes[3]]="13"; PE.data[CoursesAttributes[4]]="2";

    Student.addTuple(Pranav); Student.addTuple(Aditya); Student.addTuple(Vignesh); Student.addTuple(Sanidhya); Student.addTuple(Atmadeep);
    Professor.addTuple(AKTripathi); Professor.addTuple(RSreevastava); Professor.addTuple(SKSingh); Professor.addTuple(AKSingh); Professor.addTuple(BBiswas); Professor.addTuple(RCC); Professor.addTuple(DSingh); Professor.addTuple(MKVerma); Professor.addTuple(RKSrivastava); Professor.addTuple(RKMishra);     
    Department.addTuple(CSE); Department.addTuple(EEE); 
    Courses.addTuple(DBMS); Courses.addTuple(CG); Courses.addTuple(AI); Courses.addTuple(CSO); Courses.addTuple(MO); Courses.addTuple(SS); Courses.addTuple(PS); Courses.addTuple(IM); Courses.addTuple(PE); 

}

void demo1(){
    // Initial Relation Definition
    Relation Student, Professor, Department, Courses;

    // Calling Filling Function
    InitialFill(Student, Professor, Department, Courses);

    // Write functions required.

}


void demo(){
    // Initial Relation Definition
    Relation Student, Professor, Department, Courses;

    // Calling Filling Function
    InitialFill(Student, Professor, Department, Courses);

    cout<<"\n\nWelcome to our DMBS Project of Implementing Relational Operators in C++.\nHere are the initial Relations.\n\n";
    cout<<"STUDENT\n\n"; Student.Print(); cout<<"\n\n\n";
    cout<<"PROFESSORS\n\n"; Professor.Print(); cout<<"\n\n\n"; 
    cout<<"DEPARTMENTS\n\n";Department.Print(); cout<<"\n\n\n"; 
    cout<<"COURSES\n\n";Courses.Print(); cout<<"\n\n\n"; 

    // cout<<Courses.RelationTuples

    while(true){
    cout<<"Alright then. Let us see some Operators in Action!\n\nSelect which Operator you would like to see the function of:\n";
    cout<<"1. Select\n2. Project\n3. Cross Product\n4. Set Difference\n5. Union\n6. Rename\n7. Exit\n(Input 1/2/3/4/5/6/7): ";
    int i;
        cin>>i;
        if (i==1)
        {
            cout<<"Which Table would you like to Select From?\n1. Student\n2. Professor\n3. Department\n4. Coureses\nInput (1/2/3/4): ";
            int i1;
            cin>>i1;
            if (i1==1){
                cout<<"\nGreat choice! Select which attribute(s) you would like to Select:\n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<StudentsAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string s;
                cin>>s;
                vector <string> attributesSelect;
                for (int k=0; k<s.size();k++){
                    if (s[k]>='1' && s[k]<='5'){
                        attributesSelect.push_back(StudentsAttributes[s[k]-'0'-1]);
                        // if (s[k]=='1')attributesSelect.push_back("StudFirstName");
                        // if (s[k]=='2')attributesSelect.push_back("StudLastName");
                        // if (s[k]=='3')attributesSelect.push_back("RollNumber");
                        // if (s[k]=='4')attributesSelect.push_back("StudPhoneNumber");
                        // if (s[k]=='5')attributesSelect.push_back("StudDeptId");
                    }
                    // else if (s[k]!=' '){
                    //     cout<<"Invalid Entry!\n";
                    //     return 0;
                    // }
                }
                cout<<"\nHow many Conditions would you like to check?\n";
                int i2;
                // cout<<"Yay!";
                cin>>i2;
                // cout<<"got i2!";
                cout<<"\n\n";
                if (i2==0){
                    Relation result = Student.select(attributesSelect);
                    result.Print();
                }
                else{
                    // map <string, string> valueCheck;
                    // vector <pair  <string, string> > valueCheck;
                    vector < vector <string> > valueCheck1;
                    while (i2--){
                        // pair <string, string> p;
                        string s1, s2, s3;
                        vector <string> temp;
                        cout<<"Enter Attribute to be Checked, condition (>, >=, <, <=, =) and the RHS : "; cin>>s1>>s2>>s3;
                        temp.push_back(s1); temp.push_back(s2); temp.push_back(s3); 
                        valueCheck1.push_back(temp);
                        // p.first = s1;
                        // p.second = s2;
                        // valueCheck.push_back(p);
                        // valueCheck[s1]=s2;
                    }
                    Relation result = Student.selectCondition(attributesSelect, valueCheck1);
                    cout<<"\n";
                    result.Print();
                }
                cout<<"\n";
            }
            else if (i1==2){
                cout<<"\nGreat choice! Select which attribute(s) you would like to Select:\n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<ProfessorsAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string s;
                cin>>s;
                vector <string> attributesSelect;
                for (int k=0; k<s.size();k++){
                    if (s[k]>='1' && s[k]<='5'){
                        attributesSelect.push_back(ProfessorsAttributes[s[k]-'0'-1]);
                        // if (s[k]=='1')attributesSelect.push_back("FirstName");
                        // if (s[k]=='2')attributesSelect.push_back("LastName");
                        // if (s[k]=='3')attributesSelect.push_back("FacultyID");
                        // if (s[k]=='4')attributesSelect.push_back("PhoneNumber");
                        // if (s[k]=='5')attributesSelect.push_back("DeptId");
                    }
                    // else if (s[k]!=' '){
                    //     cout<<"Invalid Entry!\n";
                    //     return 0;
                    // }
                }
                cout<<"\nHow many Conditions would you like to check?\n";
                int i2;
                // cout<<"Yay!";
                cin>>i2;
                // cout<<"got i2!";
                cout<<"\n\n";
                if (i2==0){
                    Relation result = Professor.select(attributesSelect);
                    result.Print();
                }
                else{
                    // map <string, string> valueCheck;
                    // vector <pair  <string, string> > valueCheck;
                    vector < vector <string> > valueCheck1;
                    while (i2--){
                        // pair <string, string> p;
                        string s1, s2, s3;
                        vector <string> temp;
                        cout<<"Enter Attribute to be Checked, condition (>, >=, <, <=, =) and the RHS : "; cin>>s1>>s2>>s3;
                        temp.push_back(s1); temp.push_back(s2); temp.push_back(s3); 
                        valueCheck1.push_back(temp);
                        // p.first = s1;
                        // p.second = s2;
                        // valueCheck.push_back(p);
                        // valueCheck[s1]=s2;
                    }
                    Relation result = Student.selectCondition(attributesSelect, valueCheck1);
                    cout<<"\n";
                    result.Print();
                }
                cout<<"\n";
            }
            else if (i1==3){
                cout<<"\nGreat choice! Select which attribute(s) you would like to Select:\n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<DepartmentsAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string s;
                cin>>s;
                vector <string> attributesSelect;
                for (int k=0; k<s.size();k++){
                    if (s[k]>='1' && s[k]<='5'){
                        attributesSelect.push_back(DepartmentsAttributes[s[k]-'0'-1]);
                        // if (s[k]=='1')attributesSelect.push_back("DName");
                        // if (s[k]=='2')attributesSelect.push_back("DPhoneNumber");
                        // if (s[k]=='3')attributesSelect.push_back("HOD_Id");
                        // if (s[k]=='4')attributesSelect.push_back("Location");
                        // if (s[k]=='5')attributesSelect.push_back("DDeptId");
                    }
                    // else if (s[k]!=' '){
                    //     cout<<"Invalid Entry!\n";
                    //     return 0;
                    // }
                }
                cout<<"\nHow many Conditions would you like to check?\n";
                int i2;
                // cout<<"Yay!";
                cin>>i2;
                // cout<<"got i2!";
                cout<<"\n\n";
                if (i2==0){
                    Relation result = Department.select(attributesSelect);
                    // Relation result = Professor;
                    result.Print();
                }
                else{
                    // map <string, string> valueCheck;
                    // vector <pair  <string, string> > valueCheck;
                    vector < vector <string> > valueCheck1;
                    while (i2--){
                        // pair <string, string> p;
                        string s1, s2, s3;
                        vector <string> temp;
                        cout<<"Enter Attribute to be Checked, condition (>, >=, <, <=, =) and the RHS : "; cin>>s1>>s2>>s3;
                        temp.push_back(s1); temp.push_back(s2); temp.push_back(s3); 
                        valueCheck1.push_back(temp);
                        // p.first = s1;
                        // p.second = s2;
                        // valueCheck.push_back(p);
                        // valueCheck[s1]=s2;
                    }
                    Relation result = Student.selectCondition(attributesSelect, valueCheck1);
                    cout<<"\n";
                    result.Print();
                }
                cout<<"\n";
            }
            else if (i1==4){
                cout<<"\nGreat choice! Select which attribute(s) you would like to Select:\n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<CoursesAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string s;
                cin>>s;
                vector <string> attributesSelect;
                for (int k=0; k<s.size();k++){
                    if (s[k]>='1' && s[k]<='5'){
                        attributesSelect.push_back(CoursesAttributes[s[k]-'0'-1]);
                        // if (s[k]=='1')attributesSelect.push_back("CName");
                        // if (s[k]=='2')attributesSelect.push_back("TeachingProfId");
                        // if (s[k]=='3')attributesSelect.push_back("Sem");
                        // if (s[k]=='4')attributesSelect.push_back("Credits");
                        // if (s[k]=='5')attributesSelect.push_back("CDeptID");
                    }
                    // else if (s[k]!=' '){
                    //     cout<<"Invalid Entry!\n";
                    //     return 0;
                    // }
                }
                // for (auto d:attributesSelect)cout<<d<<" ";
                cout<<"\nHow many Conditions would you like to check?\n";
                int i2;
                // cout<<"Yay!";
                cin>>i2;
                // cout<<"got i2!";
                cout<<"\n\n";
                if (i2==0){
                    Relation result = Courses.select(attributesSelect);
                    // Relation result = Professor;
                    result.Print();
                }
                else{
                    // map <string, string> valueCheck;
                    // vector <pair  <string, string> > valueCheck;
                    vector < vector <string> > valueCheck1;
                    while (i2--){
                        // pair <string, string> p;
                        string s1, s2, s3;
                        vector <string> temp;
                        cout<<"Enter Attribute to be Checked, condition (>, >=, <, <=, =) and the RHS : "; cin>>s1>>s2>>s3;
                        temp.push_back(s1); temp.push_back(s2); temp.push_back(s3); 
                        valueCheck1.push_back(temp);
                        // p.first = s1;
                        // p.second = s2;
                        // valueCheck.push_back(p);
                        // valueCheck[s1]=s2;
                    }
                    Relation result = Student.selectCondition(attributesSelect, valueCheck1);
                    cout<<"\n";
                    result.Print();
                }
                cout<<"\n";
            }

            else cout<<"! Invalid Entry! Try Again!";

        }
        else if (i==2)
        {
            cout<<"Which Table would you like to Project From?\n1. Student\n2. Professor\n3. Department\n4. Coureses\nInput (1/2/3/4): ";
            int i1;
            cin>>i1;
            if (i1==1){
                cout<<"\nGreat choice! Select which attribute(s) you would like to Project:\n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<StudentsAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string s;
                cin>>s;
                vector <string> attributesSelect;
                for (int k=0; k<s.size();k++){
                    if (s[k]>='1' && s[k]<='5'){
                        attributesSelect.push_back(StudentsAttributes[s[k]-'0'-1]);
                        // if (s[k]=='1')attributesSelect.push_back("StudFirstName");
                        // if (s[k]=='2')attributesSelect.push_back("StudLastName");
                        // if (s[k]=='3')attributesSelect.push_back("RollNumber");
                        // if (s[k]=='4')attributesSelect.push_back("StudPhoneNumber");
                        // if (s[k]=='5')attributesSelect.push_back("StudDeptId");
                    }
                    // else if (s[k]!=' '){
                    //     cout<<"Invalid Entry!\n";
                    //     return 0;
                    // }
                }
                Relation result = Student.project(attributesSelect);
                result.Print();
            }
            if (i1==2){
                cout<<"\nGreat choice! Select which attribute(s) you would like to Project:\n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<ProfessorsAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string s;
                cin>>s;
                vector <string> attributesSelect;
                for (int k=0; k<s.size();k++){
                    if (s[k]>='1' && s[k]<='5'){
                        attributesSelect.push_back(ProfessorsAttributes[s[k]-'0'-1]);
                        // if (s[k]=='1')attributesSelect.push_back("FirstName");
                        // if (s[k]=='2')attributesSelect.push_back("LastName");
                        // if (s[k]=='3')attributesSelect.push_back("FacultyID");
                        // if (s[k]=='4')attributesSelect.push_back("PhoneNumber");
                        // if (s[k]=='5')attributesSelect.push_back("DeptId");
                    }
                    // else if (s[k]!=' '){
                    //     cout<<"Invalid Entry!\n";
                    //     return 0;
                    // }
                }
                Relation result = Professor.project(attributesSelect);
                result.Print();
            }
            if (i1==3){
                cout<<"\nGreat choice! Select which attribute(s) you would like to Project:\n";
                 for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<DepartmentsAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string s;
                cin>>s;
                vector <string> attributesSelect;
                for (int k=0; k<s.size();k++){
                    if (s[k]>='1' && s[k]<='5'){
                        attributesSelect.push_back(DepartmentsAttributes[s[k]-'0'-1]);
                        // if (s[k]=='1')attributesSelect.push_back("DeptId");
                        // if (s[k]=='2')attributesSelect.push_back("HOD_Id");
                        // if (s[k]=='3')attributesSelect.push_back("Location");
                        // if (s[k]=='4')attributesSelect.push_back("Name");
                        // if (s[k]=='5')attributesSelect.push_back("PhoneNumber");
                    }
                    // else if (s[k]!=' '){
                    //     cout<<"Invalid Entry!\n";
                    //     return 0;
                    // }
                }
                Relation result = Department.project(attributesSelect);
                result.Print();
            }
            if (i1==4){
                cout<<"\nGreat choice! Select which attribute(s) you would like to Project:\n";
                 for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<CoursesAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string s;
                cin>>s;
                vector <string> attributesSelect;
                for (int k=0; k<s.size();k++){
                    if (s[k]>='1' && s[k]<='5'){
                        attributesSelect.push_back(CoursesAttributes[s[k]-'0'-1]);
                        // if (s[k]=='1')attributesSelect.push_back("Credits");
                        // if (s[k]=='2')attributesSelect.push_back("DeptID");
                        // if (s[k]=='3')attributesSelect.push_back("Name");
                        // if (s[k]=='4')attributesSelect.push_back("Sem");
                        // if (s[k]=='5')attributesSelect.push_back("TeachingProfId");
                    }
                    // else if (s[k]!=' '){
                    //     cout<<"Invalid Entry!\n";
                    //     return 0;
                    // }
                }
                Relation result = Courses.project(attributesSelect);
                result.Print();
            }
        }
        else if (i==3) 
        {
            cout<<"Which 2 Tables would you like to Take Cross Product From?\n1. Student\n2. Professor\n3. Department\n4. Coureses\nInput 2 Numbers (1 2 / 3 4): ";
            int i1, i2;
            cin>>i1>>i2;
            Relation r1, r2;
            if (i1==1)r1=Student; if (i1==2)r1=Professor; if (i1==3)r1=Department; if (i1==4)r1=Courses;
            if (i2==1)r2=Student; if (i2==2)r2=Professor; if (i2==3)r2=Department; if (i2==4)r2=Courses;
            Relation result = r1.crossProduct(r2);
            result.Print();
            
        }
        else if (i==4)
        {
            cout<<"In order to understand the function of set difference, we need to have two relations with overlapping tuples. Let us make a new Relation with only CSE Students.\n\n";
            // map <string, string> checkCondition;
            // vector <pair <string, str    ing> > checkCondition;
            vector <vector <string> > checkCondition1;
            vector <string> temp; 
            temp.push_back(StudentsAttributes[4]);
            temp.push_back("=");
            temp.push_back("1");
            checkCondition1.push_back(temp);
            pair <string, string> p;
            // p.first = StudentsAttributes[4]; p.second = "1"; checkCondition.push_back(p);
            // checkCondition[StudentsAttributes[4]]="1";
            vector <string> attributes;
            attributes.push_back(StudentsAttributes[2]); attributes.push_back(StudentsAttributes[4]); attributes.push_back(StudentsAttributes[0]); attributes.push_back(StudentsAttributes[1]); attributes.push_back(StudentsAttributes[3]);
            Relation CSEOnly = Student.selectCondition(attributes, checkCondition1);
            cout<<"CSE Only Students\n\n";
            CSEOnly.Print();
            cout<<"\nAll Students\n\n";
            Student.Print();
            cout<<"\nSet Difference of the Above Two Relations\n\n";
            Relation result = Student.SetDifference(CSEOnly);
            result.Print();
            cout<<"\n\n";
        }
        else if (i==5)
        {
            cout<<"Let us take two Relations. One of Professors of CSE Department, and other those of EEE Department.\n\n";
            // map <string, string> checkCondition;
            // vector <pair <string, string> > checkCondition;
            vector <vector <string> > checkCondition1;
            vector <string> temp;
            temp.push_back(ProfessorsAttributes[4]);
            temp.push_back("=");
            temp.push_back("1");
            checkCondition1.push_back(temp);
            // pair <string, string> p;
            // p.first = ProfessorsAttributes[4]; p.second = "1"; checkCondition.push_back(p);
            vector <string> attributes;
            attributes.push_back(ProfessorsAttributes[4]); attributes.push_back(ProfessorsAttributes[2]); attributes.push_back(ProfessorsAttributes[0]); attributes.push_back(ProfessorsAttributes[1]); attributes.push_back(ProfessorsAttributes[3]);
            Relation CSEProf = Professor.selectCondition(attributes, checkCondition1);
            checkCondition1.clear(); temp.clear();
            temp.push_back(ProfessorsAttributes[4]);
            temp.push_back("=");
            temp.push_back("2");
            checkCondition1.push_back(temp);
            // p.first = ProfessorsAttributes[4]; p.second = "2"; checkCondition.push_back(p);
            Relation EEEProf = Professor.selectCondition(attributes, checkCondition1);
            cout<<"CSE Only Professors\n\n";
            CSEProf.Print();
            cout<<"EEE Only Professors\n\n";
            EEEProf.Print();
            cout<<"\nUnion of the Above Two Relations\n\n";
            Relation result = CSEProf.Union(EEEProf);
            result.Print();
            cout<<"\n\n";
            
            
        }
        else if (i==6)
        {
            vector <pair<string, string> > toBeRenamed;
            cout<<"Which Table would you like to rename? \n1. Student\n2.Professor\n3. Department\n4. Courses\n. Enter a Single Number (1/2/3/4): ";
            int peace;
            cin>>peace;
            if (peace == 1){
                cout<<"Excellent Choice! Please enter which attribute(s) you wish to rename : \n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<StudentsAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string sim;
                cin>>sim;
                for (int j=0; j<sim.size(); j++){
                    pair <string, string> p;
                    cout<<"What do you wish to rename "<<StudentsAttributes[sim[j]-'0'-1]<<" as? Enter Here : ";
                    p.first = StudentsAttributes[sim[j]-'0'-1];
                    string ans;
                    cin>>ans;
                    p.second = ans;
                    StudentsAttributes[sim[j]-'0'-1] = ans;
                    toBeRenamed.push_back(p);
                }
                Student.Rename(toBeRenamed);
                cout<<"The New Student Relation is : \n";
                Student.Print();
            }
            else if (peace == 2){
                cout<<"Excellent Choice! Please enter which attribute(s) you wish to rename : \n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<ProfessorsAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string sim;
                cin>>sim;
                for (int j=0; j<sim.size(); j++){
                    pair <string, string> p;
                    cout<<"What do you wish to rename "<<ProfessorsAttributes[sim[j]-'0'-1]<<" as? Enter Here : ";
                    p.first = ProfessorsAttributes[sim[j]-'0'-1];
                    string ans;
                    cin>>ans;
                    p.second = ans;
                    ProfessorsAttributes[sim[j]-'0'-1] = ans;
                    toBeRenamed.push_back(p);
                }
                Professor.Rename(toBeRenamed);
                cout<<"The New Professor Relation is : \n";
                Professor.Print();
            }
            else if (peace == 3){
                cout<<"Excellent Choice! Please enter which attribute(s) you wish to rename : \n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<DepartmentsAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string sim;
                cin>>sim;
                for (int j=0; j<sim.size(); j++){
                    pair <string, string> p;
                    cout<<"What do you wish to rename "<<DepartmentsAttributes[sim[j]-'0'-1]<<" as? Enter Here : ";
                    p.first = DepartmentsAttributes[sim[j]-'0'-1];
                    string ans;
                    cin>>ans;
                    p.second = ans;
                    DepartmentsAttributes[sim[j]-'0'-1] = ans;
                    toBeRenamed.push_back(p);
                }
                Department.Rename(toBeRenamed);
                cout<<"The New Department Relation is : \n";
                Department.Print();
            }
            else if (peace == 4){
                cout<<"Excellent Choice! Please enter which attribute(s) you wish to rename : \n";
                for (int i=0; i<5; i++){
                    cout<<i+1<<". "<<CoursesAttributes[i]<<"\n";
                }
                cout<<"Enter Each number without space (Eg: 123) : ";
                string sim;
                cin>>sim;
                for (int j=0; j<sim.size(); j++){
                    pair <string, string> p;
                    cout<<"What do you wish to rename "<<CoursesAttributes[sim[j]-'0'-1]<<" as? Enter Here : ";
                    p.first = CoursesAttributes[sim[j]-'0'-1];
                    string ans;
                    cin>>ans;
                    p.second = ans;
                    CoursesAttributes[sim[j]-'0'-1] = ans;
                    toBeRenamed.push_back(p);
                }
                Courses.Rename(toBeRenamed);
                cout<<"The New Department Relation is : \n";
                Courses.Print();
            }
        }
        else if (i==7){
            cout<<"\n\nThanks for your time! See you later.\n";
            cout<<"\n X---X A DBMS PROJECT X--X\n";
            break;
        }
        else {
            cout<<"Invalid Entry! Try Again!";
        }
    }
}

int main() 
{
    demo();
    // demo1();
    return 0;
}