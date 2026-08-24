class Solution {
    public boolean isSameAfterReversals(int num) {

int temp=num;
    int ans=0;
    int rem=0;
    while(temp!=0) {
        rem=temp%10;
        temp=temp/10;
        ans=ans*10 + rem ;

    }
    int temp1=ans;
    int res=0;
    rem=0;
    while(temp1!=0) {
        rem=temp1%10;
        temp1=temp1/10;
        res=res*10 +rem;
    }
    if(num==res) {
        return true;
    }
    else    {
        return false;
    }
        
        
    }
}