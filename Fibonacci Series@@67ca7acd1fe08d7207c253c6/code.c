void fibonacciSeries(n){
    if(n==0 || n==1) return 1;
    int Ansd= fibonacciSeries(n-1) + fibonacciSeries(n-2);
    return (Ansd);
}