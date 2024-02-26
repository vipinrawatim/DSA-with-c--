    #include<iostream>
    using namespace std;
    int add(int a, int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    int main () {
    int a,b,c;
    cout<<"enter the first and secound number ";
    cin>>a>>b>>c;
    int sum1=add(a,b);
    int sum2=add(a,b,c);
    cout<<"the sum of the number is "<<sum1<<endl;
    cout<<"the sum of the number is "<<sum2<<endl;
        return 0;
    }