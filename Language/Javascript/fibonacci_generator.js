// Calculate given Fibonacci number
// fibonacci numbers are Fn = Fn-1 + Fn-2
// ex : 0, 1, 1, 2, 3, 5 ... 

function fibonacci(n) {
    if (n == 0 || n == 1 || n==2) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
  }
  
  console.log(fibonacci(10));
  