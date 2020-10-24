// The Fibonacci sequence is a series of numbers where a number is the addition of the last two numbers, starting with 0, and 1.

function fibonacci(num){
    var a = 1, b = 0, temp;
  
    while (num >= 0){
      temp = a;
      a = a + b;
      b = temp;
      num--;
    }
  
    return b;
  }