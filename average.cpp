#include<iostream>
using namespace std;

int main(int argc, char ** argv){

    double avg;
    double x[argc] = {};
    if(argc == 1){
        cout << "Please input numbers to find average.";
    } else {
        cout << "---------------------------------" << endl;
        cout << "Average of " << argc-1 ;
        for(int i = 0; i< argc; i++){
            x[i] = atoi(argv[i]);

        }
        for(int i = 0; i< argc; i++){
            avg = avg + x[i];

        }
        avg = avg/(argc-1);
        cout << " numbers = " << avg << endl;
        cout << "---------------------------------";
    }
    

    return 0;
}