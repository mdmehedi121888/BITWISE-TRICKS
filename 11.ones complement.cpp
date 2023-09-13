int onesComplement(int n){
        int numofbits = log2(n)+1;
        return (((1<<numofbits)-1)^n);
    }