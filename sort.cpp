#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
void bubbleSort(auto & D){

for(auto i = 0u; i < D.size(); i++)
for(auto j = 0u; j < D.size()-1; j++)
     if(D[j] > D[j+1])
	swap(D[j], D[j+1]);
}



int main()
{
  vector<string> inputs;
  string search_key, input;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  cout<<"Would you like to sort Data? ";


   cin>>search_key;
 
    while(search_key != "#")//perform searches until sentinel entered
    {
        bubbleSort(inputs);

        cout<<" Program will begin sorting "<<"...";

         for (auto i = 0u; i < inputs.size(); i++){
          cout<<" "<<inputs[i]<<" "<<endl;
         }


        cout<<endl<<endl<<"Would you like to search again? ";
        cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;
}
