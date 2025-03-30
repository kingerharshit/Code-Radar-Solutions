fibonacciSeries(n);

if(n==1){
        return 0;
    }
    
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN= fibNm1 + fibNm2;
    