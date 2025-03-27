/*#include <iostream>
using namespace std;

double count = 0;


double func(int n) {
    if (n == 1) {
        count += 1.0 / n;  
        return count;      
    } else {
        count += 1.0 / n;  
        return func(n - 1); 
    }
}

int main() {
    int n;
 
    cout << "Enter the value of n: ";
    cin >> n;
    double result = func(n);

    cout << "The result of the series is: " << result << endl;
    cout << "The value of global count is: " << count << endl;

    return 0;
} */
#include <iostream>
using namespace std;
double sum=0;
void harmonic(int n){
    if(n==0){
        cout<<"harmonic sum"<<sum<<endl;
    }
    else{
        sum+=1.0/n;
        harmonic(n-1);
    }
}
void harmonic(){
    static int n;
    static bool inputTaken=false;
    if(!inputTaken){
        cout<<"enter a number";
        cin >> n;
        inputTaken= true;
    }
    if(n==0){
        cout<<"harmonic sum:"<<sum;
    }
    else{
        sum+=(1.0/n);
        n--;
        harmonic();
    }
}
int main(){
    harmonic();
    return 0;
}
