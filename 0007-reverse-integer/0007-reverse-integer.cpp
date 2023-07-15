class Solution {
public:
    int reverse(int x){
    int rev,temp=x;
    long sum=0;
    while(temp!=0){
        rev=temp%10;
        sum=(sum*10)+rev;
        temp=temp/10;
    }
    if(sum<=INT_MAX && sum>=INT_MIN)
        return sum;
    else
        return 0;
    }
};