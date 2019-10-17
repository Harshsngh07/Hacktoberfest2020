# basic method to determine whether to output "fizz" (if divisible by 3), "buzz" (if divisible by 5), or "fizzbuzz" (if divisible by 3 and 5).

def fizzbuzz(number)
    if (number % 3 === 0) && (number % 5 === 0)
        p "FizzBuzz"
    elsif (number % 3 === 0)
        p "Fizz"
    elsif (number % 5 === 0)
        p "Buzz"
    end
end
