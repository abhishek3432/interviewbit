int Solution::numSetBits(unsigned int A) {

        short count=0;
        //work for any lenth
        while(A)
        {
            if(A&1)
                count++;
            A=A>>1;            

        }
        
        return count;
}
