
int helper(int input[] , int i ,  int size , int x , int it , int output[]){
     if(i == size) return it;
     if(input[i] == x){
         output[it] = i;
         return helper(input , i + 1 , size , x , it + 1 , output);
     }
     return helper(input , i + 1 , size , x , it , output);
}

int allIndexes(int input[], int size, int x, int output[]) {
    return helper(input ,  0 , size , x , 0 , output);
}
