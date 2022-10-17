#include <iostream>
using namespace std;


int knapsack(int maxWeight, int weights[], int values[], int N){

    if(N == 0 || maxWeight == 0){
        return 0;
    }

    if(weights[N-1] > maxWeight){
        return knapsack(maxWeight, weights, values, N-1);

    }else{
        return max((values[N-1] + knapsack(maxWeight - weights[N-1] , weights, values, N-1)), knapsack(maxWeight, weights, values, N-1));
    }

}


int main()
{
    int N;
    int n;
    int maxWeight;

    cin>>N;
    int values[N];
    int weights[N];

    for(int i=0; i<N; i++){
        cin>>n;
        values[i] = n;
    }

     for(int i=0; i<N; i++){
        cin>>n;
        weights[i] = n;
    }

    cin>>maxWeight;

    cout<<knapsack(maxWeight, weights, values, N);

    return 0;
}
