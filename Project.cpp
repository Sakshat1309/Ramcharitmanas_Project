#include<iostream>
#include<map>
#include<vector>
#include <chrono>
#include <thread>

using namespace std;
string GetAnswer(int val){
   map<int,string> store;
   store.insert(make_pair(1,"Sunu siya satya Asees hamari , poojahi mannokaamna tumhari "));
   store.insert(make_pair(2,"Prabisi Nagar kijay sab kaaja, hridayam rakhi kosalpur raaja "));
   store.insert(make_pair(3,"Ugrahi ant na hoi nibahu , kaalnemi jimi jaavan raahu "));
   store.insert(make_pair(4,"Bidhi bas sujan kusangat parahi , fani mani nij gunn anusarahi"));
   store.insert(make_pair(5,"This is a special case in which the question you asked does not have a definit answer and it should be left to god"));
   store.insert(make_pair(6,"Mud mangalmay sant samaju, jo jagg jangamm teerath raaju"));
   store.insert(make_pair(7,"Garal sudha ripu karahi mitayi , gopad sindhu annal satlayi"));
   store.insert(make_pair(8,"Baroon kuber sures sameera, Ran sanmukh dhari kaahun na dhari"));
   store.insert(make_pair(0,"Safal manorath houn tumhare , Ram lakahnu suni bhay sukahre"));
   auto it = store.find(val);
   return it->second;
}
string GetMeaning(int val){
    if(val==1||val==2||val==6||val==7||val==9){
        return "Yes your work will be successful ";
    }
    if(val==8||val==5||val==3){
        return "There is no surity that it will be successful or not";
    }
    if(val==4){
        return "There is no surity that it will be successful or not -- Change your company you are in bad company";
    }
}

int main(){
      using namespace std::this_thread; // sleep_for, sleep_until
      using namespace std::chrono; 
      cout<<"Think of a Question in your mind "<<endl;
      sleep_until(system_clock::now() + seconds(10));
      cout<<"Think of lord rama and ask him for an answer"<<endl;
      sleep_until(system_clock::now() + seconds(2));
      cout<<"Jai Shree Raam"<<endl;
      sleep_until(system_clock::now() + seconds(2));
      cout<<"Enter a number between 1 and 225"<<endl;
      int num;
      cin>>num;
      cout<<"the number you have enterred is "<<num<<endl;

      if(num<=0 || num>225){
        cout<<"***** Wrong input enter only between 1 and 225 *****"<<endl;
        return 0;
      }

      num=num%9;
      string answer;
      answer = GetAnswer(num);
      cout<<"The corresponding doha is :\n "<<answer<<endl;
      string meaning;
      meaning = GetMeaning(num);
      sleep_until(system_clock::now() + seconds(2));

      cout<<"Your answer is : "<<meaning<<endl;
     return 0;

}