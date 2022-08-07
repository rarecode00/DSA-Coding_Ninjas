int helper(int n){
    if(n == 0) return 0;
    if(n % 10 == 0) return 1 + helper(n / 10);
    else return helper(n / 10);
}

int countZeros(int n) {
   if(n == 0) return 1;
   return helper(n);
}


