# first method finds the nth fibonacci number. second method outputs the fibonacci sequence to the nth place.

def fibonacci_of_a_number(number)
    num1 = 0
    num2 = 1

    number.times do
        previous_num = num1
        num1 = num2
        num2 = previous_num + num1
    end

    return num1
end

def fibonacci_sequence(number)
    number.times do |num|
        fibonacci_number = fibonacci_of_a_number(num)
        puts fibonacci_number
    end
end