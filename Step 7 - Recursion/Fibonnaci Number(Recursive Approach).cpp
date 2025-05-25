class Solution {
public:
    int fib(int n) { // define a function fib that return nth fibonaaci number
        if(n == 0) return 0;
        if(n == 1) return 1;

        //simple logic to find the nth fibonnaci number
        return fib(n-1) + fib(n-2);

        
    }
};
