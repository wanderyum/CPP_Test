#include <iostream>
#include <vector>

class parent;
class son1;
class son2;

class parent{
public:
    /* 这里的virtual至关重要 */
    virtual void intro(){std::cout << "parent!\n";}
};

class son1: public parent{
public:
    virtual void intro(){std::cout << "son1!\n";}
};

class son2: public parent{
public:

    virtual void intro(){std::cout << "son2!\n";}
};


int main(){
    std::vector<parent> vec, vec1;
    std::vector<parent*> pvec;

    parent P;
    son1 S1;
    son2 S2;
    vec.push_back(P);
    vec.push_back(S1);
    vec.push_back(S2);

    for (auto &v: vec){
        v.intro();
    }
    std::cout << "-------\n";
    parent *pp;
    for (int i=0; i<vec.size(); i++){
        pp = &vec[i];
        pp->intro();
    }
    std::cout << "-------\n";

    parent* pP = new parent;
    son1* pS1 = new son1;
    son2* pS2 = new son2;
    pvec.push_back(pP);
    pvec.push_back(pS1);
    pvec.push_back(pS2);

    for (auto &v: pvec){
        v->intro();
    }
    std::cout << "-------\n";

    vec1.push_back(*pP);
    vec1.push_back(*pS1);
    vec1.push_back(*pS2);
    for (int i=0; i<vec1.size(); i++){
        pp = &vec1[i];
        pp->intro();
    }
    std::cout << "-------\n";
    parent *pP1 = pS1;
    pP1->intro();

    return 0;
}