int power(int n , int a){
    if(a == 0) return 1;
    return n * power(n , a - 1);
}

double geometricSum(int k) {
    if(k == 0) return 1;
    return 1 / (power(2 , k) * 1.0) + geometricSum(k - 1);
}


