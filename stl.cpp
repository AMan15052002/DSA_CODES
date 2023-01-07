#include<iostream>
#include<algorithm>
using namespace std;
bool comp(pair<int ,int>p1 , pair<int ,int>p2){
    if(p1.second<p2.second){
        return true;
    }
    else if(p1.first>p2.first){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    //int arr[]={100,200,300,400,500,600,700};
    //int n=7;
    //sort(arr,arr+7,greater<int>());
    //for(int i=0;i<7;i++){
        //cout<<arr[i]<<endl;
    //}
    pair<int ,int> a[]={{1,4,},{2,1},{4,1}};
    cout<<comp();
    return 0;

}

//comparators....
