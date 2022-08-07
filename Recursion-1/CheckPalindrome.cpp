int length(char input[]){
    if(input[0] == '\0') return 0;
    return 1 + length(input + 1);
}

bool helper(char input[] , int si , int ei){
     if(ei - si <= 0) return true;
     if(input[si] != input[ei]) return false;
     return helper(input , si + 1 , ei - 1);
}

bool checkPalindrome(char input[]) {
    return helper(input , 0 , length(input) - 1);
}



