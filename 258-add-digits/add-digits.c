int addDigits(int num) {
    int temp=num;
        int rem,sum=0;
        while(temp>=0) {
            
            rem=temp%10;
            temp=temp/10;
            temp=rem+temp;
            if(temp>=0 && temp<10) {
                break;
            }

        }
        return temp;
    
}