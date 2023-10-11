int Solution::reverse(int A) {
        int ans=0;
        while(A)
        {
            int digit=A%10;
            A=A/10;
            if((ans<INT_MIN/10)||(ans>INT_MAX/10))
                return 0;
            ans=digit+(ans*10);
        }

        return ans; 
}
